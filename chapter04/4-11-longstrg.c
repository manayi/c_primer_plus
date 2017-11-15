#include <stdio.h>
int main (void)
{

	//第一种，使用多个printf语句进行打印
	printf("Here`s one way to print a\n");
	printf("long string.\n");
	//使用反斜杠和回车结束第一行，但是新起行必须从顶格开始，
	//如果有缩进，则缩进部分会成为打印结果的一部分
	printf("Here`s another way to print a \
long string.\n");
	//最新方法，“双引号+仅空白字符+双引号”，C会把2个双引号的字符串进行拼接。
	//类似于java换行时，会用“双引号+加号+双引号”
	printf("Here`s the newest way to print a "
		"long string.\n");

	return 0;

}