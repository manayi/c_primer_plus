/* 使用stdlib.h中提供的atoi函数，将一个字符串转换为整数 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]) {
	int index;
	int count;
	//判断条件：1、如果参数个数小于2，报错；2、如果第一个参数转换为整数后小于1
	if (argc < 2 || (count = atoi(argv[1])) < 1) {
		printf("Usage: %s positive-number\n", argv[0]);
	} else {
		for (index = 0; index < count; index++) {
			puts("Hello, good looking!");
		}
	}

	return 0;
}