/* 使用数组形式参数和指针形式参数拷贝数组 */
#include <stdio.h>
void copy_arr(double source[], double target[], int n);
void copy_ptr(double * source, double * target, int n);
int main(void) {
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];

	copy_arr(source, target1, 5);
	copy_ptr(source, target2, 5);

	int index;
	for (index = 0; index < 5; index++) {
		printf("index %d is %f\n", index, target1[index]);
	}
	for (index = 0; index < 5; index++) {
		printf("index %d is %f\n", index, target2[index]);
	}
	return 0; 
}

void copy_arr(double source[], double target[], int n) {
	int index;
	for (index = 0; index < n; index++) {
		target[index] = source[index];
	}
}

void copy_ptr(double * source, double * target, int n) {
	int index;
	for (index = 0; index < n; index++) {
		*(target + index) = *(source + index);
	}
}