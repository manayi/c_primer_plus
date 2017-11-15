/* 函数strcat的demo */
#include <stdio.h>
#include <string.h>
#define SIZE 80
int main(void) {
	char flower[SIZE];
	char addon[] = "s smell like old shoes. ";
	
	puts("What is your favorite flower?");
	gets(flower);
	strcat(flower, addon); //使用strcat拼接2个字符串，并返回第一个字符串的地址
	puts(flower);
	puts(addon);

	return 0;
}