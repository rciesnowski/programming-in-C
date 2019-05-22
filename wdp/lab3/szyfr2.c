#include <stdio.h>

int main() {

  int a, b;

  printf("wprowadź kod\n");
  scanf("%d%d", &a, &b);

  while (a != 12 && a != 21 && b != 12 && b != 21) {
    printf("zły szyfr, wprowadz liczby ponownie\n");
    scanf("%d%d", &a, &b);
  }

  printf("przynajmniej jedna z liczb jest poprawna, wygrałeś życie\n");

  return 0;

}

