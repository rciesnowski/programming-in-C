#include <stdio.h>

unsigned long long int silnia(int n) {
  int i;
  long int silnia;
  silnia = 1;
  if (n > 0) {
    for (i = 1; i <= n; i++) silnia *= i;
  }
  return silnia;
}

int main() {
  int n, i;
  printf("program wypisujący współczynniki pascala dla podanego dwumianu\npodaj n\n");
  scanf("%d", &n);
  unsigned long long int tab[n];
  printf("wspolczynniki pascala: ");
  for (i = 0; i <= n; i++) {
    tab[i] = silnia(n) / (silnia(i) * silnia(n-i));
    printf("%llu ", tab[i]);
  }
  printf("\n");
  return 0;
}

