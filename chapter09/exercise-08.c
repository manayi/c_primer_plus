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


/**
 * 使用递归计算double的任何次幂
 * @param  n double值
 * @param  p 幂值
 * @return   结果值
 */
double power (double n, int p)
{
	if (n == 0)
	{
		return 0; //0的任何次幂为0
	}
	if (p == 0)
	{
		return 1; //除0的任何数的0次幂为1
	}

	double pow = 1;
	int index;
	if (p > 0) 
	{
		pow = n * power(n, p - 1);
	}
	else
	{
		pow *= (1 / n) * power(n, p + 1);
	}

	return pow;
}