#include <stdio.h>

int main() {
	int a, b, c, d, e;

	printf("5개의 수를 입력하시오.");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	a += 3;
	b -= 3;
	c *= 3;
	d /= 3;
	e %= 3;
	printf("%d %d %d %d %d \n", a, b, c, d, e);

	return 0;
}