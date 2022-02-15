#include <stdio.h>

int main() {
	int sub1, sub2, sub3, sub4;
	scanf("%d %d %d %d", &sub1, &sub2, &sub3, &sub4);

	int sum = sub1 + sub2 + sub3 + sub4;
	printf("%d %d\n", sum, sum / 4);

	return 0;
}