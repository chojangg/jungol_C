#include <stdio.h>

int main() {
	int a, b;
	printf("�ֻ����� �� �� ���� ����� �Է��ϼ���. ");
	scanf("%d %d", &a, &b);

	if (a >= 4 && b >= 4) {
		printf("�̰���ϴ�. \n");
	}
	else if (a >= 4 || b >= 4) {
		printf("�����ϴ�. \n");
	}
	else {
		printf("�����ϴ�. \n");
	}

	return 0;
}