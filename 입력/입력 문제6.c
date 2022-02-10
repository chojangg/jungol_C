#include <stdio.h>

int main() {
	int age;
	printf("당신의 나이는 몇 살입니까? ");
	scanf_s("%d", &age);

	printf("당신의 나이는 %d살 이군요. \n", age);

	return 0;
}