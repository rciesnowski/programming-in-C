#include <stdio.h>
int main () {
  int x=2018;
  int y;
  asm volatile (
		".intel_syntax noprefix;"
		"mov eax, %1;"
		"xor ecx, ecx;" //zerowanie rejestru
		"petla: "
		"add eax, eax;"
		"inc ecx;" //zwiekszenie o 1
		"cmp ecx, 10;"
		"jnz petla;"
		"mov %0, eax;"
		".att_syntax prefix;"
		: "=r" (y)
		: "r" (x)
		: "eax", "ecx"
		);
  printf("y=%i\n", y);
  return 0;
}
