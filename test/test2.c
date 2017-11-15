#include <stdio.h>
int main(void) {
	int a = 1;
	int * ptr = &a;
	int ** pptr = &ptr;

	int * c[10];

	printf("%d\n", sizeof ptr);
	printf("%d\n", sizeof pptr);
	printf("%d\n", sizeof c);

	return 0;
}