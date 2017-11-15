/**
 * 1、数组名为不可修改的左值，不允许在初始化之后重新赋值
 * 2、数组名在其他表达式（非声明）中，被编译器转换为指向数组首元素的指针；
 * 3、在函数原型以及函数定义的形式参数中，数组名和指针是相同的，因此在对应的函数体中，
 * 	  引用形式参数也被认为是指针类型；
 * 4、在数组声明的函数体内，arr[i]与*(arr + i)结果相同，但是机制却不一样，第一是作为数组
 * 	  符号，第二是指针
 */
#include <stdio.h>
double diff_arr(double arr[], int n);
int main(void) {
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	printf("the diff of arr is %f\n", diff_arr(source, 5));

	return 0;
}

double diff_arr(double arr[], int n) {
	double max, min;
	int index;
	for (index = 0, max = arr[0], min = arr[0]; index + 1 < n; index++) {
		if (max < arr[index + 1]) {
			max = arr[index + 1];
		}
		if (min > arr[index + 1]) {
			min = arr[index + 1];
		}
	}

	return max - min;
}