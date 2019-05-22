#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char slowa[12][10]= {{"astronauta"}, {"segregator"}, {"inteligent"}, {"drapiestwo"}, {"egzorcysta"}, {"furgonetka"}, {"grzechotka"}, {"hipokryzja"}, {"instrukcja"}, {"kalkulator"}, {"czarodziej"}, {"rzeczownik"}}, haslo[10],  haslo1[10]="**********", haslo2[10]="**********", literka;
  srand(time(NULL));
  int r = rand();
  int szans=0, check2, check3, los =  1 + r % 12;
  for(int i=0;i<=9;i++) {
    haslo[i]=slowa[los][i];
  }

  while(szans<=6) {
    switch(szans) {
      case 0 :
          printf("      _______\n     |/\n     |\n     |\n     |\n    _|_,,,,,,,,,,,,\n");
          break;
      case 1 :
          printf("      _______\n     |/      |\n     |\n     |\n     |\n    _|_,,,,,,,,,,,,\n");
          break;
      case 2 :
          printf("      _______\n     |/      |\n     |      ()\n     |\n     |\n    _|_,,,,,,,,,,,,\n");
          break;
      case 3 :
          printf("      _______\n     |/      |\n     |      ()\n     |      []\n     |\n    _|_,,,,,,,,,,,,\n");
          break;
      case 4 :
          printf("      _______\n     |/      |\n     |      ()\n     |      []|\n     |\n    _|_,,,,,,,,,,,,\n");
          break;
      case 5 :
          printf("      _______\n     |/      |\n     |      ()\n     |     /[]|\n     |\n    _|_,,,,,,,,,,,,\n");
          break;
      case 6 :
          printf("      _______\n     |/      |\n     |      ()\n     |     /[]|\n     |     .|\n    _|_,,,,,,,,,,,,\n");
          break;
    }
    printf("pozostalych szans: %d\nhaslo: ", (7-szans));
    check2=0;
    check3=0;
    for(int i=0; i<=9;i++) {
      haslo2[i]=haslo1[i];
      printf("%c", haslo1[i]);
    }
    printf("\n wpisz literke: ");
    scanf(" %c", &literka);
    for(int i=0; i<=9;i++) {
      if(literka==haslo[i]) {
        haslo1[i]=literka;
      }
      if(haslo1[i]==haslo[i]) {
        check3++;
      }
      if(haslo1[i]==haslo2[i]) {
        check2++;
      }
    }
    if (check3==10) {
      printf("\n brawo \n");
      break;
    }
    if(check2==10) {
      szans++;
    }
  }

  if(szans==7){
    printf("      _______\n     |/      |\n     |      ()\n     |     /[]|\n     |     .||,\n    _|_,,,,,,,,,,,,\n powiesiles czlowieka \n");
  }
  return 0;
}

