#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b); // 변수 a, b 선언, 입력
	printf("%d %.2lf \n", a / b, (double)a / b); // 문제대로 출력

	return 0;
}