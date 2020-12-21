project "Ozone"
    kind "SharedLib"
    language "C++"
    files { "*.cpp" }
    includedirs { qjs_inc_dir }
    libdirs { qjs_lib_dir }
    filter { "kind:StaticLib" }
        links { "quickjs" }
    filter { "kind:SharedLib" }
        defines { "JS_SHARED_LIBRARY" }
    filter { "kind:SharedLib", "system:macosx" }
        linkoptions { "-undefined dynamic_lookup" }
