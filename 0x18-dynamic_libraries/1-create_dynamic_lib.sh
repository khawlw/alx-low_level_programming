#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o
