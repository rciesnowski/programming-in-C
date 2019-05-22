#include <stdio.h>
int main(){
  int x = 0xffffffff, y, c, k;
  asm volatile(
	       ".intel_syntax noprefix;"
	       "mov eax, %1;"
	       "xor ebx, ebx;"
	       "xor ecx, ecx;"
	       
	       "petla:"
				"cmp eax, 0;"
				"je koniec;" // jesli eax == zero przeskakuje do koniec
				"shl eax, 1;" // przesuwa w lewo
				"jnc sprawdz;" // jesli nie 1 
				"inc ebx;" // zwieksza licznik ebx
				"jmp petla;" // powtarza petle
	       
	       "sprawdz:"
				"cmp ecx, ebx;"
				"ja petla;" // jesli ecx większe niż ebx
				"jbe zamien;" // jesli mniejsze lub rowne zamienia
	       
	       "zamien:"
				"mov ecx, ebx;" // zastepuje liczniki najdluzszego łancucha
				"xor ebx, ebx;" // zeruje licznik tymczasowy
				"jmp petla;" // kontynuuje petle
	       
	       "koniec:"
				"cmp ecx, ebx;" // porownuje licznik maks z bieżącym
				"jbe zamien;" // jesli bieżący jest większy to zastępuje
				"mov %0, ecx;" // wrzuca ecx do wyjścia
	       
	       ".att_syntax prefix;"
	       : "=r" (y)
	       : "r" (x)
	       : "eax", "ecx", "ebx"
	       );
	       
	       printf("%u w zapisie binarnym: \n", x);
	       for (c = 31; c>=0; c--) {
			   k = x >> c;
			   if (k & 1) printf("1");
			   else printf("0");
		   }
		   printf("\nnajdluzszy ciag jedynek ma dlugosc %i\n", y);
	   }
