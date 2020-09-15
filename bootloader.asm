[org 0x7c00]

KERNEL_OFFSET equ 0x1000

    mov [BOOT_DRIVE], dl

    mov bp, 0x9000
    mov sp, bp

    mov ebx, MSG_REAL_MODE
    call print_string_pm

    call load_kernel
    call switch_to_pm

    jmp $

%include "disk_read.asm"
%include "gdt.asm"
%include "protected_mode.asm"
%include "print_string_pm.asm"

[bits 16]
load_kernel:
    mov bx, MSG_LOAD_KERNEL
    call print_string_pm

    mov bx, KERNEL_OFFSET
    mov dh, 15
    mov dl, [BOOT_DRIVE]
    call disk_load

    ret

[bits 32]
BEGIN_PM:
    mov ebx, MSG_PROT_MODE
    call print_string_pm

    call KERNEL_OFFSET

    jmp $

BOOT_DRIVE db 0
MSG_REAL_MODE db "Started in 16 bit real mode.", 0
MSG_PROT_MODE db "Successfully switched to 32 bit mode.",0
MSG_LOAD_KERNEL db "Loading kernel into memory...",0

; pad file to a full 510+2 bytes MBT partition
times 510-($-$$) db 0

; mark MBT partition as bootable
dw 0xAA55
