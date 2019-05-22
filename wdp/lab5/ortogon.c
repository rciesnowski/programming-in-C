#include <stdio.h>
int main()
{
    int i,j,k,x,tab[4][4], ortogon=0;
    printf("wpisz macierz 4 na 4:\n");
    for(i=0;i<4;i++) for(j=0;j<4;j++) scanf("%d",&tab[i][j]);

//   printf("\nmacierz:\n");
//    for(i=0;i<4;i++) { for(j=0;j<4;j++) printf("%d ",tab[i][j]); printf("\n"); }
//   printf("\ntransponowana macierz:\n");
//    for(i=0;i<4;i++) { for(j=0;j<4;j++) printf("%d ",tab[j][i]); printf("\n"); }
//    printf("\niloczyn tych macierzy:\n");

    for(i=0;i<4;i++) {
        for(j=0;j<4;j++) {
            x=0;
            for (k=0;k<4;k++) {
				x=(tab[i][k]*tab[j][k]);
			}
			printf("%d ",x);
		}
		printf("\n");
	}
            
            if (x!=0 && x!=1) {
				ortogon=0;
			}
            if (x==1 && i!=j) {
				ortogon=0;
			}
            if (x==0 && i==j) {
				ortogon=0;
			}

        printf("\n");
        
    if (ortogon==0) {
		printf("\nmacierz jest ortogonalna\n");
		}
	else {
		printf("\nmacierz nie jest ortogonalna\n");
	}
	
    return 0;
} 

