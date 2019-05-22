#include<stdio.h>

int main()
{
  int pot = 1, i, j;
  char spac = ' ';

  printf("\ntrojkat poteg dwojki ze spacjami\n\n");

  for (i = 0; i < 10; i++) {
    if (pot == 1) {
      for(j = 1; j <= 12; j++) {
        printf("%c", spac);
      }
      printf("%d\n", pot);
    }
    if (pot == 2) {
      for(j = 1; j <= 9; j++) {
        printf("%c", spac);
      }
    printf("%d", pot);
    }
    if(pot == 4) {
      for(j = 1; j <= 5; j++) {
        printf("%c", spac);
      }
      printf("%d\n", pot);
    }
    if (pot == 8) {
      for (j = 1; j <= 6; j++) {
        printf("%c", spac);
      }
      printf("%d", pot);
    }
    if(pot == 16) {
      for(j = 1;j <= 4; j++) {
        printf("%c", spac);
      }
      printf("%d", pot);
    }
    if(pot == 32) {
      for(j = 1;j <= 4; j++) {
        printf("%c", spac);
      }
      printf("%d\n", pot);
    }
    if(pot == 64) {
      for(j = 1; j <= 2; j++) {
        printf("%c", spac);
      }
      printf("%d", pot);
    }
    if(pot == 128 | pot == 256 | pot == 512) {
      for(j = 1;j <= 3; j++) {
        printf("%c", spac);
      }
      printf("%d", pot);
    }
    pot*=2;
  }

  printf("\n\n");

  return 0;
}

