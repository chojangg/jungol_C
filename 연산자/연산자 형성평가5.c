#include <stdio.h>

int main() {
	int mh, mw;
	int gh, gw;
	scanf("%d %d", &mh, &mw);
	scanf("%d %d", &gh, &gw);

	printf("%d\n", mh > gh && mw > gw);

	return 0;
}