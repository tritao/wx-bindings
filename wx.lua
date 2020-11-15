WX_BASE_DIR = "wxWidgets/"
include("wx-files")

workspace "wx"
configurations {"Release"}

project "wxcore"
kind "SharedLib"
includedirs { WX_BASE_DIR .. "include", WX_BASE_DIR .. "build-cmake/lib/wx/include/osx_cocoa-unicode-3.1" }

files { BASE_CMN_SRC }

files { BASE_CMN_HDR }

--[[
files { BASE_AND_GUI_CMN_SRC }

files { GUI_CMN_SRC }

files { GUI_CMN_HDR }

cfg = filter { "unix osx" }
    files { BASE_UNIX_AND_DARWIN_SRC }
    files { BASE_UNIX_AND_DARWIN_HDR }
filter (cfg)

cfg = filter { "unix" }
    files { UNIX_SRC }
filter (cfg)

cfg = filter { "macosx" }
    files { BASE_COREFOUNDATION_SRC }
    files { BASE_COREFOUNDATION_HDR }
    files { BASE_OSX_SHARED_SRC }
    files { BASE_OSX_SHARED_HDR }
filter (cfg)

cfg = filter { "windows" }
    files { BASE_WIN32_SRC }
    files { BASE_AND_GUI_WIN32_SRC }
    files { BASE_WIN32_HDR }
    files { MSW_LOWLEVEL_SRC }
    files { MSW_SRC }
    files { MSW_HDR }
    files { MSW_DESKTOP_SRC }
    files { MSW_DESKTOP_HDR }
    files { MSW_DESKTOP_SRC }
    files { MSW_DESKTOP_HDR }
filter (cfg)
]]
