#include <stdio.h>
int main (void)
{

	//整数除以整数，如果不能整除，则截尾
	printf("integer division: 5/4 is %d\n", 5/4);
	printf("integer division: 6/3 is %d\n", 6/3);
	printf("integer division: 7/4 is %d\n", 7/4);
	//浮点数运算，结果为浮点数
	printf("floating division: 7./4. is %1.2f\n", 7./4.);
	//整数和浮点数混合运算，整数先转换为浮点数，结果为浮点数
	printf("mixed division: 7./4 is %1.2f\n", 7./4);

	return 0;

}