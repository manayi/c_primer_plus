#include <stdio.h>
void interchange (int u, int v);
int main (void)
{
	int x = 5, y = 10;
	printf("Before interchange x = %d and y = %d\n", x, y);
	interchange(5, 10);
	printf("after interchange x = %d and y = %d\n", x, y);

	return 0;
}

/**
 * 交换两个整数值的函数
 * @param u 整数1
 * @param v 整数2
 */
void interchange (int u, int v)
{
	printf("inner Before interchange u = %d and v = %d\n", u, v);
	int temp;
	temp = u;
	u = v;
	v = temp;
	printf("inner after interchange u = %d and v = %d\n", u, v);
}
