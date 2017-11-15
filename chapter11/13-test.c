/* 缩短字符串长度的函数 */
#include <stdio.h>
#include <string.h>
void fit(char *, unsigned int);
int main(void) {
	char mesg[] = "Hold on your hats, hackers. ";

	puts(mesg);
	fit(mesg, 7);
	puts(mesg);
	puts("Let`s look at some more of the string. ");
	puts(mesg + 8);

	return 0;
}

void fit(char * string, unsigned int size) {
	//若字符串的长度大于给定的长度，则进行截取
	if (strlen(string) > size) {
		*(string + size) = '\0';
	}
}
