#include <stdio.h>

int main() {
	int age;
	scanf("%d", &age);

	if (age >= 20) {
		printf("adult\n");
	}
	else {
		printf("%d years later\n", 20 - age);
	}

	return 0;
}