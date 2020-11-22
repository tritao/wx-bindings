#!/usr/bin/env bash
set -e
#set -x

CUR_DIR=$(cd "$(dirname "$0")"; pwd)
CPPSHARP_DIR="$CUR_DIR/../../../../../CppSharp"
PREMAKE=$CPPSHARP_DIR/build/premake.sh

MONO=mono
if [ "$(uname)" == "Darwin" ]; then
  MONO_PATH=/Library/Frameworks/Mono.framework/Versions/Current/bin/
  MONO="$MONO_PATH$MONO"
fi

export PATH=$PATH:$MONO_PATH


$PREMAKE --file=$CUR_DIR/premake5.lua gmake "$@"

BUILD_CONF=debug
config=$BUILD_CONF make 
