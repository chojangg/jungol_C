#include <stdio.h>

int main() {
	int r = 5;
	double pi = 3.14;

	printf("���� = %d * 2 * %f = %f \n", r, pi, r * 2 * pi);
	printf("���� = %d * %d * %f = %f\n", r, r, pi, r * r * pi);

	return 0;
}