#include <stdio.h>
int main (void)
{
	int input;

	int count = 0;
	while ((input = getchar()) != EOF)
	{
		if (input == '\n' || input == '\t') 
		{
			printf("%c", input);
			count = 0;
			continue;
		} 
		else if (input < ' ')
		{
			printf("^%c", input + 64);
		}
		else
		{
			count++;
			printf("%c", input);
		}

		if (count % 10 == 0)
		{
			printf("\n");
		}
	}

	return 0;
}