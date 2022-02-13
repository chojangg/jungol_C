#include <stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int sum = a + b + c + d;
	printf("sum %d\n", sum);
	printf("avg %d\n", sum / 4);

	return 0;
}