/* 使用stdlib.h的strtol函数将字符串转换为整数 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char number[30];
	char * end; //用于存放strtol未能解析为字符串的字符指针
	long value;

	puts("Enter a number (empty line to quit): ");
	while (gets(number) && number[0] != '\0') {
		//gets(number)是gets(number) != NULL的缩写
		value = strtol(number, &end, 10); //基于10进制读取
		printf("value: %ld, stopped at %s (%c)\n", value, end, *end);

		value = strtol(number, &end, 16); //基于16进制读取
		printf("value: %ld, stopped at %s (%c)\n", value, end, *end);

		puts("Next number: ");
	}
	puts("Bye!");

	return 0;
}
