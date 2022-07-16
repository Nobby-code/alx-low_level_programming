#!/bin/bash
wget -P /tmp https://github.com/Nobby-code/alx-low_level_programming/\
	raw/master/0x18-dynamic_libraries/jackport/libtest.so
export LD_PRELOAD=/tmp/libtest.so
