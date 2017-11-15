/**
 * 验证值传递
 */
#include <stdio.h>
void mikado (int);
int main (void)
{
	int pooh = 2, bah = 5;

	printf("In main (), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In main (), bah = %d and &bah = %p\n", bah, &bah);

	mikado(bah);

	return 0;
}

/**
 * 打印局部变量以及方法参数的值和内存地址
 * 说明了每一个函数都使用自己的变量
 * @param bah [description]
 */
void mikado (int bah)
{
	int pooh = 10;
	printf("In mikado (), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In mikado (), bah = %d and &bah = %p\n", bah, &bah);
}