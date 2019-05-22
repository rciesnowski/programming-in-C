#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#ifdef __unix__
#include <unistd.h>
#elif defined _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * x)
#endif

struct dane {
  char nazwa[13];
  int moc;
  int flaga;
  time_t czas1;
} urzadzenie[5];

struct dane wlacznik(struct dane urzadzenie) {
  if (urzadzenie.flaga==0) {
    urzadzenie.flaga=1;
    urzadzenie.czas1 = time (NULL);
  }
  else if(urzadzenie.flaga==1) urzadzenie.flaga=0;
return urzadzenie;
}

int main() {
  strcpy(urzadzenie[0].nazwa, "dryżelnica");
  urzadzenie[0].flaga=0;
  urzadzenie[0].moc=100;
  strcpy(urzadzenie[1].nazwa, "bulbulator");
  urzadzenie[1].flaga=0;
  urzadzenie[1].moc=15;
  strcpy(urzadzenie[2].nazwa, "wihajster");
  urzadzenie[2].flaga=0;
  urzadzenie[2].moc=89;
  strcpy(urzadzenie[3].nazwa, "megantraks");
  urzadzenie[3].flaga=0;
  urzadzenie[3].moc=40;
  strcpy(urzadzenie[4].nazwa, "wernówka");
  urzadzenie[4].flaga=0;
  urzadzenie[4].moc=700;
  int a, k=0, i=0, flaga2=1;
  float zuzycie=0;

  while(flaga2!=0) {
    printf("\n1 | dryżelnica\n2 | bulbulator\n3 | wihajster\n4 | megantraks\n5 | wernówka\n");
    printf("\naby włączyć/wyłączyć urządzenie wpisz jego numer: ");
    scanf("%d", &a);
    if(a==1) urzadzenie[0]=wlacznik(urzadzenie[0]);
    else if(a==2) urzadzenie[1]=wlacznik(urzadzenie[1]);
    else if(a==3) urzadzenie[2]=wlacznik(urzadzenie[2]);
    else if(a==4) urzadzenie[3]=wlacznik(urzadzenie[3]);
    else if(a==5) urzadzenie[4]=wlacznik(urzadzenie[4]);
    else flaga2=0;
    k = 0;
    printf("\nwłączone:\t");
    for (i = 0; i < 5; i++) if (urzadzenie[i].flaga==1) {
      printf("%s  ", urzadzenie[i].nazwa);
      k++;
    }
    if (k == 0) printf("brak");

    printf("\nzużycie:\t");
    for (k = 0; k < 5; k++) if (urzadzenie[k].flaga==1) zuzycie=zuzycie+(urzadzenie[k].moc*(float)(time(NULL)-urzadzenie[k].czas1));
    printf("%.2f\n", zuzycie);
    }
    return 0;
}
