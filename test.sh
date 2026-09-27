#!/bin/bash

cmake --build build --target FpsAimForgeTests || exit 1

cd build
if [ -n "$1" ]; then
  ctest -R "$1"
else
  ctest
fi

