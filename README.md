# notsomebfcompiler
Compiler for Brainfuck, written in c/c++
### This was made in a very short amount of time, and it is more of an interpreter

### to install, run the following commands:

cd notsomebfcompiler/

sh install.sh

### to use:

nbf [file] [options]

### important notes:

install moves the compiler into usr/bin/, so you will need to enter your sudo password

this only works on Linux, i might make a windows version later, if i feel like it.

this is also a modular compiler, however this will be implemented in a later version, for now it is just a normal interpreter

of course, it has the normal [->+<.,], however i will make my own "fork" of bf, and add in my own little mix,
but you can choose not to enable these characters by using the option "-n" (for -normal)