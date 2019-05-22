#include <stdio.h>

int main()
{
    int kwadr[3][3]; suma[8]; i,j,k; magia=0;
    
    printf("wprowadz dziewiec liczb\n");
    
    for((i=0;i<3;i++) && (j=0;j<3;j++)) {
		scanf("%d",&kwadr[i][j]);
	}
	
    suma[0]=kwadr[0][0]+kwadr[0][1]+kwadr[0][2];
    suma[1]=kwadr[1][0]+kwadr[1][1]+kwadr[1][2];
    suma[2]=kwadr[2][0]+kwadr[2][1]+kwadr[2][2];
    suma[3]=kwadr[0][0]+kwadr[1][0]+kwadr[2][0];
    suma[4]=kwadr[0][1]+kwadr[1][1]+kwadr[2][1];
    suma[5]=kwadr[0][2]+kwadr[1][2]+kwadr[2][2];
    suma[6]=kwadr[0][0]+kwadr[1][1]+kwadr[2][2];
    suma[7]=kwadr[0][2]+kwadr[1][1]+kwadr[2][0];

    for(i=1;i<8;i++) {
        if (suma[0]!=suma[i]) magia=1;
    }
    if (magia==0) {
		printf("liczby tworza kwadrat magiczny\n");
	}
	else {
		printf("liczby nie tworza kwadratu logicznego\n");
	}
	
    return 0;
}

