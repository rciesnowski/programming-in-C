#include <stdio.h>

int pascal(int n, int k) {
  if(k == 0 || k == n) return 1;
  else return pascal(n - 1, k - 1) + pascal(n - 1, k);
}

int main() {
    int i, j, pascal();
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8 - i; j++) printf("  ");
        for(j = 0; j < i + 1; j++) {
          printf("%i  ", pascal(i, j));
          if (pascal(i, j) < 10) printf(" ");
        }
        printf("\n");
    }
    return 0;
}

