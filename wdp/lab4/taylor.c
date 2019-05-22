#include <stdio.h>
#include <math.h>

int main() {

  int a, c, i;
  float pot, sil = 1, tayl = 0, eks, x, blad;

  printf("podaj a: ");
  scanf("%d", &a);

  for (i = 0; i <= 10; i++) {
    pot = 1;
    if (i > 0) {
      sil = sil*i;
    }
    for(c = 0; c < i; c++) {
      pot = pot*a;
    }
    x = pot/sil;
    tayl = tayl + x;
  }

  eks = exp(a);
  if (eks < 0) {
    eks = -eks;
  }

  blad = eks - tayl;

  printf("blad sumy taylora wynosi %f\n", blad);

  return 0;
}

