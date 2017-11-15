#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define MAX 40
int main(void) {
	char try[MAX];

	printf("Who is buried in Grant`s tomb?\n");

	gets(try); //fgets(try, 40, stdin);

	while (strcmp(ANSWER, try)) { //该种方式只比较了指针的内容，即地址
		printf("No, that`s wrong. Try again.\n");
		gets(try);
	}

	puts("That`s right!");

	return 0;
}