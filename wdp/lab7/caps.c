#include <stdio.h>

int up(char znak) {
  if (znak >= 'a' && znak <= 'z') znak = znak - 'a' + 'A';
  return znak;
}

int main() {
  printf("wpisz literę:\n");
  char znak;
  znak = getc(stdin);
  znak = up(znak);
  printf("%c\n", znak);
}

