/* 复合文字-数组常量 */
#include <stdio.h>
#define COLS 4
int sum2d(int arr[][COLS], int rows);
int sum(int arr[], int elements);
int main(void) {
	int total1, total2, total3;
	int * pt1 = (int [2]) {10, 20};
	int (*pt2) [COLS];

	//数组常量使用-类似其他常量，直接赋值给指针
	pt2 = (int [2][COLS]) { {1, 2, 3, -9}, {4, 5, 6, -8} };

	total1 = sum(pt1, 2);
	printf("total1 = %d\n", total1);

	total2 = sum2d(pt2, 2);
	printf("total2 = %d\n", total2);

	//数组常量使用-直接做为函数参数
	total3 = sum((int []) {4, 4, 4, 5, 5, 5}, 6);
	printf("total3 = %d\n", total3);

	return 0;
}

/**
 * 计算一维数组的所有元素之和
 * @param  arr      [数组]
 * @param  elements [元素个数]
 * @return          [总和]
 */
int sum(int arr[], int elements) {
	int total, element;

	for (total = 0, element = 0; element < elements; element++) {
		total += arr[element];
	}

	return total;
}

/**
 * 计算二维数组所有元素的和
 * @param  arr  [二维数组]
 * @param  rows [总行数]
 * @return      [所有元素的和]
 */
int sum2d(int arr[][COLS], int rows) {
	int total, row, col;

	for (total = 0, row = 0; row < rows; row++) {
		for (col = 0; col < COLS; col++) {
			total += arr[row][col];
		}
	}

	return total;
}