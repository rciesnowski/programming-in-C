#include <stdio.h>

struct student {
    char imie[10], nazwisko[10];
    int czyzaliczone1, czyzaliczone2, czywypelnione;
    float kolo1, kolo2;
} s[20];

int main() {
  struct student s[10];
  int i;
  char x = 't';

  for (i=1; i <= 10; i++) {
    s[i].czyzaliczone1 = 0;
    s[i].czyzaliczone2 = 0;
    s[i].czywypelnione = 0;
  }

  while (x == 't' || x == 'T') {
    printf("\nNumer studenta: ");
    scanf("%d", &i);

    if ( s[i].czywypelnione == 0 ) {
      printf("Nie informacji o studencie. Podaj jego imie i nazwisko: ");
      scanf("%s %s", s[i].imie, s[i].nazwisko);
      printf("Podaj punkty z pierwszego i drugiego kolokwium: ");
      scanf("%f %f", &s[i].kolo1, &s[i].kolo2);
      if (s[i].kolo1 > 8) s[i].czyzaliczone1 = 1;
      if (s[i].kolo2 > 8) s[i].czyzaliczone2 = 1;
      s[i].czywypelnione = 1;
    }

    printf("Imię: ");
    puts(s[i].imie);
    printf("Nazwisko: ");
    puts(s[i].nazwisko);
    printf("| Kolokwium \t| Punkty \t| Zaliczone \t|\n");
    if (s[i].czyzaliczone1 == 0) printf("| 1 \t\t| %.1f/16 \t| nie \t\t|\n", s[i].kolo1);
    else printf("| 1 \t\t| %.1f / 16 \t| tak \t\t|\n", s[i].kolo1);
    if (s[i].czyzaliczone2 == 0) printf("| 2 \t\t| %.1f/16 \t| nie \t\t|\n", s[i].kolo2);
    else printf("| 2 \t\t| %.1f / 16 \t| tak \t\t|\n", s[i].kolo2);

    printf("Zmienić (T/n)? ");
    x = getchar();
    x = getchar();
    if ( x == 't' || x == 'T' ) {
      printf("Podaj imie i nazwisko: ");
      scanf("%s %s", s[i].imie, s[i].nazwisko);
      printf("Podaj punkty z pierwszego i drugiego kolokwium: ");
      scanf("%f %f", &s[i].kolo1, &s[i].kolo2);
      if (s[i].kolo1 > 8) s[i].czyzaliczone1 = 1;
      if (s[i].kolo2 > 8) s[i].czyzaliczone2 = 1;
      s[i].czywypelnione = 1;
    }
    printf("Kontynuować? ");
    x = getchar();
    x = getchar();
  }

  return 0;
}
