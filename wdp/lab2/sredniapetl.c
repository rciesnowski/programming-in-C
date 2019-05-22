#include <stdio.h>

int main()
{
    int n, i;
    float rob, suma = 0.0, sred;

    printf("Z ilu liczb chcesz wyliczyc srednia? Podaj liczbe z zakresu 1 do 6:\n");
    scanf("%d", &n);

    while (n > 6 || n <= 0)
    {
        printf("Nie udalo ci sie podac liczby z zakresu 1 do 6.\n");
        printf("Sprobuj ponownie.\n");
        scanf("%d", &n);
    }

    for(i = 1; i <= n; i++)
    {
        printf("Wprowadz liczbe nr %d: ", i);
        scanf("%f", &rob);
        suma += rob;
    }

    sred = suma / n;
    printf("Srednia wynosi %.2f. Milego dnia.\n", sred);

    return 0;
}

