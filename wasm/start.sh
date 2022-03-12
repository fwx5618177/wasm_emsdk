#!/bin/bash

rm -f *.html *.js *.wasm

# 普通编译
emcc /src/hello.c -o /src/dist/hello.js

# 编译已经存在的 C 模块到 WebAssembly

echo '编译结束'

tail -f /dev/null