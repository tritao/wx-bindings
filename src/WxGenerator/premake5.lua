project "WxGenerator"
  kind "ConsoleApp"
  language "C#"
  files { "wxSharp.cs", "DoxygenParser.cs" }
  links { "CppSharp", "CppSharp.AST", "CppSharp.Generator", "CppSharp.Parser" }
  SetupParser()
