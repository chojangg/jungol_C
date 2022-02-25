#include <stdio.h>

int main() {
	int weight, height;
	scanf("%d %d", &height, &weight);

	int bmi = weight + 100 - height;
	printf("%d\n", bmi);
	if (bmi > 0)
		printf("Obesity");

	return 0;
}