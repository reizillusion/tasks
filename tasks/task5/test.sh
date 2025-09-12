#!/bin/bash
image_path="$1"

g++ -o program task5.cpp

if [ $? -ne 0 ]; then
    echo "编译失败"
    exit 1
fi

./program "$image_path"
