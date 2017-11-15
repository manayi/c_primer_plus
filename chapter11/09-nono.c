/* 有问题的程序-验证使用puts输出一个字符数组的情形 */
#include <stdio.h>
int main(void) {
	char side_a[] = "SIDE A";
	char dont[] = {'W', 'O', 'W', '!'};
	char side_b[] = "SIDE B";

	puts(dont);

	return 0;
}