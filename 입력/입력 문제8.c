#include <stdio.h>

int main() {
	int height;
	double weight;
	char name;

	printf("Ű�� �Է��ϼ���. ");
	scanf("%d", &height);
	printf("�����Ը� �Է��ϼ���. ");
	scanf("%lf", &weight);
	printf("�̸��� �Է��ϼ���. ");
	scanf(" %c", &name);

	printf("Ű = %d\n", height);
	printf("������ = %.1f\n", weight);
	printf("�̸� = %c\n", name);

	return 0;
}