#include <stdio.h>
void interchange (int u, int v);
int main (void)
{
	int x = 5, y = 10;
	printf("Before interchange x = %d and y = %d\n", x, y);
	printf("In main (), x address = %p and y address is %p\n", &x, &y);
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
	printf("In interchange (), u address = %p and v address is %p\n", &u, &v);
	int temp;
	temp = u;
	u = v;
	v = temp;
}
