/* 处理变长数组 */
#include <stdio.h>
#define ROWS 3
#define COLS 4
int sum2d(int rows, int cols, int arr[rows][cols]);
int main(void) {
	int i, j;
	int rs = 3, cs = 10;

	//定义一个多维数组
	int junk[ROWS][COLS] = {
		{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}
	};

	//定义一个多维数组
	int morejunk[ROWS - 1][COLS + 2] = {
		{20, 30, 40, 50, 60, 70}, {5, 6, 7, 8, 9, 10}
	};

	//定义一个变长数组，变长数组声明时无法静态初始化
	int varr[rs][cs];
	for (i = 0; i < rs; i++) {
		for (j = 0; j < cs; j++) {
			varr[i][j] = i * j + j;
		}
	}

	//变长数组函数同样兼容非变长数组
	printf("3X5 array\n");
	printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));

	printf("2x6 array\n");
	printf("Sum of all elements = %d\n", sum2d(ROWS - 1, COLS + 2, morejunk));

	//变长数组函数传入变长数组
	printf("3x10 array\n");
	printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));

	return 0;
}

int sum2d(int rows, int cols, int arr[rows][cols]) {
	int row, col, total = 0;

	for (row = 0; row < rows; row++) {
		for (col = 0; col < cols; col++) {
			total += arr[row][col];
		}
	}

	return total;
}