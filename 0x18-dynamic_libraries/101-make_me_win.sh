#!/bin/bash
wget -p /tmp https://github.com/TopeGodwin/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
