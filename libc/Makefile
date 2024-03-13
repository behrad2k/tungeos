TARGET = i686-elf
CC = gcc
SRC = $(wildcard *.c)

all:
	for file in $(SRC) ; do \
    	$(TARGET)-$(CC) $$file -Iinclude -c -o $(patsubst *.c,*.o,$$file) -ffreestanding -Wall -Wextra ; \
	done

	$(TARGET)-$(CC) $(patsubst %.c,%.o,$(SRC)) -o ../libc.o