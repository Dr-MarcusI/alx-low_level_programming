#!/bin/bash
gcc -c -fPIC *.C
gcc -shared-o liball.so *.o
