#include <stdio.h>
int main () {
  int x=2018;
  int y;
  asm volatile (
		".intel_syntax noprefix;"
		"mov ecx, 32;"
		"mov eax, %1;"
		"xor ebx, ebx;"
		"petla: "
		"shl eax, 1;"
		"jnc skok;"
		"inc ebx;"
		"and eax, eax;"
		"skok:"
		"dec ecx;"
		"jnz petla;"
		"mov %0, ebx;"
		".att_syntax prefix;"
		: "=r" (y)
		: "r" (x)
		: "eax", "ecx", "ebx"
		);
  printf("y=%i\n", y);
  return 0;
}
