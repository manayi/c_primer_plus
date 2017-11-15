/* 使用strncat()函数的demo */
#include <stdio.h>
#include <string.h>
#define SIZE 80
#define BUGSIZSE 13	
int main(void) {
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";
	char bug[BUGSIZSE];
	int available;

	puts("What is your favorite flower?");
	gets(flower);
	if ((strlen(flower) + strlen(addon) + 1) <= SIZE) {
		strcat(flower, addon);
	}
	puts(flower);
	puts("What`s your favorite bug?");
	gets(bug);

	int index;
	for (index = 0; index < BUGSIZSE; index++) {
		printf("%d\n", bug[index]);
	}

	available = BUGSIZSE - strlen(bug) - 1;
	strncat(bug, addon, available);
	puts(bug);

	return 0;
}