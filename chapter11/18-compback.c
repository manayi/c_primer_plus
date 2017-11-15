#include <stdio.h>
#include <string.h>
int main(void) {
	//strcmp返回值为0
	printf("strcmp(\"A\", \"A\") is ");
	printf("%d\n", strcmp("A", "A"));

	//A的ASCII比B小，返回-1（具体返回值依赖不同的编译器）
	printf("strcmp(\"A\", \"B\") is ");
	printf("%d\n", strcmp("A", "B"));

	//B的ASCII比A大，返回1（具体返回值依赖不同的编译器）
	printf("strcmp(\"B\", \"A\") is ");
	printf("%d\n", strcmp("B", "A"));

	printf("strcmp(\"C\", \"A\") is ");
	printf("%d\n", strcmp("C", "A"));

	printf("strcmp(\"Z\", \"a\") is ");
	printf("%d\n", strcmp("Z", "a"));

	//strcmp是逐字符比较，直到第一个不同的字符
	printf("strcmp(\"apples\", \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));

	return 0;
}