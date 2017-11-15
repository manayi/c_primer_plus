/* 数组与指针--指针的加法 */
#include <stdio.h>
#define SIZE 4
int main(void) {
	short date[SIZE];
	short * pti;
	double bills[SIZE];
	double * ptf;

	//数组变量同时也是一个指针，它指向数组第一个元素的位置
	pti = date;
	ptf = bills;

	short index;
	printf("%23s %10s\n", "short", "double");
	for (index = 0; index < SIZE; index++) {
		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
	}

	return 0;
}