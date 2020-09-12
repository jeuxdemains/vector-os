all: os-image
.PHONY: all

run: os-image
	qemu-system-i386 -drive format=raw,index=0,if=floppy,file=$<
.PHONY: run

os-image: bootloader.bin kernel.bin
	cat $^ > $@

kernel.bin: kernel_main.o kernel.o
	ld -m elf_i386 -o $@ -Ttext 0x1000 $^ --oformat binary

kernel.o: kernel.c
	gcc -fno-pie -m32 -ffreestanding -c $< -o $@

kernel_main.o: kernel_main.asm
	nasm $< -f elf32 -o $@

bootloader.bin: bootloader.asm
	nasm $< -f bin -o $@

kernel.dis: kernel.bin
	ndisasm -b 32 $< > $@

clean:
	rm -f *.bin *.dis *.o os-image *.map
.PHONY: clean
