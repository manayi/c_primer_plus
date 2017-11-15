/* 复制并打印变长二维数组 */
#include <stdio.h>
void copy_2d_val(int rows, int cols, int source[rows][cols], int target[rows][cols]);
void print_2d_val(int rows, int cols, int val[rows][cols]);
int main(void) {
	int source[4][3] = {
		{3, 5, 8}, {1, 178, 19}, {2, 4, 9}, {89, 34, 10}
	};
	int target[4][3];

	copy_2d_val(4, 3, source, target);
	print_2d_val(4, 3, target);

	return 0;
}

void copy_2d_val(int rows, int cols, int source[rows][cols], int target[rows][cols]) {
	int row, col;
	for (row = 0; row < rows; row++) {
		for (col = 0; col < cols; col++) {
			target[row][col] = source[row][col];
		}
	}
}

void print_2d_val(int rows, int cols, int val[rows][cols]) {
	int row, col;
	for (row = 0; row < rows; row++) {
		for (col = 0; col < cols; col++) {
			printf("the value of row %d col %d is %d\n", row, col, val[row][col]);
		}
	}
}
