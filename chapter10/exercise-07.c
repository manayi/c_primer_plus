/* 复制一个数组的片段 */
#include <stdio.h>
void copy_arr(int * start, int * end, int target[]);
int main(void) {
	int source[7] = {1, 2, 3, 4, 5, 6, 7};
	int target[3];
	copy_arr(source + 2, source + 5, target);

	int index;
	for (index = 0; index < 3; index++) {
		printf("the index %d is %d\n", index, target[index]);
	}

	return 0;
}

void copy_arr(int * start, int * end, int target[]) {
	int index = 0;
	while (start < end) {
		target[index] = *start;
		index++;
		start++;
	}
}