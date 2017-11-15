/* 数组初始化-指定初始化 */
#include <stdio.h>
#define MONTHS 12
int main(void) {
	int days[MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};
	int index;

	for (index = 0; index < sizeof days / sizeof days[0]; index++) {
		printf("Month %d has %d days!\n", index + 1, days[index]);
	}

	return 0;
}