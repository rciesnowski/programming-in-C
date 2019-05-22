#include <stdio.h>
#include <stdlib.h>

int *podaj(int n, int *arr) {
  int i;
  printf("\nPodaj liczby:\n");
  for(i = 0; i < n; i++) scanf("%d", (arr + i));
  return arr;
}

int *szuk(int n, int *arr) {
  int j, i, t;
  for (j = 0 ; j < (n - 1); j++) {
    for (i = 0 ; i < (n - 1); i++) {
      if (*(arr + i + 1) < *(arr + i)) {
        t = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = t;
      }
    }
  }
  return arr;
}

int main() {
  int n;
  printf("Program wczytujący a liczb i znajdujący drugą największą liczbę z tej tablicy.\nPodaj a.\n");
  scanf("%d", &n);
  int *arr = malloc(sizeof(int) * n);
  arr = podaj(n,arr);
  arr = szuk(n,arr);
  printf("Druga największa wartość wynosi %d\n", *(arr + n - 2));
  return 0;
}

