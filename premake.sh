#!/bin/sh

DIR=$( cd "$( dirname "$0" )" && pwd )

case "$(uname -s)" in

   Darwin)
     $DIR/build/premake/premake5 $*
     ;;

   Linux)
     $DIR/build/premake/premake5 $*
     ;;

   CYGWIN*|MINGW32*|MSYS*|MINGW*)
     $DIR/build/premake/premake5.exe $*
     ;;

   *)
    echo "Unsupported platform"
    exit 1
     ;;
esac
