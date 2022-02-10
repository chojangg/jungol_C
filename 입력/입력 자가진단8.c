#include <stdio.h>

int main() {
	double a, b;
	char c;
	scanf("%lf %lf %c", &a, &b, &c);

	printf("%.2f\n%.2f\n%c", a, b, c);

	return 0;
}