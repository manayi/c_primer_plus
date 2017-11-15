#include <stdio.h>
void chline (char ch, int i, int j);
int main (void)
{
	char ch = '$';
	int i = 5, j = 10;
	chline(ch, i, j);

	return 0;
}

/**
 * 指定字符在i列到j列进行输出
 * @param ch 指定字符
 * @param i  起始输出列
 * @param j  结束输出列
 */
void chline (char ch, int i, int j)
{
	int index;
	for (index = 1; index <= j; index++)
	{
		if (index > i)
		{
			putchar(ch);
		}
		else 
		{
			putchar(' ');
		}
	}
	putchar('\n');
}