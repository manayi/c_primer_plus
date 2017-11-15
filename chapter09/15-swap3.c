#include <stdio.h>
void interchange (int *, int *);
int main (void)
{
	int x = 5, y = 10;
	printf("Before interchange x = %d and y = %d\n", x, y);
	interchange(&x, &y);
	printf("after interchange x = %d and y = %d\n", x, y);

	return 0;
}

/**
 * 交换两个整数的值
 * @param u 指向int的指针类型
 * @param v 指向int的指针类型
 */
void interchange (int * u, int * v)
{
	int temp = *u;
	*u = *v;
	*v = temp;
}