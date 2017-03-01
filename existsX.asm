; author: Mika Chesnutt 
;This assembly  program prints the character ‘Y’ if its input contains the character ‘X’, and ’N’ 
; otherwise. The program should run until either the ‘X’ is found or EOF, whichever comes first. 




	setvalue r0 0 		;  r0 = 0 
	setvalue r1 88 		; ‘X’ ASCII value 
	setvalue r2 89 		; ‘Y’ ASCII value 
	setvalue r3 78  	; ’N’ ASCII value 
L1: 	system read r4 
	compare r4 r0 		; if r1 < 0 
	jumplt L2		; break out of the loop 
	compare r4 r1 		; check if c = ‘X’ 
	jumpne L1		; if not equal to ‘X, jump to next character 
	system write r2  	; if found, write ‘Y’ and exit 
	jump L3
L2:	system write r3		; print an ’N’ because no ‘X’ found at EOF 
L3: 	system exit 