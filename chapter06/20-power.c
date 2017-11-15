#include <stdio.h>
double power (double n, int p); //声明函数原型
int main (void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the positive integer power");
	printf(" to which \nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while ((scanf("%lf%d", &x, &exp)) == 2)
	{
		xpow = power(x, exp); //调用函数
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter the next pair of numbers or q to quit.\n");
	}
	printf("Hope yor enjoyed this power trip --bye!\n");
	return 0;
}



/*
 * 求n的正整数p次幂函数
 */
double power (double n, int p)
{
	double pow = 1;
	int index;

	for (index = 0; index < p; index++)
	{
		pow *= n;
	}

	return pow;
}