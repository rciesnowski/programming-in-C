#include <stdio.h>

int a(int n) {
	if (n == 0) return 2;
	else if (n == 1) return 6;
	else return (5 * a(n - 1)) - (6 * a(n - 2));
}

int main() {
	int n, a();
	printf("wpisz argument:\n");
	scanf("%d", &n);
	printf("wartość funkcji dla argumentu %d wynosi %d\n", n, a(n));
	return 0;
}

