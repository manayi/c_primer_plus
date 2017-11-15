#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char ch;

	printf("Please enter a string:");

	// ch = getchar();
	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch)) {
			putchar(ch + 1);
		} else {
			putchar(ch);
		}
	}
	putchar(ch); //打印换行符

	return 0;
}