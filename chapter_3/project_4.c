#include <stdio.h>

int main(void) {
	int ddd, pn, sn;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d)%d-%d", &ddd, &pn, &sn);
	printf("You entered %3d.%3d.%4d\n", ddd, pn, sn);

	return 0;
}
