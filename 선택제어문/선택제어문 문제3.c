#include <stdio.h>

int main() {
	int score;
	printf("������ �Է��ϼ���. ");
	scanf("%d", &score);

	if (score >= 80) {
		printf("�����մϴ�. �հ��Դϴ�. \n");
	}
	else {
		printf("�˼��մϴ�. ���հ��Դϴ�. \n");
	}

	return 0;
}