# vectoros
<pre>
                     __
___  __ ____   _____/  |_  ___________
\  \/ // __ \_/ ___\   __\/  _ \_  __ \
 \   /\  ___/\  \___|  | (  <_> )  | \/
  \_/  \___  >\___  >__|  \____/|__|
           \/     \/
</pre>

Vector OS is a small 32 bit operating system coded from scratch in C and Assembler (NASM).
Probably at some point I will upgrade it to 64 bit.
Anyways you can fork it, test it, hack it and basically have fun with it in any way you like.

Currently the best way to run it is with QEMU or Bochs in 32 bit mode

Compile and test:
1. make
2. make run


Remember -- there is no glbic here, there are no standart C functions.
Everything has to be coded from scratch.

Currently it boots to 16 bit real mode, switches to 32 bit mode, inits the Global Descriptor Table and loads the Kernel.
Coding a standart library would be priority number 1.
