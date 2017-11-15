#include <stdio.h>
void to_binary(int num);
int main (void)
{
	int num;
	printf("Please enter an integer (q to quit): \n");
	while (scanf("%d", &num) == 1)
	{
		to_binary(num);
		printf("\nPlease enter an integer (q to quit): \n");
	}
	printf("Bye!\n");

	return 0;
}

/**
 * 使用递归求一个整数的二进制形式
 * @param num 待求整数
 */
void to_binary(int num)
{
	if ((num / 2) >= 1) {
		to_binary(num / 2);
	}
	printf("%d", num % 2);
}