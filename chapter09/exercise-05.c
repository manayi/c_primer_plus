#include <stdio.h>
void larger_of (double *, double *);
int main (void)
{
	double x = 101.12, y = 102.1;
	printf("x = %f and y = %f\n", x, y);
	larger_of(&x, &y);
	printf("x = %f and y = %f\n", x, y);

	return 0;
}

/**
 * 判断输入参数的最大值，
 * 并将最大值赋予调用函数中的两个参数
 * @param x double值
 * @param y double值
 */
void larger_of (double * x, double * y) 
{
	if (*x > *y)
	{
		*y = *x;
	}
	else 
	{
		*x = *y;
	}
}