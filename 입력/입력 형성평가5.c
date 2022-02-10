#include <stdio.h>

int main() {
	double yard;
	printf("yard? ");
	scanf("%lf", &yard);

	printf("%.1fyard = %.1fcm\n", yard, yard * 91.44);
}