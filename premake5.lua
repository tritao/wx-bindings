project "wxSharp.Gen"
  SetupExampleProject()

project "wxSharp"
  kind "ConsoleApp"
  language "C#"  
  debugdir "."
  files { "i686-apple-darwin12.4.0/**.cs" }
  clr "Unsafe"

if config.ExampleTests then

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

end