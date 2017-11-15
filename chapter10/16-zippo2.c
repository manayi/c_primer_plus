/* 声明多维数组的指针 */
#include <stdio.h>
int main(void) {
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

	//声明一个数组指针
	int (* pz) [2] = zippo;

	//多维数组的指针指向一个数组，并且指针地址为该数组的首元素
	printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);
	printf("pz[0] = %p, pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf("  *pz = %p, *pz + 1 = %p\n", *pz, *pz + 1);

	printf("pz[0][0] = %d\n", pz[0][0]);
	printf("  *pz[0] = %d\n", *pz[0]);
	printf("'   **pz = %d\n", **pz);
	printf("      pz[2][1] = %d\n", pz[2][1]);
	printf("*(*(pz + 2) + 1) = %d\n", *(*(pz + 2) + 1));

	return 0;
}