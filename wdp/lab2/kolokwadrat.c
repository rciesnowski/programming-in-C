#include <stdio.h>
#include <stdlib.h>

int main()
{
float x, y, xb, yb, odlkw;

printf("Na siatce 640 x 480 znajduje sie prostokat o wspolrzednych (2,7), (2,400), (375,400) i (375,7) oraz kolo o srodku (403,76) i promieniu 58.\nPodaj wspolrzedne x i y punktu i sprawdz jego przynaleznosc.\n");
scanf("%f%f", &x, &y);

xb = abs(x - 403);
yb = abs(y - 76);
odlkw = xb * xb + yb * yb;

if (x => 2 && x <= 375 && y => 7 && y <= 400) {
	printf("punkt nalezy do prostokata\n");
	}
if (x < 2 || x > 375 || y < 7 || y > 400) {
	printf("punkt nie nalezy do prostokata\n");
	}
if (odlkw <= 58*58) {
	printf("punkt nalezy do kola\n");
	}
if (odlkw > 58*58) {
	printf("punkt nie nalezy do kola\n");
	}
	return 0;
}
