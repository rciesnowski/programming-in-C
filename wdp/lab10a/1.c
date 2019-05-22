#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  unsigned char ip[9]={'9','9', '8', '0', '0', '4', '5', '0', '6'};
  unsigned char ip2[9];
  int i, flaga=1;

  printf("Program sprawdzający, czy podany numer IP należy do danej podsieci. IP wynosi 998 004 506. Podaj IP.\n");
  scanf("%s", ip2);

  printf("\n\n");

  for(i = 0; i < 9 && flaga == 1; i++) {
    if((*(ip + i)) != (*(ip2 + i))) {
      flaga = 0;
      printf("\n %d sie NIE zgadza \n", i + 1);
    }
    else {
      flaga = 1;
      printf("\n %d sie zgadza \n", i + 1);
    }
    i++;
    while(i < 6 && i > 2 && flaga == 1) {
      if((*(ip2 + i)) != 0) {
        if((*(ip + i)) != (*(ip2 + i))) {
          flaga = 0;
          printf("\n %d sie NIE zgadza \n", i + 1);
        }
        else {
          flaga = 1;
          printf("\n %d sie zgadza \n", i + 1);
        }
      }
      else {
        flaga = 1 ;
        printf("\n %d sie zgadza \n", i + 1);
      }
      i++;
    }
  }
  printf("\nREZULTAT: %d\n", flaga);
  return 0;
}

