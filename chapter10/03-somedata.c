/* 数组部分初始化-未被显式赋值的元素被初始化为0 */
#include <stdio.h>
#define SIZE 4
int main (void)
{
	int some_data[SIZE] = {1492, 1066};
	int index;

	printf("%2s%14s\n", "index", "some_data[index] ");
	for (index = 0; index < SIZE; index++)
	{
		printf("%2d%14d\n", index, some_data[index]);	
	}

	return 0;
}