#include<stdio.h>

int main() {

  printf("tabliczka mnożenia 1 do 10\n\n");

  int a = 1, b, il, i;

  for (a = 1; a <= 10; a++) {
    for (il = 0, b = 1; b <= 10; b++) {
		il += a;
		
     if (il < 10) {
        printf("|  %d ", il);
      }
      else if (il == 100) {
          printf("|%d ", il);
      }
      else {
          printf("| %d ", il);
      }
	}
    printf("|\n");
}
  return 0;
}

