#include <stdio.h>

int main() {
	int a, b, c, d, e, i, j;
	
	printf("podaj kolejne wyniki wyborcze pieciu komitetow\n");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	int a2 = a, b2 = b, c2 = c, d2 = d, e2 = e;
	
	printf("\n\ntabelka wg d'hondt'a\n");
	for (i = 1; i <= 10; i++) {
		a = a;
		a = a/i;
		if (a < 10) {
			printf("|   %d ", a);
		}
		else if (a >= 10 && a < 100) {
			printf("|  %d ", a);
		}
		else if (a >= 100 && a < 1000) {
			printf("| %d ", a);
		}
		else {
			printf("|%d ", a);
		}
		b = b/i;
		if (b < 10) {
			printf("|   %d ", b);
		}
		else if (b >= 10 && b < 100) {
			printf("|  %d ", b);
		}
		else if (b >= 100 && b < 1000) {
			printf("| %d ", b);
		}
		else {
			printf("|%d ", b);
		}
		c = c/i;
		if (c < 10) {
			printf("|   %d ", c);
		}
		else if (c >= 10 && c < 100) {
			printf("|  %d ", c);
		}
		else if (c >= 100 && c < 1000) {
			printf("| %d ", c);
		}
		else {
			printf("|%d ", c);
		}
		d = d/i;
		if (d < 10) {
			printf("|   %d ", d);
		}
		else if (d >= 10 && d < 100) {
			printf("|  %d ", d);
		}
		else if (d >= 100 && d < 1000) {
			printf("| %d ", d);
		}
		else {
			printf("|%d ", d);
		}
		e = e/i;
		if (e < 10) {
			printf("|   %d |\n", e);
		}
		else if (e >= 10 && e < 100) {
			printf("|  %d |\n", e);
		}
		else if (e >= 100 && e< 1000) {
			printf("| %d |\n", e);
		}
		else {
			printf("|%d |\n", e);
		}
	}
	
	printf("\n\ntabelka wg sainte-lague\n");
	for (i = 1; i <= 19; i += 2) {
		a2 = a2/i;
		if (a2 < 10) {
			printf("|   %d ", a2);
		}
		else if (a2 >= 10 && a2 < 100) {
			printf("|  %d ", a2);
		}
		else if (a2 >= 100 && a2 < 1000) {
			printf("| %d ", a2);
		}
		else {
			printf("|%d ", a2);
		}
		b2 = b2/i;
		if (b2 < 10) {
			printf("|   %d ", b2);
		}
		else if (b2 >= 10 && b2 < 100) {
			printf("|  %d ", b2);
		}
		else if (b2 >= 100 && b2 < 1000) {
			printf("| %d ", b2);
		}
		else {
			printf("|%d ", b2);
		}
		c2 = c2/i;
		if (c2 < 10) {
			printf("|   %d ", c2);
		}
		else if (c2 >= 10 && c2 < 100) {
			printf("|  %d ", c2);
		}
		else if (c2 >= 100 && c2 < 1000) {
			printf("| %d ", c2);
		}
		else {
			printf("|%d ", c2);
		}
		d2 = d2/i;
		if (d2 < 10) {
			printf("|   %d ", d2);
		}
		else if (d2 >= 10 && d2 < 100) {
			printf("|  %d ", d2);
		}
		else if (d2 >= 100 && d2 < 1000) {
			printf("| %d ", d2);
		}
		else {
			printf("|%d ", d2);
		}
		e2 = e2/i;
		if (e2 < 10) {
			printf("|   %d |\n", e2);
		}
		else if (e2 >= 10 && e2 < 100) {
			printf("|  %d |\n", e2);
		}
		else if (e2 >= 100 && e2 < 1000) {
			printf("| %d |\n", e2);
		}
		else {
			printf("|%d |\n", e2);
		}
	}
	return 0;
}
