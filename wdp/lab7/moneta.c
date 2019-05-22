#include <stdio.h>

int silnia(int n) {
  int silnia, i;
  silnia = 1;
  if (n > 0) {
    for (i = 1; i <= n; i++) silnia *= i;
  }
  return silnia;
}

int main() {
  int n, m, wszystkie = 1, suma = 0, i;
  printf("program liczący prawdopodobieństo wyrzucenia co najwyżej m orłów w n rzutach monetą\npodaj m\n");
  scanf("%d", &m);
  printf("podaj n\n");
  scanf("%d", &n);
  if (m > n) printf("ERROR\n");
  else {
    int tab[m];
    for (i = 0; i < n; i++) wszystkie *= 2;
    for (i = 0; i <= m; i++) tab[i] = silnia(n) / (silnia(i) * silnia(n-i));
    for (i = 0; i <= m; i++) suma += tab[i];
    printf("\nprawdopodobieństwo wynosi %d na %d\n", suma, wszystkie);
  }
  return 0;
}

