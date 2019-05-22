#include <stdio.h>

int main() {
  int a, b;
  printf("\nprogram, który wypisuje cyfry osemkowe liczby dziesietnej od najmlodszej do najstarszej\n");
  printf("\npodaj liczbę dziesietna\n");

  scanf("%d", &a);

  printf("\n");

  // while (a > 0) {
  //   b = a%(8);
  //   a = a/8;
  //   printf("%d\n", b);
  // }

  int osemki(int a) {
    if (a > 0) {
      b = a%(8);
      printf("%d\n", b);
      osemki(a/8);
    }
  }

  osemki(a);

  return 0;

}

