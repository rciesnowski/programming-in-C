#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct dane {
float x, y, r, ro;
} kula[20];

struct dane nowakula(int m) {
kula[m].x = rand() %101 +16;
kula[m].y = rand() %101 +16;
kula[m].r = rand() %11  +5;
kula[m].ro =rand() %5 +1;
return kula[m];
}

struct dane polacz(struct dane kula1, struct dane kula2) {
float pole1, pole2;
kula1.ro =((kula1.ro*kula1.r)+(kula2.ro*kula1.r))/(kula1.r+kula2.r);
pole1=6,28*kula1.r;
pole2=6,28*kula2.r;
kula1.r =(pole1+pole2)/6.28;
return kula1;
}

struct dane zmniejsz(struct dane kula) {
kula.r =(kula.r)/2;
return kula;
}

int main() {
 srand(time(NULL));
 int i = 0, z = 0, flaga1 = 1, flaga2 = 1, a1, a, k, m = 10, s;

 while(i<10) {
   kula[i].x = rand() %101 + 16;
   kula[i].y = rand() %101 +16;
   kula[i].r = rand() %11 + 5;
   kula[i].ro =rand() %5 +1;
   i++;
 }
 i=0;
 while(flaga1!=0) {
    printf("\nkula\t| długość x: \t| długość y: \t| promień: \t| gęstość: \t|\n");
    for (i = 0; i<10; i++ ) printf("%d \t| %.3f \t| %.3f \t| %.3f \t| %.3f \t|\n",i+1, kula[i].x, kula[i].y, kula[i].r, kula[i].ro);
    for (i; i<m; i++) printf("%d \t| %.3f \t| %.3f \t| %.3f \t| %.3f \t|\n",i+1, kula[i].x, kula[i].y, kula[i].r, kula[i].ro);
    while(flaga2!=0){
      printf("\n1 - dodaj kule 2 - polacz kule 3 - zmniejsz kule | ");
      scanf("%d", &a);
      flaga2 = 0;
      switch (a){
        case 1:
         if (m>=20) printf("ZA MALO PAMIECI");
         else {
           kula[m]=nowakula(m);
           m++;
           }
        break;
           case 2:
           printf("numery kul: ");

            scanf("%d", &z);
            scanf("%d", &s);

                kula[z-1]=polacz(kula[z-1],kula[s-1]);
                    kula[s-1].x = 0;
                    kula[s-1].y = 0;
                    kula[s-1].r = 0;
                    kula[s-1].ro = 0;

           break;

           case 3:
           printf("numer kuli: ");
           scanf("%d", &z);
           kula[z-1]=zmniejsz(kula[z-1]);
           break;
           }
           }
  i=0;
  flaga2=1;
  }
  return 0;
}
