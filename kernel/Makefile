CC := i686-elf-gcc
CFLAGS := -Wall -O0 -I../libc/include
SRCS := $(wildcard *.c) $(wildcard */*.c)
OBJS := $(SRCS:.c=.o)

all: $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

.PHONY: all clean
