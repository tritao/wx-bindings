local wx_path = path.join(rootdir, "deps", "wxWidgets")
local wx_build_path = path.join(rootdir, "build/wxwidgets")

--
wx_build_path = path.join(wx_build_path, "Debug")
--

function wx_get_target_dir(kind)
    if not kind then
      error("Invalid target kind passed to wx_get_target_dir")
    end

    local gendir = path.getabsolute(path.join(rootdir, "gen"))

    if os.istarget("linux") then
        return path.join(gendir, "wx", kind, "x86_64-pc-linux-gnu")
    end

    if os.istarget("macosx") then
        return path.join(gendir, "wx", kind, "i686-apple-darwin")
    end

    return ""
end

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
  --linkoptions { "`" .. get_wx_config_path() .. " --libs " .. libs .. "`" }
  libdirs { wx_build_path .. "/lib" }
  linkoptions { "-Wl,-rpath," .. path.join(wx_build_path, "lib") }
  links { "pthread", "wx_baseu-3.1", "wx_gtk3u_core-3.1"}
end

function setup_common()
  cdialect "C11"
  cppdialect "C++11"

  filter { "toolset:clang" }
    buildoptions { "-fdeclspec" }

  filter {}

  buildoptions
  {
    "-iquote" .. wx_get_target_dir("cpluscplus"),
    "-isystem" .. path.join(cppsharpdir, "include"),
  }
end

