/* 求double数组中最大值的索引 */
#include <stdio.h>
int max_index(double arr[], int n);
int main(void) {
	double arr[5] = {4.1, 1.15, 9.12, 0.00, 11.14};
	printf("the max index is %d\n", max_index(arr, 5));
	
	return 0;
}

/**
 * 求最大值索引的函数1(double arr[], int n);
 * @param  arr [数组]
 * @param  n   [数组元素个数]
 * @return     [最大值索引]
 */
int max_index(double arr[], int n) {
	double max;
	int max_index, index;
	for (max = arr[0], max_index = 0, index = 0; index + 1 < n; index++) {
		if (max <= arr[index + 1]) {
			max = arr[index + 1];
			max_index = index + 1;
		}
	}
	
	return max_index;
}
