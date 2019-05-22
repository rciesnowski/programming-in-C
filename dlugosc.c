// przy kompilacji uzyc gcc -m32

#include <stdio.h>
int main(){
	
	char *s = "Abc";
	int y;
	asm volatile(
	".intel_syntax noprefix;"
	
	"mov ebx, %1;"
	"xor ecx, ecx;"
	"petla:"
		"mov al, [ebx];" //al do kodowania ascii
		"cmp al, 0;" // porownujemy z zerem
		"je koniec;" // jesli equal - konczymy (bo koncem lancucha jest bit zerowy) (moze byc tez jz - jesli zero)
		"inc ecx;" // zwiekszamy licznik
		"inc ebx;" // przesuwamy o 1
		"jmp petla;"
	"koniec:"
		"mov %0, ecx;"
	
	".att_syntax prefix;"
	: "=r" (y)
	: "r" (s)
	: "eax", "ebx", "ecx"
	);
	printf("y = %i\n", y);
	return 0;
}

//praca domowa: odwrocic lancuch znakow: moza usunac igreka ale nie trzeba
//zmienną zadeklarować inaczej aby dozwolic modyfikacje: jako tablice: char s[]="Abc";
