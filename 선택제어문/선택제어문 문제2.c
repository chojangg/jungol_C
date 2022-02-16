#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);

	if (a < b) {
		c = a;
		a = b;
		b = c;
	}

	printf("입력받은 수 중 큰 수는 %d이고 \n", a);
	printf("작은 수는 %d입니다. \n", b);

	return 0;
}