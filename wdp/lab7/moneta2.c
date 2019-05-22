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
  int n, m, k;
  printf("prawdopodobieństo wyrzucenia co najwyżej m orłów w n rzutach monetą\npodaj m\n");
  scanf("%d", &m);
  printf("podaj n\n");
  scanf("%d", &n);
  printf("\n");
  if (m > n) printf("ERROR\n");
  else {
	float tabm[m], tabn[n], wszystkie = 1, suma = 0, prawd;
	printf("wspolczynniki pascala: ");
	for (k = 0; k <= n; k++) {
		tabn[k] = newt(n, k);
		printf("%f ", tabn[k]);
	}
    for (k = 0; k < n; k++) wszystkie *= 2;
    for (k = 0; k <= m; k++) tabm[k] = newt(n, k);
    for (k = 0; k <= m; k++) suma += tabm[k];
    prawd = suma / wszystkie;
    printf("\nprawdopodobieństwo %f\n", prawd);
  }
  return 0;
}

