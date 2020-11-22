#!/usr/bin/env bash
set -e
DIR=$(cd "$(dirname "$0")"; pwd)

oshost=""
os=""

detect_os()
{
  case "$(uname -s)" in
    Darwin)
      os=macos
      ;;
    Linux)
      os=linux
      ;;
    CYGWIN*|MINGW32*|MSYS*|MINGW*)
      os=windows
      ;;
    *)
      echo "Unsupported platform"
      exit 1
      ;;
  esac

  oshost=$os
}

parse_cmds()
{
    while [[ $# > 0 ]]; do
        option=$(tr '[:upper:]' '[:lower:]' <<< "${1/#--/-}")
        case "$option" in
            -debug)
            configuration=Debug
            ;;
            -platform)
            platform=$2
            shift
            ;;
        esac
        shift
    done
}

install_deps()
{
    if [ "$os" = "macos" ]; then
        brew install fontconfig
    fi

    if [ "$os" = "linux" ]; then
        sudo apt install libcairo2-dev libgtk2.0-dev libgtk-3-dev libfontconfig1-dev
    fi
}

build()
{
    build_dir=$DIR/build/wxwidgets
    wx_dir=$DIR/wxWidgets

    mkdir -p $build_dir
    cd $build_dir
    cmake -G "Ninja" $wx_dir
    ninja
}

detect_os
parse_cmds "$@"
install_deps
build
