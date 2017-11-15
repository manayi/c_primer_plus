#include <stdio.h>
int main(void) {
	char * mesg = "Don`t be a fool! ";
	char * copy;

	copy = mesg;

	printf("%s\n", copy);
	//通过%s打印字符串内容，通过&mesg打印指针变量的地址，通过%p打印指针存储的地址
	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

	return 0;
}