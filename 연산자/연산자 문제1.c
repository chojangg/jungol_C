#include <stdio.h>

int main() {
	int a, b;
	int plus, minus, multi, div, rest;

	printf("두 개의 수를 입력하시오. ");
	scanf("%d %d", &a, &b);

	plus = a + b;
	minus = a - b;
	multi = a * b;
	div = a / b;
	rest = a % b;

	printf("%d + %d = %d \n", a, b, plus);
	printf("%d - %d = %d \n", a, b, minus);
	printf("%d * %d = %d \n", a, b, multi);
	printf("%d / %d = %d \n", a, b, div);
	printf("%d %% %d = %d \n", a, b, rest);

	return 0;
}