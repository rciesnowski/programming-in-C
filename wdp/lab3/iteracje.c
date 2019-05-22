#include <stdio.h>
#include <math.h>

int main() {

  int i;
  double a, x;

  i = 0;
  x = 0.4;

  printf("wpisz liczbe a: a < 1\n");
  scanf("%lf", &a);

  if (a < 1) {
    // while (((a - x) * (a - x)) > 0.00000001) {
    while (fabs(a - x) > 0.0001) {
    x = 4 * x * (1 - x);
    // printf("%lf\n", x);
    i++;
    }
    printf("potrzeba %d iteracji\n", i);
  }
  else {
    printf("ERROR\n");
  }

return 0;

}

