/* 自定义的一个比较简单的输出字符串函数 */
#include <stdio.h>
void put1(const char * string);
int main(void) {
	const char * string = "Hello, world!";
	put1(string);

	return 0;
}

void put1(const char * string) {
	while (*string) {
		putchar(*string++);
	}
}