#include <stdio.h>
double average (double, double);
int main (void)
{
	double x = 5.1, y = 1.9;
	printf("%f\n", average(x, y));

	return 0;
}

/**
 * 取两个double数的谐均值
 * @param  x double数
 * @param  y double数
 * @return   结果
 */
double average (double x, double y)
{
	return 1 / ((1 / x + 1 / y) / 2);
}