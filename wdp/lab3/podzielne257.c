#include <stdio.h>

int main()
{

  printf("\nliczby naturalne do 400 podzielne przez dokładnie dwie spośród liczb 2, 5, 7\n\n");

	int n;
	
  while (n <= 400) {
    if (((n%(10) == 0) && (n%(14) != 0) && (n%(35) != 0)) || ((n%(10) != 0) && (n%(14) != 0) && (n%(35) == 0)) || ((n%(10) != 0) && (n%(14) == 0) && (n%(35) != 0))) {
      printf("%d  ", n);
      n++;
      }
    else {
      n++;
      }
	}
      

 // for (int n = 1; n <= 400; n++) {
 //   if ((n%(2) == 0 && n%(5) == 0) ^ (n%(2) == 0 && n%(7) == 0) ^ (n%(5) == 0 && n%(7) == 0)) {
 //     printf("%d  ", n);
 //     }
 //   }
    printf("\n\n");

  return 0;
}

