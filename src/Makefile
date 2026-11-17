CC = gcc
CFLAGS = -Wall -Wextra -O2

all: hello baseline

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello

baseline: baseline.c
	$(CC) $(CFLAGS) baseline.c -o baseline

clean:
	rm -f hello baseline
