.intel_syntax noprefix
.global main
.text

main:
        mov eax, [esp+8]
        mov eax, [eax+4]

        push eax
        call atoi
        add esp,4
        
        push eax
        mov ebx, 0

        call fib
        add esp,4

        mov eax, ebx
        push eax
        mov edx, offset messg
        push edx
        call printf
        add esp,8

        xor ebx, ebx
        ret

fib:
        cmp eax, 1 
        jg duzy_skok
		
        cmp eax ,1
        je zero_skok
        
        mov ebx, 0
        mov ecx, 0
        inc eax
        ret

duzy_skok:
		dec eax
		call fib
		mov ebx, ecx 
		add ebx, edx 
		mov edx, ecx 
		mov ecx, ebx
		inc eax
		ret 
zero_skok:
        dec eax
        push eax
        call fib
        add esp, 4
        mov ebx, 1
        mov edx, 0	
        mov ecx, ebx
        
        inc eax
        ret

.data
		messg: .asciz "wartosc fibb %i\n"
		n: .int 10
