/* 返回一个int数组中的最大值 */
#include <stdio.h>
int arr_max(int * start, int * end);
int main(void) {
	int arr[5] = {4, 1, 9, 0, 11};
	printf("the max is %d\n", arr_max(arr, arr + 5));

	return 0;
}

int arr_max(int * start, int * end) {
	if (start > end) {
		return -1;
	}

	int max;
	for (max = *start; (start + 1) < end; start++) {
		if (max <= *(start + 1)) {
			max = *(start + 1);
		}
	}
	
	return max;
}