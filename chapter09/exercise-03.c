#include <stdio.h>
void choutput (char ch, int rows, int columns);
int main (void)
{
	char ch = 'A';
	int rows = 5, columns = 10;
	choutput(ch, rows, columns);

	return 0;
}

/**
 * 打印指定了行数和列数的字符
 * @param ch      打印字符
 * @param rows    行数
 * @param columns 列数
 */
void choutput (char ch, int rows, int columns)
{
	int row, column;
	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}