#!/usr/bin/env bash
set -e
DIR=$(cd "$(dirname "$0")"; pwd)

oshost=""
os=""

configuration=Debug
platform=x64

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

download()
{
    skia_release=m88-59bafeeaa7
    skia_zip=Skia-$skia_release-$oshost-$configuration-$platform.zip
    skia_url=https://github.com/JetBrains/skia-build/releases/download/$skia_release/$skia_zip
    skia_dir=$DIR/build/skia

    if [ ! -f $DIR/build/$skia_zip ]; then
        (cd $DIR/build && curl -L -O $skia_url --create-dirs)
    fi

    if [ ! -d $skia_dir ]; then
        mkdir -p $skia_dir
        (cd $skia_dir && unzip -o $DIR/build/$skia_zip)
        rm -rf $DIR/build/$skia_zip
    fi
}

detect_os
parse_cmds "$@"
download
