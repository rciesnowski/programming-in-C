#include<stdio.h>

int main() {
	
	int i, j, k, l, x, macierz[3][4], macierz2[4][3], iloczyn;

	printf("wprowadz dwanascie liczb pierwszej macierzy\n");
	
	for (i=0;i<3;i++) for (j=0;j<4;j++) scanf("%d",&macierz[i][j]);
	
	printf("wprowadz dwanascie liczb drugiej macierzy\n");
	
	for (k=0;k<4;k++) for (l=0;l<3;l++) scanf("%d",&macierz2[k][l]);
	
	for(i=0;i<3;i++) {
		for(j=0;j<4;j++) {
            x=i*j
		}
        for (k=0;k<4;k++) {
            x+=(macierz[i][j]*macierz2[k][l]);
        }
	}
		
	printf("%d ",x);
	
	return 0;
}
