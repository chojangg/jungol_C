#include <stdio.h>

int main() {
	printf("%8s%6s \n", "subject", "score");
	printf("==============\n");
	printf("%8s%6d \n", "korean", 90);
	printf("%8s%6d \n", "english", 100);
	printf("%8s%6d \n", "computer", 80);

	return 0;
}