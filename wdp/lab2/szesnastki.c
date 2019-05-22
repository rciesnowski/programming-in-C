#include <stdio.h>

int main()
{
  int num;
  printf("program zamieniający wartość z klawiatury od 0 do 15 na cyfry szesnastkowe\npodaj liczbę od 0 do 15\n");
  scanf("%d", &num);
  switch (num) {
    case 0 ... 9:
      printf("%d\n", num);
      break;
    case 10:
      printf("a\n");
      break;
    case 11:
      printf("b\n");
      break;
    case 12:
      printf("c\n");
      break;
    case 13:
      printf("d\n");
      break;
    case 14:
      printf("e\n");
      break;
    case 15:
      printf("f\n");
      break;
    default:
      printf("ERROR\n");
      break;
    }
  return 0;
}

