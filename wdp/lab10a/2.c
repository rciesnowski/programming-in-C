#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zamiana(int a) {
  if(a>=2) zamiana(a/2);
  printf("%d", a%2);
  }

int count(int a) {
  int i=1;
  if(a>=2) zamiana(a/2);
  i++;
  return i;
}

int main() {
    int a,b, i,k;

    printf("Podaj a:\n");
    scanf("%d", &a);
    printf("Podaj b:\n");
    scanf("%d", &b);
    i=count(a);
    k=count(b);

    printf("\nA w binarnym: ");
    zamiana(a);
    printf("\nPrzesuniecie a >> 2: ");
    zamiana(a>>2);
    printf("\nPrzesuniecie a X 4: ");
    zamiana(a%4);

    printf("\nB w binarnym wynosi: ");
    zamiana(b);
    printf("\nPrzesuniecie b>>2: ");
    zamiana(b>>2);
    printf("\nPrzesuniecie b X 4: ");
    zamiana(b%4);
    printf("\n ");
    printf("\nPierwsze bity a i ostatnie b: ");
    zamiana(a>>i);
    zamiana(b%(int)(pow(2,i)));

    printf("\nOstatnie bity b i pierwsze a: ");
    zamiana((a%(int)pow(2,k)));
    zamiana(b>>k);
    printf("\n");

    return 0;
}
