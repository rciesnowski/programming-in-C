.intel_syntax noprefix
.global main
.text

main:
  mov ebx, offset t 
  mov eax, offset format 
  push ebx 
  push eax
  call scanf
  pop eax ;# add esx, 8 zamiast dwóch popów
 
  pop ebx 
  mov ebx, [t] 
  add ebx, ebx 
  push ebx 
  push eax 
  call printf 
  pop eax 
  pop ebx
  mov eax,0 

  ret

.data
  format: .asciz "%d"
  t: .int

