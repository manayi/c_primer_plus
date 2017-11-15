/* 错误的字符串比较方式 */
#include <stdio.h>
#define ANSWER "Grant"
int main(void) {
	char try[40];

	printf("Who is buried in Grant`s tomb?\n");

	gets(try); //fgets(try, 40, stdin);

	while (ANSWER != try) { //该种方式只比较了指针的内容，即地址
		printf("No, that`s wrong. Try again.\n");
		gets(try);
	}

	puts("That`s right!");

	return 0;
}