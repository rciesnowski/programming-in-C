#include <stdio.h>
int sierp(int x, int y) {
  if (y == 0 || y == x) return 1;
  else return sierp(x - 1, y - 1) + sierp(x - 1, y);
}

int main() {
  int x, y;
  	for(x = 0; x <= 15; x++) {
      for (y = 0; y < 15 - x; y++) printf(" ");
      for (y = 0; y < x + 1; y++) printf("%d ", sierp(x, y) % 2);
    printf("\n");
  }
	return 0;
}
