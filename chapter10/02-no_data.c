/* 数组未初始化-每个元素值被随机赋予无用的数值 */
#include <stdio.h>
#define SIZE 4
int main (void)
{
	int no_data[SIZE];
	int index;
	
	printf("%2s%14s\n", "index", "no_data[index] ");
	for (index = 0; index < SIZE; index++)
	{
		printf("%2d%14d\n", index, no_data[index]);	
	}

	return 0;
}