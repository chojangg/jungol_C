#include <stdio.h>

int main() {
	int height;
	double weight;
	char name;

	printf("키를 입력하세요. ");
	scanf("%d", &height);
	printf("몸무게를 입력하세요. ");
	scanf("%lf", &weight);
	printf("이름을 입력하세요. ");
	scanf(" %c", &name);

	printf("키 = %d\n", height);
	printf("몸무게 = %.1f\n", weight);
	printf("이름 = %c\n", name);

	return 0;
}