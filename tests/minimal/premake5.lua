
project "minimal"
  kind "ConsoleApp"
  symbols "On"
  files { "*.cpp" }
  links { "wx" }
  setup_common()
  setup_wx_cflags()
  setup_wx_libs("base core")