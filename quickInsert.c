#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MLD 1000000000.0
#define c 4

void insert(int tab[],int p, int n){
   int i, k, j;
   for (i = p+1; i < n; i++) {
       k = tab[i];
       j = i-1;
       while (j >= 0 && tab[j] > k) {
           tab[j+1] = tab[j];
           j = j-1;
       }
       tab[j+1] = k;
   }
}
          
int partition(int tab[], int p, int r) {
    int pivot = tab[r];
    int i = (p - 1);
    int temp;

    for (int j = p; j <= r- 1; j++) if (tab[j] <= pivot) {
		i++;
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
    }
    temp = tab[i+1];
    tab[i+1] = tab[r];
    tab[r] = temp;
    return (i + 1);
}
       
void quick(int tab[], int p, int r) {
    if(p < r) {
        int pi = partition(tab, p, r);
        quick(tab, p, pi - 1);
        quick(tab, pi + 1, r);
    }
}

void quickInsert(int tab[], int p, int r) {
    if(r - p + 1 < c) insert(tab, p,r);
    else if(p < r) {
        int pi = partition(tab, p, r);
        quick(tab, p, pi - 1);
        quick(tab, pi + 1, r);
    }
}


int main() {
    int kon = 25000;
    int pocz = 5000;

    struct timespec tp0, tp1;
    double Tn;

    int pocz_cp = pocz;

    printf("\n\n\t\t Dane losowe \n");
    printf("==============================================\n");

    printf("Wielkość\t| Quicksort\t| QuickInsert\t\n");
    printf("==============================================\n");

    for(int i = pocz; i <= kon; i += 5000) {
        printf("%d\t\t",pocz_cp);

        int losowe[pocz_cp];
        srand(time(NULL));
		for(int i = 0; i < pocz_cp; i++) losowe[i] = rand()%pocz_cp;

        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp0);
        
        quick(losowe, 0, pocz_cp-1);
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp1);
        Tn = (tp1.tv_sec + tp1.tv_nsec/MLD) - (tp0.tv_sec + tp0.tv_nsec/MLD);
        printf("| %3.10lf\t", Tn);
        
        quickInsert(losowe, 0, pocz_cp-1);
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp1);
        Tn = (tp1.tv_sec + tp1.tv_nsec/MLD) - (tp0.tv_sec + tp0.tv_nsec/MLD);
        printf("| %3.10lf\n", Tn);

        pocz_cp += 5000;
    }

    pocz_cp = pocz;

    printf("\n\n\t\tDane niekorzystne (malejące)\n");
    printf("==============================================\n");

    printf("Wielkość\t| Quicksort\t| QuickInsert\n");
    printf("==============================================\n");


    for(int i = pocz; i <= kon; i += 5000) {
		printf("%d\t\t",pocz_cp);

        int niekorz[pocz_cp];
		int j = 0;
		for(int i = pocz_cp; i > 0; i--) {
			niekorz[j] = i;
			j++;
		}

        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp0);

        quick(niekorz, 0, pocz_cp-1);
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp1);
        Tn = (tp1.tv_sec + tp1.tv_nsec/MLD) - (tp0.tv_sec + tp0.tv_nsec/MLD);
        printf("| %3.10lf\t", Tn);

        quickInsert(niekorz, 0, pocz_cp-1);
        clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &tp1);
        Tn = (tp1.tv_sec + tp1.tv_nsec/MLD) - (tp0.tv_sec + tp0.tv_nsec/MLD);
        printf("| %3.10lf\n", Tn);

        pocz_cp += 5000;
	}

    return 0;
}
