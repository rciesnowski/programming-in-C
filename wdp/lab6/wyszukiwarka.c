#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char slowo[20], haslo[20];
    int wyst = 0, i, j, zgod, dlug;

    FILE *plik = fopen("ebook.txt","r");

    printf("podaj szukane slowo\n");
    scanf("%s", haslo);

    dlug = strlen(haslo);

    for (int i = 0; haslo[i]; i++) {
      haslo[i] = tolower(haslo[i]);
    }

    // int dlug = i;
    while (fgets(slowo, 20, plik) != 0) {
      for (i = 0; i <= dlug; i++) slowo[i] = tolower(slowo[i]);
      // for (i = 0; i <= dlug; i++) {
      //   if (slowo[i] != haslo[i]) {
      //    zgod = 0;
      //    break;
      //   }
      //   else zgod++;
      // }
      // if (zgod!=0) wyst++;
      // zgod = 0;


    if (strstr(slowo, haslo) != 0) wyst++;

  }
    fclose(plik);

    if (wyst == 0) printf("wyraz nie wystepuje\n");
    else printf("wyraz wystepuje w tekscie %d razy\n", wyst);

    return 0;
}

