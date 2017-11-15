#include <stdio.h>
int main (void)
{
	int a = 1, b = 1;
	int aplus, plusb;

	aplus = a++;
	plusb = ++b;
	printf("aplus is %d and plusb is %d\n", aplus, plusb);

	return 0;
}