#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i=0,g=0, c=30000, wyst=0;
    char tab[c][c];
    srand( time(NULL) );
    for(i=0;i<c;i++){
        for(g=0;g<c;g++){
            tab[i][g] = rand( ) % 26 + 'a';
            printf("%c ",tab[i][g]);
        }
        printf("\n");
    }

    for(i = 5; i < 29990; i++) {
        for(g = 5; g < 29990; g++) {
            if ((tab[i][g] == 'a') && (tab[i][g+1] == 'b') && (tab[i][g+2] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i][g-1] == 'b') && (tab[i][g-2] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i+1][g] == 'b') && (tab[i+2][g] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i-1][g] == 'b') && (tab[i-2][g] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i+1][g+1] == 'b') && (tab[i+2][g+2] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i-1][g-1] == 'b') && (tab[i-2][g-2] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i-1][g+1] == 'b') && (tab[i-2][g+2] == 'c')) wyst++;
			if ((tab[i][g] == 'a') && (tab[i+1][g-1] == 'b') && (tab[i+1][g-2] == 'c')) wyst++;
		}
	}
	printf("ciąg abc wystepuje w tablicy %d razy\n", wyst);
    return 0;
}
