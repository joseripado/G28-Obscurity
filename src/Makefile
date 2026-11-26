CC = gcc
CFLAGS = -Wall -Wextra -O2

all: hello baseline bf_interpreter

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello

baseline: baseline.c
	$(CC) $(CFLAGS) baseline.c -o baseline

bf_interpreter: bf_interpreter.c
	$(CC) $(CFLAGS) bf_interpreter.c -o bf_interpreter

clean:
	rm -f hello baseline bf_interpreter
