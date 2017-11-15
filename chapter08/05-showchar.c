//按行和列打印字符
#include <stdio.h>
void dispaly(char ch, int rows, int columns); //声明函数原型
int main (void)
{
	int ch, rows, columns;

	printf("Enter another character and two integers: \n");
	while ((ch = getchar()) != '\n')
	{
		//读取行和列2个数字
		if (scanf("%d %d", &rows, &columns) != 2) {
			break;
		}

		//进行打印
		dispaly(ch, rows, columns);

		//跳过该行其他字符
		while (getchar() != '\n')
		{
			continue;
		}

		printf("Enter another character and two integers: \n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye. \n");
	
	return 0;
}

//打印函数
void dispaly(char ch, int rows, int columns)
{
	int row, column;
	for (row = 0; row < rows; row++)
	{
		for (column = 0; column < columns; column++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}