#include <stdio.h>

int main(void) {

	int* p;

	printf("size of pointer p is %2d.\n", sizeof(p)); // sample
	printf("This is %d-bit program.\n", (sizeof(p) == 8 ? 64 : 32));

	return 0;
}