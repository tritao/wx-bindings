project "WxGenerator"
  kind "ConsoleApp"
  language "C#"
  files { "Generator.cs", "DoxygenParser.cs" }
  links { "CppSharp", "CppSharp.AST", "CppSharp.Generator", "CppSharp.Parser" }
  SetupParser()
