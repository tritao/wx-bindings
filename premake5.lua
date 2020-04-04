_OPTIONS["disable-tests"] = true

local cppsharp = '../'
include(cppsharp .. "/build/premake5.lua")

project "wxSharp.Gen"
  kind "ConsoleApp"
  language "C#"
  files { "wxSharp.cs", "DoxygenParser.cs" }
  links { "CppSharp", "CppSharp.AST", "CppSharp.Generator", "CppSharp.Parser" }
  links { "System", "System.Core", "System.Xml" }
  SetupParser()


project "wxSharp"
  kind "ConsoleApp"
  language "C#"  
  debugdir "."
  files { "i686-apple-darwin/**.cs" }
  clr "Unsafe"
  framework "4.8"

--[[
project "wxSharp.Tests"

  kind     "ConsoleApp"
  language "C#"
  location "."
  
  dependson "wxSharp"

  files
  {
      libdir .. "/gen/**.cs",
      "*.lua"
  }
]]