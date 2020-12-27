

--[[
project "uv"
  kind "StaticLib"
  files { path.join(uv, "src", "*.c") }

  filter { "system:not windows" }
    files { path.join(uv, "src", "unix", "*.c") }

  filter { "system:windows" }
    files { path.join(uv, "src", "win", "*.c") }
]]

--[[
project "curl"
]]

--[[
project "qjs"
  kind "StaticLib"
  files { path.join(qjs, "src", "*.c") }
]]

local qjsversion = "2020-11-08"
local tjsplatform = "linux"

project "ozone-runtime"
  kind "ConsoleApp"
  language "C++"

  defines
  {
    string.format("QJS_VERSION_STR=\"%s\"", qjsversion),
    string.format("CONFIG_VERSION=%s", qjsversion),
    "CONFIG_BIGNUM",
    string.format("TJS__PLATFORM=\"%s\"", tjsplatform),
    "TJS_HAVE_CURL",
    "DISABLE_WASM",
    "ENABLE_GUI",
    --"TJS_HAVE_SYSTEM_CURL"
    --"TJS_HAVE_WASM"
    --"d_m3HasWASI"
  }

  filter { "system:linux"}
    defines { "_GNU_SOURCE", "_POSIX_C_SOURCE=200112" }

  prebuildcommands { "{MKDIR}	%{cfg.objdir}/js" }

  filter 'files:**.js or files:**.mjs'
    buildmessage 'Compiling %{file.relpath}'
    buildcommands { qjsc .. ' -m -o "%{cfg.objdir}/js/%{file.basename}.c" "%{file.relpath}"' }
    buildoutputs { '%{cfg.objdir}/js/%{file.basename}.c' }

  filter {}

  files
  {
    "*.c",
    "*.cpp",
    path.join(txiki, "src", "*.c"),
    path.join(txiki, "src", "*.cpp"),
    path.join(txiki, "src", "js", "*.js"),
    path.join(rootdir, "deps/slimdom.js/dist/slimdom.mjs")
  }

  excludes { path.join(txiki, "src", "qjsc.c") }

  includedirs
  {
    path.join(curl, "include"),
    path.join(libuv, "include"),
    path.join(qjs, "include"),
    path.join(wasm3, "source"),
    path.join(wx_get_target_dir("cplusplus"))
  }

  libdirs
  {
    path.join(txiki_build, "deps", "curl", "lib"),
    path.join(txiki_build, "deps", "libuv"),
    path.join(txiki_build, "deps", "quickjs"),
    path.join(txiki_build, "deps", "wasm3")
  }

  links
  {
    "curl",
    "uv_a:static",
    "qjs",
    "ozone",
    "ozone-quickjs",
  }

  filter { "system:linux" }
    links { "dl", "pthread", "m" }

  filter {}

  setup_common()
  setup_wx_cflags()
  setup_wx_libs("base core")