#!/bin/bash
wget -P /tmp https://github.com/woltfang/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/cheat_rand.so
export LD_PRELOAD=/tmp/cheat_rand.so
