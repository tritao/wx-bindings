{
  'variables': {
    'triple': 'x86_64-pc-linux-gnu',
    'wx_root': '../../../wxWidgets',
    'wx_build_root': '../../../build/wxwidgets',
  },
  "targets": [
  {        
      "target_name": "wxSharp",
      "type": "loadable_module",
      'dependencies': [
      ],
      'defines': [
      ],
      'include_dirs': [
        '../cplusplus/<(triple)',
        '.',
      ],
      'cflags': [
        '<!@(<(wx_build_root)/wx-config --cflags)'
      ],
      'ldflags': [
        '<!@(<(wx_build_root)/wx-config --libs)'
      ],
      'libraries': [
        '-lwx_gtk2u_xrc-3.1',
        '-lwx_gtk2u_html-3.1',
        '-lwx_gtk2u_qa-3.1',
        '-lwx_gtk2u_core-3.1',
        '-lwx_baseu_xml-3.1',
        '-lwx_baseu_net-3.1',
        '-lwx_baseu-3.1'
      ],
      'sources': [
          'wxsharp/app.cpp',
          'wxsharp/brush.cpp',
          'wxsharp/colour.cpp',
          'wxsharp/containr.cpp',
          'wxsharp/dc.cpp',
          'wxsharp/dcclient.cpp',
          'wxsharp/defs.cpp',
          'wxsharp/event.cpp',
          'wxsharp/eventhandlers.cpp',
          'wxsharp/frame.cpp',
          'wxsharp/gdicmn.cpp',
          'wxsharp/graphics.cpp',
          'wxsharp/nonownedwnd.cpp',
          'wxsharp/object.cpp',
          'wxsharp/panel.cpp',
          'wxsharp/pen.cpp',
          'wxsharp/sizer.cpp',
          'wxsharp/toplevel.cpp',
          'wxsharp/window.cpp',
          'wxSharpJS.cpp',
          '../cplusplus/<(triple)/wxsharp/app.cpp',
          '../cplusplus/<(triple)/wxsharp/brush.cpp',
          '../cplusplus/<(triple)/wxsharp/colour.cpp',
          '../cplusplus/<(triple)/wxsharp/containr.cpp',
          '../cplusplus/<(triple)/wxsharp/dc.cpp',
          '../cplusplus/<(triple)/wxsharp/dcclient.cpp',
          '../cplusplus/<(triple)/wxsharp/defs.cpp',
          '../cplusplus/<(triple)/wxsharp/event.cpp',
          '../cplusplus/<(triple)/wxsharp/eventhandlers.cpp',
          '../cplusplus/<(triple)/wxsharp/frame.cpp',
          '../cplusplus/<(triple)/wxsharp/gdicmn.cpp',
          '../cplusplus/<(triple)/wxsharp/graphics.cpp',
          '../cplusplus/<(triple)/wxsharp/nonownedwnd.cpp',
          '../cplusplus/<(triple)/wxsharp/object.cpp',
          '../cplusplus/<(triple)/wxsharp/panel.cpp',
          '../cplusplus/<(triple)/wxsharp/pen.cpp',
          '../cplusplus/<(triple)/wxsharp/sizer.cpp',
          '../cplusplus/<(triple)/wxsharp/toplevel.cpp',
          '../cplusplus/<(triple)/wxsharp/window.cpp'
      ],
      'conditions': [
        ['OS=="linux"', {
          'defines': [
          ],
          'include_dirs': [
          ],
        }],
        ['OS=="win"', {
          'defines': [
          ],
        }, { # OS != "win",
          'defines': [
          ],
        }]
      ],
    },
  ]
}