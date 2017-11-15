#include <stdio.h>
void fibonacci (int);
int main (void)
{
	int num;
	printf("Please enter an integer: \n");
	while (scanf("%d", &num) != 1)
	{
 		printf("Please enter an integer: \n");
	}
	fibonacci(num);
}

void fibonacci (int n)
{
	if (n <= 0)
	{
		return;
	}

	if (n == 1)
	{
		printf("%d\n", 1);
		return;
	}
	if (n == 2)
	{
		printf("%d %d\n", 1, 1);
		return;
	}

	int last_one = 1;
	int last_two = 1;
	int num;
	int index;
	printf("%d %d ", last_two, last_one);
	for (index = 2; index <= n; index++)
	{
		num = last_one + last_two;
		last_two = last_one;
		last_one = num;
		printf("%d ", num);
	}
	putchar('\n');
}