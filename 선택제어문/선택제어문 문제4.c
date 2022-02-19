#include <stdio.h>

int main() {
	int score;
	printf("점수를 입력하세요. ");
	scanf("%d", &score);

	if (score >= 90) {
		printf("A \n");
	}
	else if (score >= 80) {
		printf("B \n");
	}
	else if (score >= 70) {
		printf("C \n");
	}
	else if (score >= 60) {
		printf("D \n");
	}
	else {
		printf("E \n");
	}

	return 0;
}