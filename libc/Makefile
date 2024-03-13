TARGET = i686-elf
CC = gcc
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c,%.o,$(SRC))

all:
	for i in 1 2 ; do \
    	$(TARGET)-$(CC) $(word $$i,$(SRC)) -Iinclude -c -o $(word $$i,$(OBJ)) -ffreestanding -Wall -Wextra ; \
	done

	$(TARGET)-$(CC) $(OBJ) -o ../libc.o