/* 多维数组在函数中的使用 */
#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int arr[][COLS], int rows);
void sum_cols(int arr[][COLS], int rows);
int sum2d(int (*arr) [COLS], int rows);
int main(void) {
	
	//定义一个多维数组
	int junk[ROWS][COLS] = {
		{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}
	};

	//调用多维数组作为参数的函数
	sum_rows(junk, ROWS);
	sum_cols(junk, ROWS);
	printf("Sum of all elements = %d\n", sum2d(junk, ROWS));

	return 0;
}

/**
 * 计算二维数组每一行的和
 * @param arr  [二维数组]
 * @param rows [行大小]
 */
void sum_rows(int arr[][COLS], int rows) {
	int row;
	int col;
	int total;

	for (row = 0; row < rows; row++) {
		for (total = 0, col = 0; col < COLS; col++) {
			total += arr[row][col];
		}
		printf("row %d total = %d\n", row, total);
	}
}

/**
 * 计算二维数组每一列的和
 * @param arr  [二维数组]
 * @param rows [行大小]
 */
void sum_cols(int arr[][COLS], int rows) {
	int row;
	int col;
	int total;

	for (col = 0; col < COLS; col++) {
		for (total = 0, row = 0; row < rows; row++) {
			total += arr[row][col];
		}
		printf("col %d total = %d\n", col, total);
	}
}

/**
 * 计算二维数组所有元素的和
 * @param  arr  [二维数组]
 * @param  rows [行大小]
 * @return 元素和
 */
int sum2d(int (*arr) [COLS], int rows) {
	int row;
	int col;
	int total;

	for (total = 0, row = 0; row < rows; row++) {
		for (col = 0; col < COLS; col++) {
			total += arr[row][col];
		}
	}

	return total;
}