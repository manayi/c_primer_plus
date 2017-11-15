#include <stdio.h>
int main (void)
{
	int count, sum; //声明语句

	count = 0, sum = 0; //赋值语句

	while (count++ < 20) //while结构化语句
	{
		sum = sum + count;
	}

	printf("sum = %d\n", sum); //函数语句

	return 0;
}