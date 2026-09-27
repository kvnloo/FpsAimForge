#!/bin/bash

cmake --build build --target FpsAimForge || exit 1
echo "BUILT"
./build/bin/FpsAimForge $@
