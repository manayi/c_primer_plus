#include <stdio.h>
#include <stdbool.h>
int get_int (void);
bool bad_limit (int star, int stop, int lower, int upper);
double sum_squares (int start, int stop);
int main (void)
{
	const int MIN = -1000;
	const int MAX = +1000;

	int start, stop;
	double answer;

	printf("This program computes the sum of the squares of ");
	printf("integers in a range. \nThe lower bound should not ");
	printf("be less than -1000 and\nthe upper bound should not ");
	printf("be more than +1000.\nEnter the limits (enter 0 for ");
	printf("both limits to quit):\nlower limit: ");
	start = get_int();
	printf("upper limit: \n");
	stop = get_int();

	while (start != 0 || stop != 0)
	{
		if (bad_limit(start, stop, MIN, MAX))
		{
			printf("Please try again.\n");
		} 
		else
		{
			answer = sum_squares(start, stop);
			printf("The sum of the squares of the integers ");
			printf("from %d to %d is %g\n", start, stop, answer);
		}

		printf("Enter the limits (enter 0 for both limits to quit): \n");
		printf("lower limit: \n");
		start = get_int();
		printf("upper limit: \n");
		stop = get_int();
	}
	printf("Done.\n");

	return 0;
}

/** 获取用户正确的输入 */
int get_int (void) 
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1) 
	{
		while ((ch = getchar()) != '\n')
		{
			putchar(ch);
		}
		printf(" is not an integer.\n");
		printf("Please enter an integer value, such as 25, -178, or 3: \n");
	}

	return input;
}

/** 校验用户输入值是否在允许的范围内 */
bool bad_limit (int start, int stop, int lower, int upper)
{
	if (stop < start)
	{
		printf("%d isn`t smaller than %d.\n", start, stop);
		return true;
	}

	if (start < lower || stop < lower)
	{
		printf("Values must be %d or greater,\n", lower);
		return true;
	}

	if (start > upper || stop > upper)
	{
		printf("Values must be %d or less,\n", upper);
		return true;
	}

	return false;

}

/** 计算范围内的平方和 */
double sum_squares (int start, int stop)
{
	double answer = 0;

	int index;
	for (index = start; index <= stop; index++)
	{
		answer += index * index;
	}

	return answer;
}