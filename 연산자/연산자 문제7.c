#include <stdio.h>

int main() {
	int a = 0, b = 1, c = 2;
	int result1 = (a && b);
	int result2 = (a || b);
	int result3 = (b && c);
	int result4 = !a;

	printf("%d %d %d %d\n", result1, result2, result3, result4);

	return 0;
}