/* 求一个数组的所有元素的和 */
#include <stdio.h>
#define SIZE 10
long sum(int array[], int size);
int main(void) {
	int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
	long answer = sum(marbles, SIZE);
	printf("The total is %ld.\n", answer);
	printf("The size of marbles is %u\n", sizeof marbles);

	return 0;
}

long sum(int array[], int size) {
	long total;
	int index; 
	for (index = 0, total = 0; index < size; index++) {
		total += array[index];
	}
	printf("The size of array is %u\n", sizeof array);

	return total;
}