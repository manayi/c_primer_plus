/**
 * 使用循环和递归分别求阶乘
 */
#include <stdio.h>
long fact (int n);
long rfact (int n);
int main (void)
{
	int num;
	printf("This program calculate factorials.\n");
	printf("Enter a value in the range 0-12 (q to quit): \n");

	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
		{
			printf("No negative numbers, please.\n");
		}
		else if (num > 12)
		{
			printf("Keep input under 13.\n");
		}
		else 
		{
			printf("loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));
		}
		printf("Enter a value in the range 0-12 (q to quit): \n");
	}
	printf("Bye.\n");

	return 0;
}

/**
 * 使用循环求阶乘，num=0时，结果为1
 * @param  num 求阶乘的值
 * @return     结果
 */
long fact(int num)
{
	long result;
	for (result = 1; num > 0; num--)
	{
		result *= num;
	}
	return result;
}

/**
 * 使用递归求阶乘，num=0时，结果为1
 * @param  num 求阶乘的值
 * @return     结果
 */
long rfact(int num)
{
	long result;
	if (num > 0)
	{
		result = num * rfact(num - 1);
	}
	else 
	{
		result = 1;
	}
	return result;
}

