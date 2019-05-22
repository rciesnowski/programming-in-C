#include <stdio.h>

int main(){
  int x=0xAAAA;
  int y;

  asm volatile(
    ".intel_syntax noprefix;"
    
    "mov eax, %1;"
    "mov ecx, 32;"
    "xor ebx, ebx;"     
    
    "petla: "
    "shl eax, 1;"
    "jnc skok;"
    
    "shl eax, 1;"
    "jc skok;"
    
    "shl eax,1;"
    "jnc skok;"
    
    "inc ebx;"
    
    "skok: "
	"and eax,eax;"    
        
    "jnz petla;"
    
    "mov %0, ebx;" 

    ".att_syntax prefix;"
    : "=r" (y)
    : "r" (x)
    : "eax", "ecx", "ebx"
	       );
  printf("y = %i\n",y);

}
