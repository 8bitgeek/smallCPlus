The files contained within are for the Small-C/Plus compiler. It
was written on the Amstrad PCW 8256. This compiler runs on
CP/M-80, and generates code for CP/M-80. It requires a 61K TPA to
run, so good luck!

It generates ZMAC assembly language. ZMAC is an "almost" Zilog
compatible Z80 assembler. It has some weird syntax. The
assembler, linker, and librarian are included in this
distribution.

This version of Small C has some interesting extensions;
structures, unions, and floating point, among others. The FP has
a funky format but all library source is included. The only real
drawback is that it uses the "undocumented" Z80 instructions to
access IXH, IXL, IYH, IYL and Z80MU doesn't like that. If you
leave out the FP stuff, everything is OK.

