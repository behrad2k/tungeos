TARGET = i686-elf
CC = gcc
LD = ld
CFLAGS = -Wall -Iinclude -ffreestanding -nostdlib -fno-builtin

SRCS := $(wildcard *.c)

OBJS := $(SRCS:.c=.o)

OUT := ../libc.o

.PHONY: all clean

all: $(OBJS) $(OUT)

%.o: %.c
	$(TARGET)-$(CC) $(CFLAGS) -c -o $@ $<

$(OUT): $(OBJS)
	$(TARGET)-$(LD) -o $(OUT) $(OBJS) --oformat elf32-i386 -r 

clean:
	rm -f $(OBJS)
