#include <stdio.h>
#define PAGES 336
#define WORDS 65618
int main (void)
{

	short num = PAGES;
	short mnum = -PAGES;

	//正常输出
	printf("num as short and unsigned short: %hd %hu\n", num, num);
	//负数作为无符号数输出导致溢出
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	//在c中，char为一个字节无符号整数，因此num作为char输出也溢出
	printf("num as int and char: %d %c\n", num, num);
	//同样发生了溢出
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);

	return 0;

}