#!/bin/bash
wget -P /tmp/ https://raw.github.com/david-develop/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/libran.so
export LD_PRELOAD=/tmp/libran.so
