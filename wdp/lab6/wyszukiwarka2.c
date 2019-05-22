#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
	char haslo[12], slowa[36];
	int i, wystepowanie=0;

	printf("podaj szukany wyraz\n");
	scanf("%s", haslo);
  for (i=0; i<=12; i++) haslo[i] = tolower(haslo[i]);

  FILE *plik=fopen("ebook.txt","r");
	fscanf(plik, "%s", slowa);
	for (i = 1; i < 99999 && fscanf(plik, "%s", slowa) != EOF; i++) {
    for (i=0; i<=36; i++) slowa[i] = tolower(slowa[i]);
		if (strcmp(haslo, slowa) == 0) wystepowanie++;
	}

  if (wystepowanie != 0) printf("szukane slowo wystepuje %d razy\n", wystepowanie);
  else printf ("szukane slowo nie wystepuje\n");
  fclose(plik);
return 0;
}

