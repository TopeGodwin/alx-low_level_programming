#!/bin/bash
wget -p .. https://raw.github.com/TopeGodwin/alx-low_level_programming/main/0x18-dynamic_libraries/gm.so
export LD_PRELOAD="$PWD/../gm.so"
