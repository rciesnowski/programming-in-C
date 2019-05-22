.intel_syntax noprefix

.global main
.text

main:
mov eax, [esp+8] 
mov eax, [eax+4] ;#pobiera argument do eax

push eax
call atoi
add esp, 4 ;#wrzuca do stosu, atoi konwertuje do int

push eax
call f
add esp, 4 ;#wrzuca do stosu, wywoluje fibonnaciego i przywraca wartosc sprzed f

push eax
mov ebx, offset messg
push ebx
call printf
add esp, 8 ;#drukowanko, przywracanko

xor eax, eax ;#zerowanko
ret

f:
	;#stackframe
    push ebp
    mov  ebp, esp ;#ebp przechowa wartość esp
    sub  esp, 4 ;#tworzymy miejsce w stosie na zmienna
    mov  eax, [ebp+8] ;#rzucamy wartosc n do eax
    
    cmp  eax, 2
    jb   end ;#porownuje n z 2 i jesli mniejsze idzie do enda
    
    ;#n-1
    dec  eax ;#zmniejsza eax
    push eax
    call f
    
    ;#n-2
    mov  [ebp-4], eax
    dec  dword ptr [esp] ;#konwertowanko do postaci 32b
    call f
    add  esp,4        ;#poprzednia
    
    ;#fibonacie n-1 + n-2
    add  eax, [ebp-4]
    
end:
    mov  esp, ebp ;#wynik do esp
    pop  ebp ;# zrzucanko
    ret

.data

messg: .asciz "%i\n"
n: .int 10
