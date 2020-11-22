

  project "wx-basic"
    kind "ConsoleApp"
    symbols "On"
    files { "test-**" }
    links { "wx" }
    setup_common()
    setup_wx_cflags()
    setup_wx_libs("base core")