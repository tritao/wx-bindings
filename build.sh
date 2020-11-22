#!/usr/bin/env bash
set -e
DIR=$(cd "$(dirname "$0")"; pwd)

verbosity=minimal
configuration=Release
platform=x64
vs=vs2019

build_only=false
build_managed=false
ci=false

bindir="$DIR/../bin"
objdir="$DIR/../obj"

oshost=""
os=""
test=

if [[ $(uname -m) != *"64"* ]]; then
  platform=x86
fi

detect_os()
{
  case "$(uname -s)" in
    Darwin)
      os=macosx
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

parse_options()
{
  cmd=$(tr '[:upper:]' '[:lower:]' <<< $1)
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
      -vs)
        vs=vs$2
        shift
        ;;
      -os)
        os=$2
        shift
        ;;
      -ci)
        ci=true
        ;;
      -build_only)
        build_only=true
        ;;
    esac
    shift
  done
}

download()
{
  echo "Downloading and unpacking Premake..."
  premake_url=https://github.com/InteropAlliance/premake-core/releases/download/latest/premake-$oshost-$platform.zip
  premake_dir=$DIR/build/premake

  if [ ! -d $premake_dir ]; then
    mkdir -p $DIR/build/premake
    (cd $DIR/build && curl -L -O $premake_url --create-dirs)
    (cd $DIR/build/premake && unzip -o $DIR/build/premake-$oshost-$platform.zip && chmod +x premake5*)
    rm -rf $DIR/build/premake-$oshost-$platform.zip
  fi
}

generate()
{
  if [ "$os" = "linux" ] || [ "$os" = "macosx" ]; then
    $DIR/premake.sh --file=$DIR/premake5.lua gmake2 --os=$os --arch=$platform "$@"
  fi

  if [ $build_managed = true ]; then
    $DIR/premake.sh --file=$DIR/premake5.lua $vs --os=$os --arch=$platform
  fi
}

restore()
{
  if [ $build_managed = true ]; then
    find_msbuild
    $msbuild $DIR/$vs/CppSharp.sln -p:Configuration=$configuration \
      -p:Platform=$platform -v:$verbosity -t:restore
  fi
}

build()
{
  if [ $ci = true ]; then
    clean
  fi

  if [ $ci = true ] || [ $build_only = false ]; then
    generate
    restore
  fi

  if [ $oshost = "linux" ] || [ $oshost = "macosx" ]; then
    config=$(tr '[:upper:]' '[:lower:]' <<< ${configuration}) make -C $DIR/build
  fi

  if [ $build_managed = true ]; then
    find_msbuild
    $msbuild $DIR/$vs/CppSharp.sln -p:Configuration=$configuration -p:Platform=$platform -v:$verbosity
  fi

  if [ $ci = true ]; then
    test
  fi
}

test()
{
  echo "$bindir/${configuration}_$platform/*.Tests.*.dll"
  dotnet test $bindir/${configuration}_$platform/*.Tests.*.dll
}

clean()
{
  rm -rf $objdir
  rm -rf $bindir
  rm -rf $DIR/../gen
  rm -rf $DIR/gmake
  rm -rf $DIR/vs2019/*
}

find_msbuild()
{
  if [ -x "$(command -v MSBuild.exe)" ]; then
    msbuild="MSBuild.exe"
  else
    msbuild="msbuild"
  fi
}

detect_os
parse_options "$@"

case "$cmd" in
  clean)
    clean
    ;;
  generate)
    generate
    ;;
  restore)
    restore
    ;;
  test)
    test
    ;;
  download)
    download
    ;;
   *)
    build
    ;;
esac
