#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fpic 0-main.c 1-create_dynamic_lib.c 5-strstr.c
gcc -Wall -Wextra -Werror -pedantic -c -fpic 0-main.c 1-create_dynamic_lib.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
