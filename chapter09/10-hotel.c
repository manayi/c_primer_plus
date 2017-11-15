#include <stdio.h>
#include "11-hotel.h" /* 头文件引入，使用双引号表示被包含的文件位于当前工作目录下 */

/**
 * 菜单函数，提供一个旅店菜单供用户选择
 * @return  选择的旅店代码
 */
int menu (void)
{
	int code, status;

	printf("\n%s%s\n", STARS, STARS);
	printf("Enter the number of the desired hotel: \n");
	printf("1) Fairfield Arms 2) Hotel Olympic\n");
	printf("3) Chertworthy Plaza 4) The Stockton\n");
	printf("5) quit\n");
	printf("\n%s%s\n", STARS, STARS);

	while ((status = scanf("%d", &code)) != 1 || code < 1 || code > 5)
	{
		if (status != 1)
		{
			scanf("%*s"); //若输入不为数字，则跳至下一空白字符
		}
		printf("Enter an integer from 1 to 5, please.\n");
	}

	return code;
}

/**
 * 获取住店夜数
 * @return  夜数
 */
int getnights (void)
{
	int nights;

	printf("How many nights do you need? \n");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an integer, such as 2.\n");
	}

	return nights;
}

/**
 * 计算并显示住宿所需花费
 * @param hotel_rate 酒店基准单价
 * @param nights     住宿夜数
 */
void show_price (double hotel_rate, int nights)
{
	double total = 0.0;
	double factor = 1.0;

	int index;
	for (index = 1; index <= nights; index++, factor *= DISCOUNT)
	{
		total += factor * hotel_rate;
	}

	printf("The total cost will be $%0.2f.\n", total);
}