# vectoros
<pre>
                     __
___  __ ____   _____/  |_  ___________
\  \/ // __ \_/ ___\   __\/  _ \_  __ \
 \   /\  ___/\  \___|  | (  <_> )  | \/
  \_/  \___  >\___  >__|  \____/|__|
           \/     \/
</pre>

![screenshot-vector](https://user-images.githubusercontent.com/7083803/93932398-c8f15600-fd28-11ea-964c-26710aa75201.png)


Vector OS is a small 32 bit operating system coded from scratch in C and Assembler (NASM).
Probably at some point I will upgrade it to 64 bit. 
Anyways -- you can fork it, test it, hack it and basically have fun with it in any way you like.

Currently the best way to run it is with QEMU or Bochs in 32 bit mode

Compile and test:
1. make
2. make run

Remember -- there is no libc here, there are no standard C functions.
Everything has to be coded from scratch.


Update# 1:
Added support for USB keyboard/mouse input. 
It uses legacy USB support which is basically an emulation for PS/2 as there is no standardization and it's a huge mess...

Update# 0:
Currently it boots to 16 bit real mode, switches to 32 bit mode, inits the Global Descriptor Table and loads the Kernel.
Coding a standard library would be priority number 1.
