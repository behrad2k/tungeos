TARGET = i686-elf
EMU_TARGET = x86_64

AS = as
CC = gcc
LD = gcc
CFLAGS = -c -std=gnu99 -ffreestanding -O2 -Wall -Ilibc/include
.PHONY: clean
all: bin iso emu

ifeq (, $(shell which i686-elf-gcc))
$(error "get i686-elf-gcc")
endif


clean:
	rm -f $(wildcard *.o *.iso *.bin)
	rm -rf isodir
bin:
	$(TARGET)-$(AS) boot/boot.s -o boot.o
	$(TARGET)-$(CC) $(CFLAGS) kernel.c -o kernel.o
	cd libc; \
	make
	$(TARGET)-$(LD) -T linker.ld -o myos.bin -ffreestanding -O2 -nostdlib boot.o kernel.o libc.o -lgcc
iso:
	mkdir -p isodir/boot/grub
	cp myos.bin isodir/boot/myos.bin
	cp grub.cfg isodir/boot/grub/grub.cfg
	grub-mkrescue -o myos.iso isodir
emu:
	qemu-system-$(EMU_TARGET) -cdrom myos.iso
