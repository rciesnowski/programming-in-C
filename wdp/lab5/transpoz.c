#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,a,b,c,d,i,j,k,l;
    printf("wymiary macierzy:\n");
    scanf("%d %d",&x,&y);
    printf("wymiary bloku transpozycji:\n");
    scanf("%d %d",&a,&b);
    while(x%a!=0 || y%b!=0)
    {
        printf("error\n");
        printf("wymiary macierzy:\n");
        scanf("%d %d",&x,&y);
        printf("wymiary bloku transpozycji:\n");
        scanf("%d %d",&a,&b);
    }
    int tab[x][y];
    printf("podaj wartosci macierzy\n");
    for(i=0;i<x;i++) for(j=0;j<y;j++) scanf("%d",&tab[i][j]);
    printf("transponowana macierz\n");
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {

            printf("%d ",tab[j%b+(i/a)*a][i%a+(j/b)*b]);


        }
        printf("\n");
    }
    return 0;
}

