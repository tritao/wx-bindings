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

local standalone_build = rootdir == nil
if standalone_build then
workspace "wx"
  configurations { "Debug", "Release" }

  location "build"
  symbols "On"

  filter { "configurations:Debug" }
    defines { "DEBUG" }

  filter { "configurations:Release" }
    defines { "NDEBUG" }
    optimize "On"

  filter {}

--include(cppsharp .. "/build/premake5.lua")
end

if _ACTION ~= "gmake2" then
  include("src/BakefileGen")
  include("src/WxGenerator")
  include("src/SkiaGenerator")
end

rootdir = path.getabsolute(".")
cppsharpdir = path.getabsolute(path.join(rootdir, '../..'))

include("wx")

if _ACTION == "gmake2" then
  project "wx"
    --kind "StaticLib"
    kind "SharedLib"
    files { path.join(wx_get_target_dir(), "**.cpp") }
    files { path.join(wx_get_target_dir(), "../support/**.cpp") }
    removefiles { "**/defs.cpp", "test-**" }
    setup_common()
    setup_wx_cflags()
    setup_wx_libs("base core")

  include "tests/minimal"
  include "tests/events"
  include "tests/canvas"
end
