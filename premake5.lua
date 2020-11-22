local cppsharp = '../'
--_OPTIONS["disable-tests"] = true
--_OPTIONS["disable-examples"] = true

newoption {
  trigger     = "arch",
  description = "Choose a particular architecture / bitness",
  allowed = {
     { "x86",  "x86 32-bits" },
     { "x64",  "x64 64-bits" },
     { "AnyCPU",  "Any CPU (.NET)" },
  },
  default = "x64"
}

include("wx")

workspace "wx"
  configurations { "Debug", "Release" }

  location "build"

  --include(cppsharp .. "/build/premake5.lua")
  --include("src/BakefileGen")
  --include("src/WxGenerator")

  project "wx"
    kind "StaticLib"
    symbols "On"
    files { wx_get_target_dir() .. "**.cpp" }
    removefiles { "**/defs.cpp", "test-**" }
    setup_common()
    setup_wx_cflags()
    setup_wx_libs("base core")
