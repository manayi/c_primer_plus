#include <stdio.h>
int main (void)
{
	int super = 0, ultra = 0;

	while (super < 5)
	{
		super++;
		++ultra;
		printf("super is %d and ultra is %d\n", super, ultra);
	}

	return 0;
}