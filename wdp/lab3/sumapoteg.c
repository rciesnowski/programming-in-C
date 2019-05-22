#include <stdio.h>

int main()
{
  int a, b, c, d, i, j, k;
  long sum, p1, p2, p3;
  printf("podaj cztery liczby naturalne a b c d (d dodatnie)\n");
  scanf("%d%d%d%d", &a, &b, &c, &d);

	p1 = 1;
	p2 = 1;
	p3 = 1;
	i = 1;
	j = 1;
	k = 1;
	
  if ((d > 0)) {
	  while (i <= d) {
		  p1 = p1 * a;
		  i++;
	  }
	  while (j <= d) {
		  p2 = p2 * b;
		  j++;
	  }
	  while (k <= d) {
		  p3 = p3 * c;
		  k++;
	  }
	  
    sum = p1 + p2 + p3;
    
//    printf("p1 rowne %ld\n\n", p1);
//    printf("p2 rowne %ld\n\n", p2);
//    printf("p3 rowne %ld\n\n", p3);

    printf("suma a^d + b^d + c^d jest równa %ld\n", sum);}
  else {
    printf("ERROR\n");
  }
    return 0;
}

