#! /usr/bin/bash

build_dir="build"
src_dir="src"

rm -f build_dir

cmake -S $src_dir -B $build_dir
cmake --build $build_dir
