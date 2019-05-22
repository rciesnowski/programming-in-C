#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");
  int suma = 0, utarg = 0, wczyt, wczyt2 = 1;
  printf("witamy na kasie\ndodaj kwotę do rachunku\n");
  scanf("%d", &wczyt);
  while ((wczyt != 0) || (wczyt2 != 0)) {
    if (wczyt == 0) {
      utarg += suma;
      suma = 0;
      wczyt2 = wczyt;
      system("clear");
      printf("suma została wyzerowana\npodaj kwotę do nastepnego rachunku lub wpisz 0 aby zakonczyc prace\n");
      scanf("%d", &wczyt);
    }
    else {
      suma += wczyt;
      wczyt2 = wczyt;
      printf("suma wynosi %d\ndodaj kwotę do rachunku lub wpisz 0 zeby zakonczyc rachunek\n", suma);
      scanf("%d", &wczyt);
    }
  }
  printf("calkowity utarg wyniosl %d, milego dnia\n", utarg);
  return 0;
}

