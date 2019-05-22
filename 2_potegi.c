#include <stdio.h>
int main () {
  int x=2018;
  int y;
  asm volatile (
		".intel_syntax noprefix;"
		"mov eax, %1;"
		"mov ecx, 10;"
		"petla: "
		"add eax, eax;"
		"sub ecx, 1;"
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
