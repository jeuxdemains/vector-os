# vectoros
<pre>
                     __                
___  __ ____   _____/  |_  ___________ 
\  \/ // __ \_/ ___\   __\/  _ \_  __ \
 \   /\  ___/\  \___|  | (  <_> )  | \/
  \_/  \___  >\___  >__|  \____/|__|   
           \/     \/                   
</pre>

Currently the best way to run it is with QEMU or Bochs in 32 bit mode

Compile and test:
1. make
2. emu-system-i386 -drive format=raw,file=os-image


Remember -- there is no glbic here, there are no standart C functions.
Everything has to be coded from scratch.

Currently it boots to 16 bit real mode, switches to 32 bit mode, inits the Global Descriptor Table and loads the Kernel.
Coding a standart library would be priority number 1.
