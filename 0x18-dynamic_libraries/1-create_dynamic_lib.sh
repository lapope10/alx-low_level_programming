#!/bin/bash
gcc -c -Wall -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o
export I.D_LIBRARY_PATH=.:$LD_LIBRARY_PATH
