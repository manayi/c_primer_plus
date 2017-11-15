/* 验证字符串常量可以作为指向该字符串存储位置的指针 */
#include <stdio.h>
int main(void) {
	printf("%s, %p, %c\n", "We", "are", *"space farers");

	return 0;
}