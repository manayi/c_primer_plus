#include <stdio.h>
void to_binary_n (int, int);
int main (void)
{
	int num, n;
	printf("Please enter two integers (q to quit): \n");
	while (scanf("%d %d", &num, &n) == 2)
	{
		to_binary_n(num, n);
		printf("Please enter two integers (q to quit): \n");
	}
	printf("Bye!\n");

	return 0;
}

/**
 * 使用递归求一个整数的指定进制形式
 * @param num 待求整数
 * @param n   指定进制
 */
void to_binary_n (int num, int n)
{
	if ((num / n) >= 1) {
		to_binary_n(num / n, n);
	}
	printf("%d", num % n);
}