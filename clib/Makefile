# Mike Sharkey <mike@8bitgeek.net>
CC=gcc
CFLAGS=-I.

DEPS = part1/ctype.h part1/float.h part1/math.h part1/plot.h part1/stdio.h part1/


OBJ = hellomake.o hellofunc.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)