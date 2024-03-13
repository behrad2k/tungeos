TARGET = i686-elf
CC = gcc
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(SRC))

all:
	for i in 1 2 ; do \
    	$(TARGET)-$(CC) $(word $(shell expr $$i - 0),$(SRC)) -Iinclude -c -o $(word $$i,$(OBJ)) -ffreestanding -Wall -Wextra ; \
	done

	$(TARGET)-$(CC) $(OBJ) -o ../libc.o