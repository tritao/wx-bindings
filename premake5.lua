_OPTIONS["disable-tests"] = true

local cppsharp = '../'
include(cppsharp .. "/build/premake5.lua")

include("src/BakefileGen")
include("src/WxGenerator")

--[[
project "wxSharp"
  kind "ConsoleApp"
  language "C#"  
  debugdir "."
  files { "i686-apple-darwin/**.cs" }
  clr "Unsafe"
  framework "4.8"

include("./BakefileGen/premake5.lua")

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