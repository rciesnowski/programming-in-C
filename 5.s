.intel_syntax noprefix
.global main
.text

main:
  mov eax, [esp+8]
  mov eax, [eax+4]
  push eax
  call atoi
  add esp, 4
xor ebx, ebx
mov ecx, 0
mov edx, 1


Fib:
push ecx
mov ebx, ecx
add ecx, edx
mov edx, ebx
dec eax
cmp eax, 0
jg Fib


push ecx
push offset output
call printf
add esp, 4
ret

.data

output: .asciz "%d\n"
formatin: .asciz "%d"
