The plan is to make a branch of this compiler which will 
generate ARM assembler output.

Before branching, the objective will be to get the entire sytem
compiling and running under Linux using GCC to the point
that it compiles K&R C code into correct Z/80 machine code
as was originally intended.

As of this writing, the contents of the /cc folder now 
compiles, runs, and appears to be generating the correct
output.

==== The original README text from 1988 ====

The files contained within are for the Small-C/Plus compiler. It
was written on the Amstrad PCW 8256. This compiler runs on
CP/M-80, and generates code for CP/M-80. It requires a 61K TPA to
run, so good luck!

It generates ZMAC assembly language. ZMAC is an "almost" Zilog
compatible Z80 assembler. It has some weird syntaz. The
assembler, linker, and librarian are included in this
distribution.

This version of Small C has some interesting extensions;
structures, unions, and floating point, among others. The FP has
a funky format but all library source is included. The only real
drawback is that it uses the "undocumented" Z80 instructions to
access IXH, IXL, IYH, IYL and Z80MU doesn't like that. If you
leave out the FP stuff, everything is OK.

To install, make a directory; cd to it, then :

PKUNZIP -d smlcp1
PKUNZIP -d smlcp2

you get 4 directories, to wit:

part1
part2
part3
part4


Enjoy!

