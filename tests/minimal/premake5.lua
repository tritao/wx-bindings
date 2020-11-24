
project "minimal"
  kind "ConsoleApp"
  files { "*.cpp" }
  links { "wx" }
  setup_common()
  setup_wx_cflags()
  setup_wx_libs("base core")