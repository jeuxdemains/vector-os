all: os-image

run: all
	qemu-system-i386

os-image: bootloader.bin kernel.bin
	cat $^ > os-image
	
kernel.bin: kernel_main.o kernel.o
	ld -m elf_i386 -o kernel.bin -Ttext 0x1000 $^ --oformat binary
	
kernel.o: kernel.c
	gcc -fno-pie -m32 -ffreestanding -c $< -o $@
	
kernel_main.o: kernel_main.asm
	nasm $< -f elf32 -o $@
	
bootloader.bin: bootloader.asm
	nasm $< -f bin -o $@
	
clean:
	rm -rf *.bin *.dis *.o os-image *.map

kernel.dis: kernel.bin
	ndisasm -b 32 $< > $@
