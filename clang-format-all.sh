#!/bin/bash

shopt -s globstar
clang-format -i src/**/*.{h,cpp}

