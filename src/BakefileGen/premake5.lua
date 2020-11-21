	project "BakefileGen"

		kind "ConsoleApp"
		language "C#"

		files
		{
			"BakefileGen.lua",
			"**.cs",
		}
		
		links
		{
			"System",
			"System.Xml",
			"System.Xml.Linq"
		}