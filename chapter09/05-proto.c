#include <stdio.h>
int imax (int m, int n); //ANSI C标准的函数声明
int main (void)
{
	//由于旧的函数声明无法表述清楚函数原型，导致错误的调用
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

	return 0;
}

int imax (int m, int n)
{
	return m > n ? m : n;
}