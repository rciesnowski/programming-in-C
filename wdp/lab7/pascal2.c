#include <stdio.h>

long long newt(int n, int k) {
  long long newt = 1;
  int i;
  k = k > n - k ? n - k : k;
  for(i = 1; i <= k; i++, n--) {
    if(n % i == 0) newt *= n / i;
    else if (newt % i == 0) newt = newt / i * n;
    else newt = (newt * n) / i;
  }
  return newt;
}

int main() {
  int n, k;
  printf("program wypisujący współczynniki pascala dla podanego dwumianu\npodaj n\n");
  scanf("%d", &n);
  long long tab[n];
  printf("wspolczynniki pascala: ");
  for (k = 0; k <= n; k++) {
    tab[k] = newt(n, k);
    printf("%lli ", tab[k]);
  }
  printf("\n");
  return 0;
}

