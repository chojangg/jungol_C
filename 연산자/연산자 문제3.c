#include <stdio.h>

int main() {
	int a = 10, b = 10;

	printf("최초값 a = %d, b = %d \n\n", a, b);
	
	printf("a++ = %d, ++b = %d \n", a++, ++b);
	printf("실행후 a = %d, b = %d \n\n", a, b);

	printf("a-- = %d, --b = %d \n", a--, --b);
	printf("실행후 a = %d, b = %d \n", a, b);

	return 0;
}