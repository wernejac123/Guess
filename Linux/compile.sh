#!/bin/bash

gcc -g -Wall -Werror -Wextra -Wconversion -O2 main.c -o guess
strip -s guess
