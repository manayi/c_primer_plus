#include <stdio.h>
int main (void)
{

	int n = 0;
	size_t intsize; //定义sizeof运算符的返回值变量

	intsize = sizeof (int); //sizeof作用与类型的时候，需要加括号
	printf("n = %d, n has %u bytes; all ints have %u bytes.\n", n, sizeof n, intsize);

	return 0;

}