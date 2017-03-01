; author: Mika Chesnutt 
; This assembly language program reads a line of characters and prints the character having the  
; largest ASCII value. 
	



	setvalue r0 0 		;r0=0 
	add r2 r1 r0  		;r2=r1+r0 (r2=r1) 
	setvalue r3 10 		;r3=10 (newline ASCII code) 
L1:	system read r1		; read in character 
	compare r1 r2 		;if r1<r2 
	jumple L2 		;check if newline (10)  
	add r2 r1 r0  		;Otherwise r2=r1+r0 (r2=r1)  		
L2: 	compare r1 r3 		;if r1 not 10 
	jumpne L1 		; check next 
	system write r2 	; if reached end, print r2 (always holds largest value) 
	system exit 
