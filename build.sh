#!/bin/bash

cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..
cmake -DCMAKE_BUILD_TYPE=${1:-Release} -j24 --build . 
make 
