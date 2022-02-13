#include <stdio.h>

int main() {
	int a, b, c;
	int result1, result2, result3, result4;
	scanf("%d %d %d", &a, &b, &c);

	result1 = (a == b);
	result2 = (b == c);
	result3 = (a != b);
	result4 = (b != c);
	printf("%d %d %d %d \n", result1, result2, result3, result4);

	return 0;
}