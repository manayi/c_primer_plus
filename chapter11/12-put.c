/* 使用10和11中2个自定义的输出函数 */
#include <stdio.h>
void put1(const char *);
int put2(const char *);
int main(void) {
	put1("If I`d as much money");
	put1(" as I could spend, \n");
	printf("I count %d characters.\n", put2("I never would cry old chairs to mend. "));

	return 0;
}

/**
 * 输出一个字符串，但不输出换行符
 * @param string [要输出的字符串]
 */
void put1(const char * string) {
	while (*string) { //不会输出字符串的结束符'\0'
		putchar(*string++);
	}
}

/**
 * 输出一个字符串，输出换行符，并且统计输出的字符数
 * @param  string [要输出的字符串]
 * @return        [输出的字符数]
 */
int put2(const char * string) {
	int count = 0;
	while (*string) { //不会输出字符串的结束符'\0'
		putchar(*string++);
		count++;
	}

	putchar('\n');

	return count;
}