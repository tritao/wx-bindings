local wx_path = "../../wxWidgets"
local wx_build_path = wx_path .. "/build-cocoa-debug"

function get_wx_config_path()
  local wx_config_path = wx_build_path .. "/wx-config"
  local result, errorcode = os.outputof(path.getabsolute(wx_config_path) .. " --cflags")
  if errorcode ~= 0 then
    print("Failed to invoke wx-config, exiting...")
    os.exit(1)
  end
  return wx_config_path
end

function setup_wx_cflags()
  buildoptions { "`" .. get_wx_config_path() .. " --cflags`" }
end

function setup_wx_libs(libs)
  linkoptions { "`" .. get_wx_config_path() .. " --libs " .. libs .. "`" }
end

function setup_common()
  buildoptions { "-std=c++11", "-fdeclspec" }
  buildoptions
  {
    "-isystem" .. path.getabsolute("../../../../include"),
    "-iquote" .. path.getabsolute(".")
  }
end

workspace "wx"
  configurations { "Debug", "Release" }
  project "wx"
    kind "StaticLib"
    symbols "On"
    files { "**/*.cpp", "*.cpp" }
    removefiles { "**/defs.cpp", "test-**" }
    setup_common()
    setup_wx_cflags()
    setup_wx_libs("base core")

  project "wx-test"
    kind "ConsoleApp"
    symbols "On"
    files { "test-**" }
    links { "wx" }
    setup_common()
    setup_wx_cflags()
    setup_wx_libs("base core")