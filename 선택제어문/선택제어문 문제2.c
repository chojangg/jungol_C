#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d", &a, &b);

	if (a < b) {
		c = a;
		a = b;
		b = c;
	}

	printf("�Է¹��� �� �� ū ���� %d�̰� \n", a);
	printf("���� ���� %d�Դϴ�. \n", b);

	return 0;
}