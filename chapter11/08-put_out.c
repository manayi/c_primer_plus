/* 使用puts输出字符串 */
#include <stdio.h>
#define DEF "I am a #defined string. "
int main(void) {
	char str1[80] = "An array was initialized to me.";
	const char * str2 = "A pointer was initialized to me.";

	//输出字符串常量
	puts("I`am an argument to puts().");
	//输出常量
	puts(DEF);
	//输出数组形式定义的字符串
	puts(str1);
	//输出指针形式定义的字符串
	puts(str2);
	//从指定位置开始输出字符串
	puts(&str1[5]);
	//从指定位置开始输出字符串
	puts(str2 + 4);

	return 0;
}