# Mike Sharkey <mike@8bitgeek.net>
TARGET=cc
CC=gcc
INC=-I/usr/include
CFLAGS=-fno-builtin $(INC)

DEPS =	ccdefs.h	\
	ccfunc.h	\
	cclvalue.h

OBJ =	cc1.o	\
	cc2.o	\
	cc3.o	\
	cc4.o	\
	cc5.o	\
	cc6.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $< 

$(TARGET): $(OBJ)
	gcc $(CFLAGS) -o $@ $^
	
clean:
	rm -f $(OBJ) $(TARGET) cc.asm
