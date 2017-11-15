/* 使用const修饰函数中的数组形参 */
#include <stdio.h>
#define SIZE 5
void show_array(const double array[], int n);
void multi_array(double * array, int n, double multi);
int main(void) {
	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
	
	printf("The original dip array: \n");
	show_array(dip, SIZE);
	multi_array(dip, SIZE, 2.5);
	printf("The dip array after calling multi_array (): \n");
	show_array(dip, SIZE);

	return 0;
}

/**
 * 展示数组，不需要修改数组内容，形参使用const修饰
 * @param array 数组变量，为指向数组首元素的指针
 * @param n     数组长度
 */
void show_array(const double array[], int n) {
	int index;
	for (index = 0; index < n; index++) {
		printf("%8.3f ", array[index]);
	}
	putchar('\n');
}

/**
 * 修改数组，形参不能使用const修饰
 * @param array 数组变量，为指向数组首元素的指针
 * @param n     数组长度
 * @param multi 扩大倍数
 */
void multi_array(double * array, int n, double multi) {
	int index;
	for (index = 0; index < n; index++) {
		array[index] = *(array + index) * multi; 
	}
}

