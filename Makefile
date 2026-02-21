CC=gcc
CFLAGS=-g -Wall -Werror -Wextra -Wconversion

all:
	ldconfig
	$(CC) $(CFLAGS) main.c -o guess -L/usr/local/lib -I/usr/local/include -lrand
	strip -s guess
