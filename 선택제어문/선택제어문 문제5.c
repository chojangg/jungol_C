#include <stdio.h>

int main() {
	int a, b;
	printf("주사위를 두 번 던진 결과를 입력하세요. ");
	scanf("%d %d", &a, &b);

	if (a >= 4 && b >= 4) {
		printf("이겼습니다. \n");
	}
	else if (a >= 4 || b >= 4) {
		printf("비겼습니다. \n");
	}
	else {
		printf("졌습니다. \n");
	}

	return 0;
}