/* 在函数中使用数组-使用指针表示数组的起始和终止地址 */
#include <stdio.h>
#define SIZE 10
long sum(int * start, int * end);
int main(void) {
	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	//marbles+SIZE已经超出了数组的存储范围
	//c保证在为数组分配存储空间的时候，指向数组之后的第一个位置的指针也是合法的
	//但不保证marbles[SIZE]内存储的数据
	long answer = sum(marbles, marbles + SIZE);
	printf("The total is %ld.\n", answer);

	return 0;
}

long sum(int * start, int * end) {
	long total = 0;
	while (start < end) {
		total += *start;
		start++;
	}
	return total;
}