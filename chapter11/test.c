#include <stdio.h>
int main(void) {
	char a1[] = "hello";
	char * a2 = "hello";
	//结果中a1首元素的地址不用于a2的地址，
	//因为字符串常量为静态存储类，
	//通过数组方式定义实际是拷贝了静态存储区的字符串，因此a1被视为拷贝后的首元素地址
	//而通过指针方式定义是指向了静态存储区的字符串
	printf("a1 addr is %p\n", &a1[0]);
	printf("a2 addr is %p\n", a2);

	return 0;
}