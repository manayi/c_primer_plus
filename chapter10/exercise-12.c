/* 用户输入数组值，并分析这个数组 */
#include <stdio.h>
#include <ctype.h>
void analyzer_2d_val(int rows, int cols, int val[rows][cols]);
int main(void) {
	int arr[3][5];

	int row = 0;
	char ch;
	while (row < 3) {
		printf("please enter the %d row integer array, 5 integers\n", row);
		while (scanf("%d %d %d %d %d", &arr[row][0], &arr[row][1], 
			&arr[row][2], &arr[row][3], &arr[row][4]) != 5) {
			
			while ((ch = getchar()) != '\n') {
				if (!isdigit(ch) && !isspace(ch)) {
					putchar(ch);
					printf(" is not an integer. Please input again\n");
				}
			}
		}
		row++;
	}
	
	analyzer_2d_val(3, 5, arr);

	return 0;
}

void analyzer_2d_val(int rows, int cols, int val[rows][cols]) {
	int row, col, total, summary, max;
	for (summary = 0, max = val[0][0], row = 0; row < rows; row++) {
		for (total = 0, col = 0; col < cols; col++) {
			printf("the value of row %d col %d is %d\n", row, col, val[row][col]);
			total += val[row][col];
			if (val[row][col] > max) {
				max = val[row][col];
			}
		}
		summary += total;
		printf("the total is %d\n", total);
		printf("the average of row %d is %f\n", row, ((double) total) / cols);
	}
	printf("the average of val array is %f\n", ((double) summary) / (rows * cols));
	printf("the max of val array is %d\n", max);
}



