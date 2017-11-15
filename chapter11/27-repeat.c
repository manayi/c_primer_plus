/* main函数接收命令行参数 */
#include <stdio.h>
int main(int argc, char * argv[]) {
	int index;

	//argc：命令行参数的数目，包含了命令本身，输入时以空格符作为分割
	//argv：命令行参数字符串
	printf("The command line has %d arguments: \n", argc - 1);
	for (index = 1; index < argc; index++) {
		printf("%d: %s\n", index, argv[index]);
	}

	return 0;
}