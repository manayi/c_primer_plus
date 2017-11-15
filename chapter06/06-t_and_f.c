#include <stdio.h>
int main (void)
{
	int true_val, false_val;

	//c中真假值的研究，1为真，0为假
	true_val = (10 > 2);
	false_val = (10 == 2);
	printf("true = %d; false = %d\n", true_val, false_val);

	return 0;
}