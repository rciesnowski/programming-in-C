#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int liczba, przypadek[10], i, j, k, tab[1000000];
  srand(time(NULL));

  for (i = 0; i <= 1000000; i++) {
    liczba = rand() % 2;
    tab[i] = liczba;
  }

// for (i=0; i<=999999; i++) {
//   if ((i+1)%10 == 0) printf("%d\n", tab[i]);
//   else printf("%d\t", tab[i]);
// }

  for (i = 0; i <= 1000000; i++) {
    if (i < 10) {
      for (k = 0, j = 0; k < i, j < i; k++, j++) {
        if (tab[i] == tab[j]) przypadek[k]++;
		}
	}
        
    if (i >= 10) {
      for (k = 0, j = i-10; k < 10, j < i; j++, k++) {
        if (tab[j] == tab[i]) przypadek[k]++;
      }
    }
  }

  printf("podobny do 10 liczby przedtem: %d\npodobny do 9 liczby przedtem: %d\npodobny do 8 liczby przedtem: %d\npodobny do 7 liczby przedtem: %d\npodobny do 6 liczby przedtem: %d\npodobny do 5 liczby przedtem: %d\npodobny do 4 liczby przedtem: %d\npodobny do 3 liczby przedtem: %d\npodobny do 2 liczby przedtem: %d\npodobny do 1 liczby przedtem: %d\n", przypadek[0], przypadek[1], przypadek[2], przypadek[3], przypadek[4], przypadek[5], przypadek[6], przypadek[7], przypadek[8], przypadek[9]);
  return 0;
}

