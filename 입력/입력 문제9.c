#include <stdio.h>

int main() {
	double x, y;
	printf("두 개의 실수를 입력하시오.\n");
	scanf("%lf %lf", &x, &y);
	printf("x = %.2f\n", x);
	printf("y = %.2f\n", y);

	return 0;
}