
#include <stdio.h>

int main()
{
  float a, b, c;
  printf("podaj wspolczynniki a, b, c\n");
  scanf("%f%f%f", &a, &b, &c);

  double delta = b * b - 4 * a * c;

  if (delta == 0) {
    printf( "rownanie ma jeden rzeczywisty pierwiastek\n" );
  }
  else if (delta > 0) {
    printf( "rownanie ma dwa rzeczywiste pierwiastki\n" );
  }
  else if (delta < 0) {
    printf( "rownanie ma dwa urojone pierwiastki\n" );
  }
  else {
    printf( "ERROR");
  }
  return 0;
}

