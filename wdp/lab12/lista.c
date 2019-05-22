#include<stdio.h>

int main {
  int dlugosc, i, flaga;
  printf("\npodaj długość listy ");
  scanf("%d", &dlugosc);

  int lista[dlugosc];

  printf("\npodaj liczbę 1: ");
  scanf("%d", &lista[0]);
  for (i = 1; i <= dlugosc; i++) {
    printf("podaj liczbę %d: ", i + 1);
    scanf("%d", &lista[i]);
    if (lista[i] < lista[i-1]) {
      
    }
  }
}
