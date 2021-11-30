#!/bin/bash
gcc -fPIC -c *.c
gcc -sheared -o liball.so *.o
