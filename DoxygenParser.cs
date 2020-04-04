using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Text;
using System.Xml;
using System.Xml.Serialization;

namespace wxSharp
{
    [DebuggerDisplay("{name}")]
    public class DoxygenNode
    {
        public string d_id = string.Empty;
        public string name = string.Empty;

        public DoxygenNode parent = null;
        public List<DoxygenNode> children = new List<DoxygenNode>(0);

        public static string GenerateFullName(DoxygenNode node)
        {
            var fullName = new System.Text.StringBuilder();

            while (node != null)
            {
                fullName.Insert(0, node.name + '.');
                node = node.parent;
            }

            fullName.Length -= 1;

            return fullName.ToString();
        }
    }

    public enum ProtectionLevel
    {
        _UNKNOWN_ = 0,
        Public,
        Private,
        Protected,
        Internal
    }

    public interface IDoxygenNode
    {
        DoxygenNode node { get; set; }
        string briefDescription { get; set; }
        string remarks { get; set; }
        ProtectionLevel protection { get; set; }
    }

    public class CompoundDefinition : IDoxygenNode
    {
        public DoxygenNode node { get; set; }
        public string briefDescription { get; set; }
        public string remarks { get; set; }
        public ProtectionLevel protection { get; set; }
    }

    public class NamespaceDefinition : CompoundDefinition
    {
        public string language = "unknown";
    }

    public class ObjectDefinition : CompoundDefinition
    {
        public TypeDescription baseType = null;
        public List<TypeDescription> interfaces = new List<TypeDescription>(0);
    }

    public class ClassDefinition : ObjectDefinition { }
    public class StructDefinition : ObjectDefinition { }
    public class InterfaceDefinition : ObjectDefinition { }

    public enum MemberKind
    {
        _UNKNOWN_ = 0,
        Variable,
        Method,
        Event,
        Property,
        Constructor,
        Enum,
    }

    public abstract class MemberDefinition : IDoxygenNode
    {
        public DoxygenNode node { get; set; }
        public string briefDescription { get; set; }
        public string remarks { get; set; }
        public ProtectionLevel protection { get; set; }

        public TypeDescription type = new TypeDescription();
        public bool isConst = false;
        public bool isStatic = false;
        public string initializedValue = null;
    }

    public class TypedefDefinition : MemberDefinition
    {

    }

    public class FriendDefinition : MemberDefinition
    {

    }

    public class FunctionDefinition : MemberDefinition
    {
        public List<FunctionParameter> parameters = new List<FunctionParameter>();
        public string returnDescription = null;
    }

    public class PropertyDefinition : MemberDefinition
    {
        public ProtectionLevel getterProtection = ProtectionLevel._UNKNOWN_;
        public ProtectionLevel setterProtection = ProtectionLevel._UNKNOWN_;
    }

    public class VariableDefinition : MemberDefinition { }
    public class EventDefinition : MemberDefinition { }
    public class EnumDefinition : MemberDefinition { }
    public class EnumValueDefinition : MemberDefinition { }

    public class TypeDescription
    {
        public string name = string.Empty;
        public string d_id = null;
        public bool isRef = false;
        public bool isArray = false;

        public List<TypeDescription> templatedTypes = null;
    }

    public class FunctionParameter
    {
        public string name = string.Empty;
        public TypeDescription type = null;
        public string description = null;

        public bool isOutParam = false;
        public bool isRefParam = false;
    }

    public static class DoxygenParser
    {
        public static Dictionary<DoxygenNode, IDoxygenNode> Nodes;

        private static StringBuilder outputLog;

        // ---------[ FUNCTION MAPPING ]---------
        private delegate void ProcessNode(XmlNode xmlNode, DoxygenNode parentNode);

        // private static Dictionary<string, Action<XmlNode, IDefinition>> nodeActionMap = new Dictionary<string, Action<XmlNode, IDefinition>>
        private static Dictionary<string, ProcessNode> nodeActionMap = new Dictionary<string, ProcessNode>
        {
            { "compounddef", DoxygenParser.ProcessCompound },
            { "memberdef", DoxygenParser.ProcessMember },
            { "innerclass", DoxygenParser.ProcessInnerClass },
            { "innernamespace", DoxygenParser.ProcessInnerNamespace },
            { "sectiondef", DoxygenParser.ProcessSection },
            { "type", DoxygenParser.ProcessType },
            { "briefdescription", DoxygenParser.ProcessBriefDescription },
            { "detaileddescription", DoxygenParser.ProcessDetailedDescription },
            { "listofallmembers", DoxygenParser.ProcessListOfAllMembers },
            { "name", DoxygenParser.ProcessName },
            { "compoundname", DoxygenParser.ProcessCompoundName },
            { "basecompoundref", DoxygenParser.ProcessBaseCompoundRef },
            { "param", DoxygenParser.ProcessParam },
            { "initializer", DoxygenParser.ProcessInitializer },
            { "enumvalue", DoxygenParser.ProcessEnumValue },
        };

        private static List<string> nodesToSkip = new List<string>()
        {
            "#text",
            "scope",
            "definition",
            "argsstring",
            "inheritancegraph",
            "collaborationgraph",
            "inbodydescription",
            "location",
            "derivedcompoundref",
            "templateparamlist",
            "reimplements",
            "reimplementedby",
        };

        public delegate IDoxygenNode CreateDefinitionDelegate(XmlNode xmlNode);

        private static Dictionary<string, CreateDefinitionDelegate> nodeKindCreationMap =
                new Dictionary<string, CreateDefinitionDelegate>()
        {
            { "namespace",  CreateNamespaceDefinition },
            { "property",   CreatePropertyDefinition },
            { "class",      (n) => new ClassDefinition() },
            { "struct",     (n) => new StructDefinition() },
            { "interface",  (n) => new InterfaceDefinition() },
            { "variable",   (n) => new VariableDefinition() },
            { "function",   (n) => new FunctionDefinition() },
            { "event",      (n) => new EventDefinition() },
            { "enum",       (n) => new EnumDefinition() },
            { "enumvalue",  (n) => new EnumValueDefinition() },
            { "typedef",  (n) => new TypedefDefinition() },
            { "friend",  (n) => new FriendDefinition() },
        };

        private static List<string> ignoredKinds = new List<string>()
        {
            "file",
            "dir",
            "page"
        };

        // ---------[ BASICS ]---------

        public static void Initialize()
        {
            outputLog = new StringBuilder();
            Nodes = new Dictionary<DoxygenNode, IDoxygenNode>();
        }

        public static void ParseFile(string filePath)
        {
            outputLog.Append("\n--------------------\nParsing file: " + filePath + '\n');

            XmlDocument doc = new XmlDocument();
            doc.Load(filePath);

            ProcessChildNodes(doc.DocumentElement, null);
        }

        private static DoxygenNode FindDefinitionNodeById(string d_id)
        {
            foreach (DoxygenNode node in Nodes.Keys)
            {
                if (node.d_id == d_id) { return node; }
            }

            return null;
        }

        private static DoxygenNode FindDefinitionNodeByName(string name)
        {
            foreach (DoxygenNode node in Nodes.Keys)
            {
                if (node.name == name) { return node; }
            }

            return null;
        }

        private static DoxygenNode GetOrCreateNodeWithDefinition(string nodeId,
                                                                    CreateDefinitionDelegate createDefinition,
                                                                    XmlNode xmlNode)
        {
            // - get node -
            DoxygenNode node = FindDefinitionNodeById(nodeId);

            if (node == null)
            {
                outputLog.Append(". new node [" + nodeId + "]\n");

                node = new DoxygenNode();
                node.d_id = nodeId;

                Nodes.Add(node, null);
            }

            IDoxygenNode definition = Nodes[node];
            if (definition == null)
            {
                outputLog.Append(". creating definition\n");

                definition = createDefinition(xmlNode);
                definition.node = node;

                Nodes[node] = definition;
            }

            return node;
        }

        private static IEnumerable<DoxygenNode> FindDefinitionNodesWithName(string name)
        {
            foreach (DoxygenNode node in Nodes.Keys)
            {
                if (node.name == name) { yield return node; }
            }
        }

        private static TypeDescription ParseTypeDescription(XmlNode node)
        {
            XmlNode nodeClone = node.CloneNode(true);

            nodeClone.InnerXml = nodeClone.InnerXml.Replace("&lt;", "<template>")
                                                   .Replace("&gt;", "</template>")
                                                   .Replace("const", "")
                                                   .Replace("static", "")
                                                   .Replace("readonly", "")
                                                   .Replace("out ", "")
                                                   .Replace("<ref ", "__R__")
                                                   .Replace("ref ", "")
                                                   .Replace("__R__", "<ref ")
                                                   .Replace("[]", "<array/>");

            outputLog.Append(". member type (INNERXML): " + nodeClone.InnerXml + '\n');

            if (nodeClone.FirstChild == null) { return null; }

            outputLog.Append(". member type (DEBUG): ");
            TypeDescription[] results = ProcessTypeNode(nodeClone.FirstChild);
            outputLog.Append('\n');


            TypeDescription td;
            if (results.Length == 1)
            {
                td = results[0];
            }
            else
            {
                outputLog.Append("WARNING: Unexpected type count returned (" + results.Length + ")\n");
                td = new TypeDescription();
            }

            outputLog.Append(". member type: " + td.name + '\n');

            return td;
        }

        private static TypeDescription[] ProcessTypeNode(XmlNode node)
        {
            TypeDescription[] retVal;

            bool isTemplated = (node.NextSibling != null
                                && node.NextSibling.Name == "template");

            bool isArray = (node.NextSibling != null && node.NextSibling.Name == "array");
            isArray |= (isTemplated && node.NextSibling.NextSibling != null
                        && node.NextSibling.NextSibling.Name == "array");

            switch (node.Name)
            {
                // Handled by previous node
                case "template":
                    {
                        outputLog.Append(".t");
                    }
                    return null;
                case "array":
                    {
                        outputLog.Append(".a");
                    }
                    return null;

                case "#text":
                    {
                        string[] typeNames = node.Value.Replace(" ", "").Split(',');
                        retVal = new TypeDescription[typeNames.Length];

                        for (int i = 0; i < typeNames.Length; ++i)
                        {
                            bool isThisTypeArray = (isArray && i == typeNames.Length - 1);

                            retVal[i] = new TypeDescription()
                            {
                                name = typeNames[i],
                                isRef = false,
                                isArray = isThisTypeArray,
                            };

                            outputLog.Append(".I:" + retVal[i].name
                                             + (isThisTypeArray ? "[ARRAY]" : "")
                                             + ',');
                        }

                        outputLog.Length -= 1;
                    }
                    break;

                case "ref":
                    {
                        TypeDescription desc = new TypeDescription()
                        {
                            name = node.InnerText,
                            d_id = node.Attributes["refid"].Value,
                            isRef = true,
                        };
                        desc.isArray = isArray;

                        retVal = new TypeDescription[1];
                        retVal[0] = desc;

                        outputLog.Append(".R:" + desc.name
                                         + (isArray ? "[ARRAY]" : ""));
                    }
                    break;

                default:
                    {
                        outputLog.Append("WARNING: Unrecognised tag in type node (" + node.Name + ")\n");
                        retVal = new TypeDescription[] { new TypeDescription() };
                    }
                    break;
            }

            if (isTemplated)
            {
                TypeDescription parentDesc = retVal[retVal.Length - 1];
                parentDesc.templatedTypes = new List<TypeDescription>();

                outputLog.Append(".T<");
                foreach (XmlNode childNode in node.NextSibling.ChildNodes)
                {
                    if (childNode.Name != "template")
                    {
                        parentDesc.templatedTypes.AddRange(ProcessTypeNode(childNode));
                    }
                }
                outputLog.Append(">");
            }

            return retVal;
        }

        private static FunctionParameter GetOrCreateFunctionParameter(FunctionDefinition definition,
                                                                      string paramName)
        {
            foreach (FunctionParameter parameter in definition.parameters)
            {
                if (parameter.name == paramName)
                {
                    outputLog.Append(". found exisiting param: " + paramName + '\n');
                    return parameter;
                }
            }

            FunctionParameter newParam = new FunctionParameter();
            newParam.name = paramName;
            definition.parameters.Add(newParam);

            outputLog.Append(". added new param: " + paramName + '\n');

            return newParam;
        }

        // --------- [PROCESSING] ---------
        private static void ProcessChildNodes(XmlNode xmlNode, DoxygenNode parentNode)
        {
            outputLog.Append("Processing children of " + xmlNode.Name + " for parent [" + (parentNode == null ? "NULL" : parentNode.d_id) + "]\n");

            foreach (XmlNode xmlChildNode in xmlNode.ChildNodes)
            {
                ProcessNode nodeAction;
                if (nodesToSkip.Contains(xmlChildNode.Name))
                {
                    outputLog.Append("Ignoring " + xmlChildNode.Name + " node\n");
                    continue;
                }
                else if (nodeActionMap.TryGetValue(xmlChildNode.Name, out nodeAction))
                {
                    outputLog.Append("Processing " + xmlChildNode.Name + " node\n");
                    nodeAction(xmlChildNode, parentNode);
                }
                else
                {
                    outputLog.Append("WARNING: \"" + xmlChildNode.Name
                                     + "\" is unhandled node type\n");
                }
            }
        }

        // --- Basic Nodes ---
        private static void ProcessName(XmlNode node, DoxygenNode parentNode)
        {
            parentNode.name = node.InnerText.Trim().Replace("< ", "<").Replace(" >", ">");
            outputLog.Append(". name is " + parentNode.name + '\n');
        }

        private static void ProcessCompoundName(XmlNode node, DoxygenNode parentNode)
        {
            string[] nameParts = node.InnerText.Replace("::", ".").Split('.');
            parentNode.name = nameParts[nameParts.Length - 1];
            outputLog.Append(". name is " + parentNode.name + '\n');
        }

        private static void ProcessSection(XmlNode node, DoxygenNode parentNode)
        {
            outputLog.Append(". kind: " + node.Attributes["kind"].Value + '\n');
            ProcessChildNodes(node, parentNode);
        }

        private static void ProcessType(XmlNode node, DoxygenNode parentNode)
        {
            // skip if enum
            if (Nodes[parentNode] is EnumDefinition) { return; }

            MemberDefinition memberDefinition = Nodes[parentNode] as MemberDefinition;

            string typeString = node.InnerText;

            if (typeString.Contains("const "))
            {
                memberDefinition.isConst = true;
                //memberDefinition.isStatic = (mode == WikiMode.Unity);
            }
            if (typeString.Contains("readonly "))
            {
                memberDefinition.isConst = true;
            }

            TypeDescription typeDescription = ParseTypeDescription(node);
            memberDefinition.type = typeDescription;
        }

        private static void ProcessParam(XmlNode xmlNode, DoxygenNode parentNode)
        {
            string paramName = xmlNode["declname"]?.InnerText;

            FunctionDefinition definition = Nodes[parentNode] as FunctionDefinition;
            FunctionParameter parameter = GetOrCreateFunctionParameter(definition, paramName);

            parameter.type = ParseTypeDescription(xmlNode["type"]);
        }

        private static void ProcessDetailedDescription(XmlNode xmlNode, DoxygenNode parentNode)
        {
            outputLog.Append(". detailed description (DEBUG): ");

            IDoxygenNode definition = Nodes[parentNode];

            StringBuilder sb = new StringBuilder();
            ParseDescriptionXML(xmlNode, definition, sb);
            definition.remarks = sb.ToString().Trim();
        }

        private static void ParseDescriptionXML(XmlNode node,
                                                IDoxygenNode definition,
                                                StringBuilder currentString)
        {
            outputLog.Append("START:" + node.Name + '-');

            // - open tag -
            switch (node.Name)
            {
                // ignore
                case "parameternamelist":
                    return;

                case "detaileddescription":
                case "briefdescription":
                case "para":
                case "parameterdescription":
                case "#text":
                    break;

                case "ulink":
                    {
                        currentString.Append('[');
                    }
                    break;

                case "ref":
                    {
                        currentString.Append("[[");
                    }
                    break;

                case "parameterlist":
                    {
                        if (!(definition is FunctionDefinition))
                        {
                            outputLog.Append("\nWARNING: Definition is not a function definition\n");
                            return;
                        }

                        if (node.Attributes["kind"].Value != "param")
                        {
                            outputLog.Append("\nWARNING: Unhandled parameterlist kind ("
                                             + node.Attributes["kind"].Value + ")\n");
                            return;
                        }
                    }
                    break;

                case "parameteritem":
                    {
                        if (node.ChildNodes.Count != 2)
                        {
                            outputLog.Append("\nWARNING: Unexpected child count = " + node.ChildNodes.Count + '\n');
                        }

                        if (node["parameternamelist"].ChildNodes.Count != 1)
                        {
                            outputLog.Append("\nWARNING: Unexpected child count for parameternamelist = "
                                             + node["parameternamelist"].ChildNodes.Count + '\n');
                        }

                        currentString = new StringBuilder();
                    }
                    break;

                case "simplesect":
                    {
                        if (!(definition is FunctionDefinition))
                        {
                            outputLog.Append("\nWARNING: Definition is not a function definition\n");
                            return;
                        }

                        if (node.Attributes["kind"].Value != "return")
                        {
                            outputLog.Append("\nWARNING: Unhandled simplesect kind ("
                                             + node.Attributes["kind"].Value + ")\n");
                            return;
                        }

                        currentString = new StringBuilder();
                    }
                    break;

                case "itemizedlist":
                    {
                        currentString.Append('\n');
                    }
                    break;

                case "listitem":
                    {
                        currentString.Append("- ");
                    }
                    break;

                default:
                    {
                        outputLog.Append("\nWARNING: Unrecognized tag in description (" + node.Name + ")\n");
                    }
                    break;
            }

            // - innards -
            if (node.HasChildNodes)
            {
                foreach (XmlNode childNode in node.ChildNodes)
                {
                    ParseDescriptionXML(childNode, definition, currentString);
                }
            }
            else if (node.Value != null)
            {
                currentString.Append(node.InnerText);
            }

            // - close tag -
            switch (node.Name)
            {
                case "para":
                    {
                        currentString.Append("\n\n");
                    }
                    break;

                case "ulink":
                    {
                        currentString.Append("](" + node.Attributes["url"].Value + ")");
                    }
                    break;

                case "ref":
                    {
                        currentString.Append("]]");
                    }
                    break;

                case "parameteritem":
                    {
                        string paramName = node["parameternamelist"]["parametername"].InnerText;

                        FunctionDefinition functionDefinition = definition as FunctionDefinition;

                        FunctionParameter param = GetOrCreateFunctionParameter(functionDefinition, paramName);
                        param.description = currentString.ToString().Trim();
                    }
                    break;

                case "simplesect":
                    {
                        FunctionDefinition functionDefinition = definition as FunctionDefinition;
                        functionDefinition.returnDescription = currentString.ToString().Trim();
                    }
                    break;

                case "listitem":
                    {
                        currentString.Length -= 1; // remove extra '\n'
                    }
                    break;
            }

            outputLog.Append("END:" + node.Name + '-');
        }

        private static void ProcessBaseCompoundRef(XmlNode xmlNode, DoxygenNode parentNode)
        {
            ObjectDefinition objectDefinition = Nodes[parentNode] as ObjectDefinition;
            TypeDescription typeDescription = ParseTypeDescription(xmlNode);
            bool isInterface = false;

            if (xmlNode.Attributes["refid"] != null)
            {
                string refId = xmlNode.Attributes["refid"].Value;
                typeDescription.d_id = refId;
                typeDescription.isRef = true;

                isInterface = (refId.Contains("interface_"));
            }

            if (isInterface)
            {
                objectDefinition.interfaces.Add(typeDescription);
                outputLog.Append(". set as interface\n");
            }
            else
            {
                objectDefinition.baseType = typeDescription;
                outputLog.Append(". set as base class\n");
            }
        }

        // --- Structure ---
        private static void ProcessCompound(XmlNode xmlNode, DoxygenNode parentNode)
        {
            string nodeKind = xmlNode.Attributes["kind"].Value;

            if (ignoredKinds.Contains(nodeKind))
            {
                outputLog.Append(". ignoring node of kind \'" + nodeKind + "\'\n");
                return;
            }

            DoxygenNode compoundNode = GetOrCreateNodeWithDefinition(xmlNode.Attributes["id"].Value,
                                                                        nodeKindCreationMap[nodeKind],
                                                                        xmlNode);

            ProcessChildNodes(xmlNode, compoundNode);
        }

        private static void ProcessMember(XmlNode xmlNode, DoxygenNode parentNode)
        {
            string memberId = xmlNode.Attributes["id"].Value;
            string nodeKind = xmlNode.Attributes["kind"].Value;

            outputLog.Append(". kind: " + nodeKind + ", id: [" + memberId + "]\n");

            if (ignoredKinds.Contains(nodeKind))
            {
                outputLog.Append(". ignored kind\n");
                return;
            }

            // - set parenting -
            DoxygenNode memberNode = GetOrCreateNodeWithDefinition(xmlNode.Attributes["id"].Value,
                                                                      nodeKindCreationMap[nodeKind],
                                                                      xmlNode);

            if (memberNode.parent != null
               && memberNode.parent != parentNode)
            {
                outputLog.Append("WARNING: memberNode.parent ["
                                 + memberNode.parent.d_id
                                 + "] != parentNode ["
                                 + (parentNode == null ? "NULL" : parentNode.d_id)
                                 + "]\n");
            }
            memberNode.parent = parentNode;

            if (!parentNode.children.Contains(memberNode))
            {
                outputLog.Append(". adding member node [" + memberId + "] to ["
                                 + parentNode.d_id + "]\n");

                parentNode.children.Add(memberNode);
            }

            // - grab attributes -
            MemberDefinition definition = Nodes[memberNode] as MemberDefinition;
            switch (xmlNode.Attributes["prot"].Value.ToLower())
            {
                case "public":
                    {
                        definition.protection = ProtectionLevel.Public;
                    }
                    break;
                case "private":
                    {
                        definition.protection = ProtectionLevel.Private;
                    }
                    break;
                case "protected":
                    {
                        definition.protection = ProtectionLevel.Protected;
                    }
                    break;
                case "package":
                    {
                        definition.protection = ProtectionLevel.Internal;
                    }
                    break;

                default:
                    {
                        outputLog.Append("WARNING: Unrecognized protection level \'"
                                         + xmlNode.Attributes["prot"].Value.ToLower()
                                         + "\'\n");
                    }
                    break;
            }

            definition.isStatic = (xmlNode.Attributes["static"].Value == "yes");

            ProcessChildNodes(xmlNode, memberNode);
        }

        private static void ProcessInnerClass(XmlNode xmlNode, DoxygenNode parentNode)
        {
            string nodeId = xmlNode.Attributes["refid"].Value;
            DoxygenNode innerClassNode = FindDefinitionNodeById(nodeId);
            if (innerClassNode == null)
            {
                outputLog.Append(". creating new node [" + nodeId + "]\n");

                innerClassNode = new DoxygenNode();
                innerClassNode.d_id = nodeId;

                Nodes.Add(innerClassNode, null);
            }

            if (innerClassNode.parent != null
               && innerClassNode.parent != parentNode)
            {
                outputLog.Append("WARNING: innerClassNode.parent ["
                                 + DoxygenNode.GenerateFullName(innerClassNode.parent)
                                 + "] != parentNode ["
                                 + (parentNode == null ? "NULL" : DoxygenNode.GenerateFullName(parentNode))
                                 + "]\n");
            }

            innerClassNode.parent = parentNode;
            parentNode.children.Add(innerClassNode);

            ProcessChildNodes(xmlNode, innerClassNode);
        }

        private static void ProcessInnerNamespace(XmlNode xmlNode, DoxygenNode parentNode)
        {
            string nodeId = xmlNode.Attributes["refid"].Value;
            DoxygenNode namespaceNode = FindDefinitionNodeById(nodeId);
            if (namespaceNode == null)
            {
                namespaceNode = new DoxygenNode();
                namespaceNode.d_id = nodeId;

                Nodes.Add(namespaceNode, null);
            }

            if (namespaceNode.parent != null
               && namespaceNode.parent != parentNode)
            {
                outputLog.Append("WARNING: namespaceNode.parent ["
                                 + DoxygenNode.GenerateFullName(namespaceNode.parent)
                                 + "] != parentNode ["
                                 + (parentNode == null ? "NULL" : DoxygenNode.GenerateFullName(parentNode))
                                 + "]\n");
            }

            namespaceNode.parent = parentNode;
            parentNode.children.Add(namespaceNode);

            ProcessChildNodes(xmlNode, namespaceNode);
        }

        private static void ProcessListOfAllMembers(XmlNode xmlNode, DoxygenNode parentNode)
        {
            // - instantiate member nodes -
            foreach (XmlNode memberNode in xmlNode.ChildNodes)
            {
                string memberId = memberNode.Attributes["refid"].Value;
                DoxygenNode mDefNode = FindDefinitionNodeById(memberId);

                if (mDefNode == null)
                {
                    mDefNode = new DoxygenNode();
                    mDefNode.d_id = memberId;

                    Nodes.Add(mDefNode, null);

                }

                if (!parentNode.children.Contains(mDefNode))
                {
                    outputLog.Append(". adding member node [" + memberId + "]");

                    parentNode.children.Add(mDefNode);
                }

                ProcessChildNodes(memberNode, mDefNode);
            }
        }

        private static void ProcessEnumValue(XmlNode xmlNode, DoxygenNode parentNode)
        {
            string valueId = xmlNode.Attributes["id"].Value;

            // - set parenting -
            DoxygenNode valueNode = GetOrCreateNodeWithDefinition(xmlNode.Attributes["id"].Value,
                                                                     nodeKindCreationMap["enumvalue"],
                                                                     xmlNode);

            if (valueNode.parent != null
               && valueNode.parent != parentNode)
            {
                outputLog.Append("WARNING: valueNode.parent ["
                                 + valueNode.parent.d_id
                                 + "] != parentNode ["
                                 + (parentNode == null ? "NULL" : parentNode.d_id)
                                 + "]\n");
            }
            valueNode.parent = parentNode;

            if (!parentNode.children.Contains(valueNode))
            {
                outputLog.Append(". adding enum value [" + valueId + "] to ["
                                 + parentNode.d_id + "]\n");

                parentNode.children.Add(valueNode);
            }

            ProcessChildNodes(xmlNode, valueNode);
        }

        private static void ProcessBriefDescription(XmlNode xmlNode, DoxygenNode parentNode)
        {
            IDoxygenNode definition = Nodes[parentNode];
            StringBuilder retVal = new StringBuilder();
            ParseDescriptionXML(xmlNode, definition, retVal);

            definition.briefDescription = retVal.ToString().Trim();
        }

        private static void ProcessInitializer(XmlNode node, DoxygenNode parentNode)
        {
            if (node.FirstChild == null) { return; }

            outputLog.Append(". adding initializedValue\n");
            MemberDefinition definition = Nodes[parentNode] as MemberDefinition;
            definition.initializedValue = node.InnerText.Substring(2).Replace("<", "[").Replace(">", "]").Trim(); // skip "= "
        }

        // ---------[ KIND CREATION ]---------
        private static IDoxygenNode CreateNamespaceDefinition(XmlNode xmlNode)
        {
            NamespaceDefinition definition = new NamespaceDefinition();
            definition.language = xmlNode.Attributes["language"].Value;
            return definition;
        }

        private static IDoxygenNode CreatePropertyDefinition(XmlNode xmlNode)
        {
            PropertyDefinition definition = new PropertyDefinition();

            // - getter -
            if (xmlNode.Attributes["gettable"].Value == "yes")
            {
                definition.getterProtection = ProtectionLevel.Public;
            }
            else if (xmlNode.Attributes["privategettable"].Value == "yes")
            {
                definition.getterProtection = ProtectionLevel.Private;
            }
            else if (xmlNode.Attributes["protectedgettable"].Value == "yes")
            {
                definition.getterProtection = ProtectionLevel.Protected;
            }

            // - setter -
            if (xmlNode.Attributes["settable"].Value == "yes")
            {
                definition.setterProtection = ProtectionLevel.Public;
            }
            else if (xmlNode.Attributes["privatesettable"].Value == "yes")
            {
                definition.setterProtection = ProtectionLevel.Private;
            }
            else if (xmlNode.Attributes["protectedsettable"].Value == "yes")
            {
                definition.setterProtection = ProtectionLevel.Protected;
            }

            return definition;
        }
   }
}