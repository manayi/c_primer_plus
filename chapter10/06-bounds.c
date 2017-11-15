/* 数组初始化-初始化错误的下标，导致stack中其他变量的值改变 */
#include <stdio.h>
#define SIZE 4
int main(void) {
	int value1 = 44;
	int arr[SIZE];
	int value2 = 48;
	int index;

	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (index = -1; index <= SIZE; index++) {
 		arr[index] = 2 * index + 1;
	}

	for (index = -1; index < 7; index++) {
		printf("%2d %d\n", index, arr[index]);
	}
	printf("value1 = %d, value2 = %d\n", value1, value2);

	return 0;
}