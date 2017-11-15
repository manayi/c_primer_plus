/* 使用fgets进行字符串输入 */
#include <stdio.h>
#define MAX 81
int main(void) {
	char name[MAX];
	char * ptr;

	printf("Hi! What`s your name? \n");
	//3个参数，第一个为容纳输入的字符数组地址；
	//第二个为最大读入字符数，读到（MAX - 1）或换行时结束输入
	//第三个参数为文件地址，由于fget为文件IO设计，当需要从键盘输入时，给予stdin标准输入流
	fgets(name, MAX, stdin);
	ptr = name;
	printf("%s? Ah! %s!\n", name, ptr);

	return 0;
}