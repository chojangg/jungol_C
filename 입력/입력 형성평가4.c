#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int sum = a + b + c;

	printf("sum = %d\n", sum);
	printf("avg = %d\n", sum / 3);

	return 0;
}