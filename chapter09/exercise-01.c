#include <stdio.h>
double dmin (double, double);
int main (void)
{
	double a = 5.0, b = 3.1;
	printf("the litter is %f\n", dmin(a, b));
	return 0;
}

/**
 * 求两个double值中较小的数值
 * @param  a double值
 * @param  b double值
 * @return   较小值
 */
double dmin (double a, double b)
{
	return a > b ? b : a;
}
