#include <stdio.h>

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	int sum = (int)a + (int)b + (int)c;
	printf("sum %d \n", sum);
	printf("avg %.0f \n", (a + b + c) / 3);

	return 0;
}