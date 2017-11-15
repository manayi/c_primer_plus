/* 将2个数组对应索引的元素和赋值到对应的目标数组中 */
#include <stdio.h>
void sum_copy(int arr_1[], int arr_2[], int target[], int n);
int main(void) {
	int target[4];
	sum_copy((int []) {2, 4, 5, 8}, (int []) {1, 0, 4, 6}, target, 4);

	int index;
	for (index = 0; index < 4; index++) {
		printf("the %d element of target is %d\n", index, target[index]);
	}

	return 0;
}

void sum_copy(int arr_1[], int arr_2[], int target[], int n) {
	int index;
	for (index = 0; index < n; index++) {
		target[index] = arr_1[index] + arr_2[index];
	}
}