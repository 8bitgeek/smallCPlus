Toying with the idea of porting this compiler for ARM Cortex-M.

Starting with porting it to a modern GCC compiler resulted in the
following:

- Created Makefile for Linux/GCC compiler.
- Removed Terminating ^Z characters ala CP/M
- Renamed functions which conflict with GCC keywords (const, jump, etc...) 

==== The following is The Original 'READ.ME' file from 1988 =====

This Small-C/Plus compiler is based on the 'Small C Compiler
with Floating Point (Z80)', SIG/M Volume 224.  The new features
it provides include:

      Additional control structures

      More pre-processor directives

      Structures and unions

      More data types

      Improved code generation

      Enhanced library

      Library management and library reference resolution

      Assembly code optimiser

The Small-C/Plus compiler has been written on an Amstrad PCW 8256.
It requires a Z80 processor and 61K TPA to run.



Bug reports, bug fixes and comments should be addressed to:

    R M Yorston
    1 Church Terrace
    Lower Field Road
    Reading
    RG1 6AS
