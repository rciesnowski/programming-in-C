#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main() {

  int wyst[256] = { 0 }, i, l;
  char alfabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

  FILE *plik = fopen("ebook.txt", "r");

  while ((l = fgetc(plik))) {
    if (l == EOF) break;
    for (i = 0; i <= 26; i++) {
      l = tolower(l);
      if (l == alfabet[i]) wyst[l]++;
    }
  }

  for(i = 0; i < 256; i++) {
    if(wyst[i] > 0) printf("%c\t%d\n", i, wyst[i]);
  }
  
  fclose(plik);

  return 0;
}

