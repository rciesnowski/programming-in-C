#include<stdio.h>

int mnoznik(unsigned int a, int i) {
  i++;
  printf("wynik = %d wyjscie z petli\n", a);
  if ((i == 16)) return i;
  if (a >= 100000000) {
    printf("przekroczenie zakresu\n");
    return i;
  }
  else {
    a*=4;
    mnoznik(a,i);
    return i;
  }
}


int main() {
  unsigned int a;
  int i=0;
  printf("podaj argument\n");
  scanf("%d", &a);
  mnoznik(a, i);
  return 0;
}
