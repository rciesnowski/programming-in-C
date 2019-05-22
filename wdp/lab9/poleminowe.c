#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define KONIEC "\x1b[0m"

void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds)
        ;
}

int main() {
  int x, y;

  printf("Podaj wymiary planszy: ");
  scanf("%d %d", &x, &y);

  int plansza[x][y], x1, x2, y1, y2, i, j, l1=0, l2=0, kierunek1, kierunek2;
  srand(time(0));

  x1 = rand()%x;
  y1 = rand()%y;
  x2 = rand()%x;
  y2 = rand()%y;

  while ((x1 != x2) || (y1 != y2)) {
    for (i = 0; i < y; i++) {
      for (j = 0; j < x; j++) {
        if ((i == y1) && (j == x1)) printf("|" GREEN "A" KONIEC);
        else if ((i == y2) && (j == x2)) printf("|" BLUE "Z" KONIEC);
        else printf("| ");
      }
      printf("|\n");
    }
    if ((x1 == x-1) || (y1 == y-1) || (x1%10 == 0) || (y1%10 == 0)) l1++;
    if ((x2 == x-1) || (y2 == y-1) || (x2%10 == 0) || (y2%10 == 0)) l2++;
    printf("\nA stracił %d punkty życia", l1);
    printf("\nZ stracił %d punkty życia\n", l2);

    delay(507);
    system("clear");

    kierunek1 = rand()%4;
    while (((x1 == 0) && (kierunek1 == 1)) || ((x1 == x-1) && (kierunek1 == 0)) || ((y1 == 0) && (kierunek1 == 3)) || ((y1 == y-1) && (kierunek1 == 2))) kierunek1 = rand()%4;
    switch (kierunek1) {
      case 0: x1++;
      break;
      case 1: x1--;
      break;
      case 2: y1++;
      break;
      case 3: y1--;
    }

    kierunek2 = rand()%4;
    while (((x2 == 0) && (kierunek2 == 1)) || ((x2 == x-1) && (kierunek2 == 0)) || ((y2 == 0) && (kierunek2 == 3)) || ((y2 == y-1) && (kierunek2 == 2))) kierunek2 = rand()%4;
    switch (kierunek2) {
      case 0: x2++;
      break;
      case 1: x2--;
      break;
      case 2: y2++;
      break;
      case 3: y2--;
    }
  }
  for (i = 0; i < y; i++) {
    for (j = 0; j < x; j++) {
      if ((i == y1) && (j == x2)) printf("|" RED "♥" KONIEC);
      else printf("| ");
    }
    printf("|\n");
  }
  printf("\nA stracił %d punkty życia", l1);
  printf("\nZ stracił %d punkty życia", l2);
  printf("\n\nZnaki odnalazły się!\n");
  return 0;
}

