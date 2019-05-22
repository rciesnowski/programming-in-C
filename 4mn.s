.intel_syntax noprefix
.global main
.text

main:
  mov ebx, offset t ;#lokowanie pamieci bo nie ma jeszcze wartosci
  mov eax, offset format ; dla formatu
  push ebx ; rzuca na stos
  push eax
  call scanf
  pop eax ; wyrzuca ze stosu
  pop ebx 
  mov ebx, [t] ; wrzuca wartosc do ebx
  add ebx, ebx ; mnozonko
  push ebx ; rzucam
  push eax ; rzucam
  call printf ; drukuj
  pop eax ; oczyszczam stos
  pop ebx
  mov eax,0 ; zeruje eax zeby działał return 

  ret

.data
  format: .asciz "%d"
  t: .int

