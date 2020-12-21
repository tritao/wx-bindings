
project "canvas"
  kind "ConsoleApp"
  files { "*.cpp" }
  links { "ozone" }
  includedirs
  {
    path.join(wx_get_target_dir("cplusplus"))
  }
  setup_common()
  setup_wx_cflags()
  setup_wx_libs("base core")