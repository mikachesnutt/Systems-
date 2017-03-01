; author: Mika Chesnutt 
; date: February 8th, 2017 
; getint.asm file reads a sequence of digits, converts them to an integer, 
; prints the asterisk character that many times on a single line 


  setvalue r0 0 
  setvalue r1 10    ;needed for multiplication
  setvalue r2 48    ;’0’
  setvalue r3 57    ;’9’
  setvalue r6 42    ;’*’
  setvalue r7 0     ;r7 starts at 0 
  setvalue r9 1     ;r9 starts at 1 
  setvalue r5 0     ;r5 starts at 0 
  setvalue r8 1 
L1: system read r4  
  compare r4 r0     ;if r4 < 0 
  jumplt L2       ;not a valid character 
  compare r4 r2     ;if r4 < ‘0’ 
  jumplt L2       ;not a digit so exit  
  compare r4 r3   ;if r4 > ‘9’ 
  jumpgt L2         ;not a digit so exit 
  multiply r5 r7 r1   ;r5 = 10 * r7 
  subtract r4 r4 r2   ; r4 = r4 - ‘0’ to get number 
  add r7 r4 r5    ;r7 = r4 + r5 
  jump L1         ;read the next character 
L2: compare r7 r8     ;if r7 < r8, done printing 
  jumplt L3  
  system write r6   ; write a ‘*’ 
  add r8 r8 r9    ; increase counter by one 
  jump L2         ; jump back to print again
L3: system exit 
  