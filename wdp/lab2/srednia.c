#include <stdio.h>

int main()
{
  int num = 0;
  float a, b, c, d, e, f, sred;
  printf("Witamy w programie liczacym srednia arytmetyczna od 1 do 6 liczb calkowitych!\n");
  printf("Ile liczb chcesz zliczyc?\n");

  scanf("%d", &num);

  while (num < 1 || num > 6) {
    printf("Ten program potrafi liczyc srednia maksymalnie szesciu liczb calkowitych.\nSprobuj ponownie.\n");
    scanf("%d", &num);
  }

  switch (num) {
    case 1:
      printf("Podaj liczbe\n");
      scanf("%f", &a);
      printf("Srednia wynosi %.2f\n", sred);
      break;
    case 2:
      printf("Podaj dwie liczby\n");
      scanf("%f%f", &a, &b);
      sred = ( a + b )/num;
      printf("Srednia wynosi %.2f\n", sred);
      break;
    case 3:
      printf("Podaj trzy liczby\n");
      scanf("%f%f%f", &a, &b, &c);
      sred = ( a + b + c )/num;
      printf("Srednia wynosi %.2f\n", sred);
      break;
    case 4:
      printf("Podaj cztery liczby\n");
      scanf("%f%f%f%f", &a, &b, &c, &d);
      sred = ( a + b + c + d )/num;
      printf("Srednia wynosi %.2f\n", sred);
      break;
    case 5:
      printf("Podaj piec liczb\n");
      scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
      sred = ( a + b + c + d + e )/num;
      printf("Srednia wynosi %.2f\n", sred);
      break;
    case 6:
      printf("Podaj szesc liczb\n");
      scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
      sred = ( a + b + c + d + e + f )/num;
      printf("Srednia wynosi %.2f\nMamy nadzieje, ze ta informacja jest przydatna.\n", sred);
      break;
    }

  return 0;
}

