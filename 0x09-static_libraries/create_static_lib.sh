#!/bin/bash
gcc -Wall -Wetra -Werror -pedantic -c *.c
ar rc liball.a *.o
