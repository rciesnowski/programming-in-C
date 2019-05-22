#include<stdio.h> 

int main() {
short int a, b, a2, b2;

printf("podaj a i b\n");
scanf("%hi %hi", &a, &b);

a2=a;
b2=b;

a=a>>8;
a=a<<8;
b=b<<8;
b=b>>8;
printf("poczatek a i koniec b daje %hi\n", a | b);

a2 = a2<<8;
b2 = b2<<8;
b2 = b2>>8;
printf("koniec a i koniec b daje %hi\n", a2 | b2);

return 0;
}
