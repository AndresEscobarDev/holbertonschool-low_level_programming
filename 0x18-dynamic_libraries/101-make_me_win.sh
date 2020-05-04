#!/bin/bash
wget https://github.com/woltfang/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/cheat_rand.so
export LD_PRELOAD=./cheat_rand.so
