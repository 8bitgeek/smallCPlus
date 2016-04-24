#include <stdio.h>
#include <math.h>
#include "float.h"

#asm
;
;	transcendental functions: exp
;
QEXP:	LD	BC,8138H	;1.442695041
	LD	IX,0AA3BH
	LD	DE,295CH	
	CALL	FMUL	
	LD	A,(FA+5)
	CP	88H
	JP	NC,DIV17
	CALL	PUSHFA	
	CALL	QFLOOR	
	POP	BC
	POP	IX
	POP	DE
	PUSH	AF
	CALL	FSUB	
	LD	HL,EXPCOEF
	CALL	POLY	
	LD	HL,FA+5	
	POP	AF
	OR	A
	JP	M,EXP5	
	ADD	A,(HL)
	DB	1	;"ignore next 2 bytes"
EXP5:	ADD	A,(HL)
	CCF	
	LD	(HL),A
	RET	NC
	JP	DIV17	
;
EXPCOEF: DB	10
	DB	0CCH,0D5H,45H,56H,15H,6AH
	DB	0CFH,37H,0A0H,92H,27H,6DH
	DB	0F5H,95H,0EEH,93H,00H,71H
	DB	0D0H,0FCH,0A7H,78H,21H,74H
	DB	0B1H,21H,82H,0C4H,2EH,77H
	DB	82H,58H,58H,95H,1DH,7AH
	DB	6DH,0CBH,46H,58H,63H,7CH
	DB	0E9H,0FBH,0EFH,0FDH,75H,7EH
	DB	0D2H,0F7H,17H,72H,31H,80H
	DB	0,0,0,0,0,81H
;
#endasm
