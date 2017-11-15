/* 使用ctype.h建立字符串处理函数 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 80
void to_upper(char * string);
int punct_count(char * string);
int main(void) {
	char input[LIMIT];

	puts("Please enter a line: ");
	gets(input);
	//将输入的字符串全部转换为大写
	to_upper(input);
	puts(input);
	printf("That line has %d punctuation characters.\n", punct_count(input));

	return 0;
}

/**
 * 将一个字符串的所有字符转换为大写
 * @param string [字符串]
 */
void to_upper(char * string) {
	while (*string) {
		*string = toupper(*string);
		string++;
	}
}

/**
 * 统计字符串含有多少个标点符号
 * @param  string [字符串]
 * @return        [符号数]
 */
int punct_count(char * string) {
	int count = 0;
	while (*string) {
		if (ispunct(*string)) {
			count++;
		}
		string++;
	}
	return count;
}