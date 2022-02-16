#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	printf("%d\n", a);
	if (a > 10) {
		printf("10보다 큰 수를 입력하셨습니다. \n");
	}

	return 0;
}