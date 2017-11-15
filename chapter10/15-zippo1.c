/* 多维数组的指针 */
#include <stdio.h>
int main(void) {
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

	/* 
	 * 多维数组变量是一个指针，其指向的首元素本身是一个数组，
	 * 也就是说，指针指向的是一个指针，但2个指针sizeof不同
	 */
	printf("   zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);

	/*
	 * zippo[0]是多维数组中数组[2]的首元素，也是一个指针
	 */
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);

	/*
	 * *zippo对多维数组变量求值，得到首元素的数组[2]的指针
	 * 指向数组[2]的首元素
	 */
	printf("   *zippo = %p,   *zippo + 1 = %p\n", *zippo, *zippo + 1);

	//对二维数组的指针的指针求值（使用数组索引[]求职）
	printf("zippo[0][0] = %d,\n", zippo[0][0]);

	//对二维数组的指针的指针求值（使用数组索引加间接运算符求值）
	printf("  *zippo[0] = %d\n", *zippo[0]);

	//对二维数组的指针的指针求值（使用间接运算符求值）
	printf("    **zippo = %d\n", **zippo);

	//对二维数组的指针的指针求值（使用数组索引[]求职）
	printf("       zippo[2][1] = %d\n", zippo[2][1]);

	//对二维数组的指针的指针求值（使用间接运算符求值）
	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));

	return 0;
}