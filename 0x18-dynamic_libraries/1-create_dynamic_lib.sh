#!/bin/bash

# get the object code from the source code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# link the object codes to the library, liball.so
gcc -shared -o liball.so *.o
