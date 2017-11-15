#include <stdio.h>
#include <ctype.h>
int main (void)
{
	int input;

	while (isblank(input = getchar()))
	{
		continue;
	}

	printf("%d\n", input);

	return 0;
}