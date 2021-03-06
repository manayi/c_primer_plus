/* 修改07-rain程序，使用指针进行计算 */
#include <stdio.h>
#define YEARS 3
#define MONTHS 12
int main(void) {
	int year, month;
	float subtot, total;

	const float rain[YEARS][MONTHS] = {
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4}
	};

	printf(" YEAR  RAINFALL (inches)\n");
	for (year = 0, total = 0; year < YEARS; year++) {
		for (month = 0, subtot = 0; month < MONTHS; month++) {
			//修改点（数组名在表达式中使用时，被编译器转换为指针）
			subtot += *(*(rain + year) + month);
		}
		printf("%5d %15.1f\n", 2000 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
	printf("MONTHLY AVERAGES: \n\n");
	
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	for (month = 0, total = 0; month < MONTHS; month++) {
		for (year = 0, subtot = 0; year < YEARS; year++) {
		//修改点（数组名在表达式中使用时，被编译器转换为指针）
			subtot += *(*(rain + year) + month);
		}
		printf("%2.1f ", subtot / YEARS);
	}

	printf("\n");
	return 0;
}