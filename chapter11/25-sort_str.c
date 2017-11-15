/* 使用选择排序排序一个字符串数组 */
#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT " "
void str_sort(char * [], int);
int main(void) {
	char input[LIM][SIZE]; //接收输入的数组
	char * ptstr[LIM]; //input的复制

	printf("Input up to %d lines, and I will sort them.\n", LIM);
	printf("TO stop, press the Enter key at a line`s start.\n");

	int lines = 0; //索引
	while ((lines < LIM) && gets(input[lines]) && (input[lines][0] != '\0')) {
		ptstr[lines] = input[lines]; //初始化字符指针数组元素
		lines++;
	}

	str_sort(ptstr, lines);
	int index;
	puts("\nHere`s the sorted list: \n");
	for (index = 0; index < lines; index++) {
		puts(ptstr[index]);
	}

	return 0;
}

/**
 * 字符串数组排序函数，使用选择排序算法
 * @param str [待排序的字符串数组]
 * @param n   [数组元素个数]
 */
void str_sort(char * str[], int n) {
	char * temp;
	int outer, inner;
	//外层表示要排序好哪个位置的元素
	for (outer = 0; outer < n - 1; outer++) {
		//内层表示具体的排序流程，不断判断最小元素并放到当前的排序位置上
		for (inner = outer + 1; inner < n; inner++) {
			temp = str[outer];
			//这里一定要大于0，因为C中0为假，非0都为真
			if (strcmp(temp, str[inner]) > 0) {
				str[outer] = str[inner];
				str[inner] = temp;
			}
		}
	}
}