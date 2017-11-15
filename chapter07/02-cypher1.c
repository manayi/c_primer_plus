#include <stdio.h>
#define SPACE ' '
int main (void)
{
	char ch;

	printf("Please enter a string:");

	// ch = getchar();
	while ((ch = getchar()) != '\n')
	{
		if (ch == SPACE) {
			putchar(ch);
		} else {
			putchar(ch + 1);
		}
	}
	putchar(ch); //打印换行符

	return 0;
}