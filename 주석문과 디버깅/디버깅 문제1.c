#include <stdio.h>

int main() {
	int a, b; /* 정수형 변수 두 개를 선언한다. */
	double d, e; /* 실수형 변수 두 개를 선언한다. */
	scanf("%lf %lf", &d, &e); /* 실수형 변수 두 개를 입력받는다. */

	a = d + e; /* 실수 두개를 더해서 정수 변수에 대입한다. */
	b = (int)d + (int)e; /* 두개의 실수를 각각 정수로 변환하여 정수 변수에 대입한다. */
	printf("%d %d \n", a, b); /*결과값을 출력하고 비교해 본다. */

	return 0;
}