#include <stdio.h>
#define MAX 81
int main(void) {
	char name[MAX];
	char * ptr;

	printf("array`s address is %p\n", name);

	printf("Hi! What`s your name? \n");
	gets(name); //输入一个地址作为参数
	ptr = name;
	printf("%s? Ah! %s! %p\n", name, ptr, ptr);

	return 0;
}