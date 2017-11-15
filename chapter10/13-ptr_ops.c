/* 指针的基本操作 */
#include <stdio.h>
int main(void) {
	int urn[5] = {100, 200, 300, 400, 500};
	int * ptr1, * ptr2, * ptr3;

	ptr1 = urn; //数组变量自身是一个指向首元素的指针
	ptr2 = &urn[2]; //urn[2]=*(urn + 2)，ptr2为指向数组第三个元素的指针

	//打印指针的值，打印指针所指向变量的值，打印指针自身的地址
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	//指针加法（支持"指针 + 整数", "整数 + 指针", 不支持"指针 + 指针"）
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer\n");
	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));

	//指针自增（如果函数中的指针是以数组变量形式声明, 如"urn", 则不能自增）
	ptr1++;
	printf("\nvalues after ptr1++\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	//指针自减（如果函数中的指针是以数组变量形式声明, 如"urn", 则不能自减）
	ptr2--;
	printf("\nvalues after ptr2--\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	--ptr1;
	++ptr2;

	//指针减法（支持"指针 - 整数", "指针 - 指针", 不支持"整数 - 指针"）
	printf("\nsubtracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n", ptr2, ptr1, (ptr2 - ptr1));

	printf("\nsubtracting an int from a pointer");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);

	return 0;
}