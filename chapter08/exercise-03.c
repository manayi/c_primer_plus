#include <stdio.h>
#include <ctype.h>
int main (void)
{
	int lows = 0;
	int uppers = 0;

	printf("Enter you input: \n");
	int input;
	while ((input = getchar()) != EOF)
	{
		if (isupper(input))		
		{
			uppers++;
		} 
		if (islower(input))
		{
			lows++;
		}
	}

	printf("The count of upper is %d, and the lower of input is %d\n", uppers, lows);

	return 0;
}