#!/bin/bash

gcc -g -Wall -Werror -Wextra -Wconversion main.c -o guess
strip -s guess
