#include <stdio.h>

int main() {
	int a; // 정수형 변수 한 개를 선언한다.
	scanf("%d", &a); //정수를 입력한다.

	printf("%d / 4 = %d \n", a, a / 4);
	// 입력받은 정수를 정수 4로 나눈 몫을 출력한다.

	printf("%d / 4.0 = %.2f \n", a, a / 4.0);
	// 입력받은 정수를 실수 4.0으로 나눈 결과값을 출력한다.

	return 0;
}