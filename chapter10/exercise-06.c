/* 复制二维数组 */
#include <stdio.h>
void copy_arr(double source[], double target[], int n);
int main(void) {
	double source[2][2] = {
		{1.1, 2.2}, {3.3, 4.4}
	};
	double target[2][2];

	int index;
	for (index = 0; index < 2; index++) {
		copy_arr(source[index], target[index], 2);
	}

	int row, col;
	for (row = 0; row < 2; row++) {
		for (col = 0; col < 2; col++) {
			printf("the %d row %d col is %f\n", row, col, target[row][col]);
		}
	}

	return 0;
}

void copy_arr(double source[], double target[], int n) {
	int index;
	for (index = 0; index < n; index++) {
		target[index] = source[index];
	}
}