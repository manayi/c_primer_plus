#include <stdio.h>
int main (void)
{
	int count = 0;
	int input;

	printf("Please enter your thought: \n");
	while ((input = getchar()) != EOF)
	{
		count++;
	}

	printf("The count of input is %d\n", count);

	return 0;
}