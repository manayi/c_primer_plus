/**
 * 菜单模拟程序
 */
#include <stdio.h>
char get_choice (void);
char get_first (void);
void count (void);
int get_int (void);
int main (void)
{
	int choice;
	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
			case 'a':
				printf("Bue now, sell high.\n");
				break;
			case 'b':
				putchar('\a');
				break;
			case 'c':
				count();
				break;
			default:
				printf("Program error!\n");
				break;
		}
	}
	printf("Bye!\n");

	return 0;
}

/** 函数：过滤并获取用户输入的选项 */
char get_choice (void) 
{
	printf("Please enter the letter of your choice: \n");
	printf("a. advice 				b. bell\n");
	printf("c. count 				q. quit\n");

	int input = get_first();
	while ((input < 'a' || input > 'c') && input != 'q')
	{
		printf("Please responsd with a, b, c or q.\n");
		input = get_first();
	}

	return input;
}

/** 函数：获取输入的第一个字符 */
char get_first (void)
{
	int ch = getchar();

	//读取并舍弃该行其他输入字符
	while (getchar() != '\n')
	{
		continue;
	}

	return ch;
}

/** 函数：读取一个数字并进行计数 */
void count (void)
{
	printf("Count how far? Please enter an integer: ");
	int number = get_int();
	//若get_int获取到值，需要将本次输入的其他字符跳过
	while (getchar() != '\n')
	{
		continue;
	}

	int index;
	for (index = 1; index <= number; index++)
	{
		printf("%d\n", index);
	}
}

/** 函数：读取一个整数值 */
int get_int (void)
{
	int input;
	while (scanf("%d", &input) != 1)
	{
		while ((input = getchar()) != '\n')
		{
			putchar(input);
		}
		printf(" is not an integer.\n");
		printf("Please enter an integer value, such as 25, -178, or 3: ");
	}

	return input;
}