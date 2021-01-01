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
if not standalone_build then
  --include("src/BakefileGen")
  --include("src/SkiaGenerator")
  include("src/WxGenerator")
  return
end

rootdir = path.getabsolute(".")
cppsharpdir = path.getabsolute(path.join(rootdir, '../..'))

txiki = path.join(rootdir, "deps/txiki.js")
txiki_build = path.join(txiki, "build")
curl = path.join(txiki, "deps/curl")
libuv = path.join(txiki, "deps/libuv")
qjs = path.join(txiki, "deps/quickjs")
wasm3 = path.join(txiki, "deps/wasm3")
qjsc = path.join(txiki_build, "qjsc")

include("wx")

workspace "ozone"
  configurations { "Debug", "Release" }

  location "build"
  symbols "On"
  linkgroups 'On'

  filter { "configurations:Debug" }
    defines { "DEBUG" }

  filter { "configurations:Release" }
    defines { "NDEBUG" }
    optimize "On"

  filter {}

  project "ozone"
    --kind "StaticLib"
    kind "SharedLib"
    files
    {
      path.join(wx_get_target_dir("cplusplus"), "**.cpp"),
      path.join(wx_get_target_dir("cplusplus"), "..", "support", "**.cpp")
    }
    removefiles { "**/defs.cpp", "test-**" }
    includedirs
    {
      path.join(wx_get_target_dir("cplusplus"))
    }
    setup_common()
    setup_wx_cflags()

  project "ozone-quickjs"
    kind "StaticLib"
    includedirs
    {
      path.join(qjs, "include"),
      path.join(qjs, "src"),
      path.join(wx_get_target_dir("cplusplus")),
      cppsharpdir .. "/src/Generator/Generators/QuickJS/Runtime"
    }
    files
    {
      cppsharpdir .. "/src/Generator/Generators/QuickJS/Runtime/**.cpp",
      "gen/wx/quickjs/**.cpp",
    }

    removefiles {  "test-**" }
    setup_common()
    setup_wx_cflags()

  --include "tests/cpp/minimal"
  --include "tests/cpp/events"
  --include "tests/cpp/canvas"

  include("src/Runtime")

