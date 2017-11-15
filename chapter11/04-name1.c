/* 通过gets()函数读取一个字符串 */
#include <stdio.h>
#define MAX 81
int main(void) {
	char name[MAX];
	printf("Hi! What`s your name? \n");
	gets(name); //输入一个地址作为参数
	printf("Nice name, %s.\n", name);

	return 0;
}