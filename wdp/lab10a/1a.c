#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(int a, int b) {
int flaga;
if((a == 0 || a == 1)) {
  if(a == 0) {
    flaga = 1;
    return flaga;
    }
    else if(a % 2 == b % 2) {
      flaga = 1;
      return flaga;
    }
    else {
      flaga = 0;
      return flaga;
    }
  }
  else if((a % 2 == b % 2) || (a % 2 == 0)) check(a / 2, b / 2);
  else {
    flaga = 0;
    return flaga;
  }
}

int main() {
  unsigned char ip[12] = {'2','5', '5', '0', '0', '1', '1', '9', '2'};
  unsigned char ip2[12];
  int i = 0, flaga=1;
  printf("Podaj numer IP, numer tego ip to 255.001.192\n");
  scanf("%s", ip2);

  while(i < 9 && flaga == 1) {
    if((*(ip + i)) != (*(ip2 + i))) {
     flaga = 0;
     printf("\n %d | niezgodne", i + 1);
    }
    else {
      flaga = 1;
      printf("\n %d | zgodne", i + 1);
    }
    i++;
    while(i > 2 && i < 6 && flaga == 1) {
      flaga=check((int)ip[i], (int)ip2[i]);
      if(flaga == 1) printf("\n %d | zgodne", i + 1);
      else printf("\n\n %d | niezgodne", i + 1);
      i++;
    }
  }
  printf("\n\nzgodność | %d\n", flaga);
  return 0;
}
