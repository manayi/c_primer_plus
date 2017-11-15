/* 打印并复制一个二维数组 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void print_2d_arr(int arr[][5], int rows);
void double_2d_arr(int rows, int cols, int arr[rows][cols]);
int main(void) {
	int arr[3][5];

	time_t t;
	srand((unsigned) time(&t));

	int row, col;
	for (row = 0; row < 3; row++) {
		for (col = 0; col < 5; col++) {
			arr[row][col] = rand();
		}
	}

	print_2d_arr(arr, 3);
	double_2d_arr(3, 5, arr);
	printf("after double_2d_arr\n");
	print_2d_arr(arr, 3);

	return 0;
}

void print_2d_arr(int arr[][5], int rows) {
	int row, col;
	for (row = 0; row < rows; row++) {
		for (col = 0; col < 5; col++) {
			printf("%12d ", arr[row][col]);
		}
		printf("\n");
	}
}

void double_2d_arr(int rows, int cols, int arr[rows][cols]) {
	int row, col;
	for (row = 0; row < rows; row++) {
		for (col = 0; col < cols; col++) {
			arr[row][col] *= 2;
		}
	}
}
