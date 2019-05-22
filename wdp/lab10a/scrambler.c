#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Program scrambler przyjmujący n liczb. Podaj n ");
    scanf("%d", &n);
    int *arr = malloc(sizeof (int) * n), *wyn = malloc(sizeof (int) * n), *wyn2 = malloc(sizeof (int) * n);
    for(i=0; i<n; i++) {
      printf("\nLiczba %d:", i+1);
      scanf("%d", &arr[i]);
    }
    printf("\n X1 = %d:", arr[0]);
    wyn[0] = arr[0];
    for(i=1; i<n; i++) {
		wyn[i] = arr[i-1]^arr[i];
		printf("\n X%d XOR X%d = %d", i, i+1, wyn[i]);
	}

    printf("\n\nOdwrotnosc: ");
    wyn2[0]=wyn[0];
    printf("X1 = %d", wyn2[0]);
    for(i=1; i<n; i++) {
		wyn2[i] = wyn[i]^wyn2[i-1];
		printf(" X%d = %d", i+1, wyn2[i]);
	}
    free (arr);
    
    
    return 0;
}

