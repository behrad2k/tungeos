TARGET = i686-elf
CC = gcc
CFLAGS = -Wall -Iinclude -ffreestanding

SRCS := $(wildcard *.c)

OBJS := $(SRCS:.c=.o)

.PHONY: all clean

all: $(OBJS)

%.o: %.c
	$(TARGET)-$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJS)
