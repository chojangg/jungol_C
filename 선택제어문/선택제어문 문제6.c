#include <stdio.h>

int main() {
	int a, b, c, max;
	printf("세 수를 입력하세요. ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		if (a > c) {
			max = a;
		}
		else {
			max = c;
		}
	}
	else {
		if (b > c) {
			max = b;
		}
		else {
			max = c;
		}
	}
	printf("입력받은 수 중 가장 큰 수는 %d 입니다. \n", max);

	return 0;
}