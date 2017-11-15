#include <stdio.h>
#include <stdbool.h>
int main (void)
{
	unsigned long num;
	unsigned long div;
	bool isPrime; //素数标识

	printf("Please enter an integer for analysis: ");
	printf("Enter q to quit.\n");
	while (scanf("%lu", &num) == 1) 
	{
		//查找一个整数的公约数
		for (div = 2, isPrime = true; div * div <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
				{
					printf("%lu is divisible by %lu and %lu\n", num, div, num / div);
				}
				else
				{
					printf("%lu is divisible by %lu\n", num, div);
				}

				isPrime = false;
			}
		}

		//如果是素数。打印
		if (isPrime)
		{
			printf("%lu is prime\n", num);
		}

		printf("Please enter an integer for analysis: ");
		printf("Enter q to quit.\n");
	}

	printf("Bye.\n");
	return 0;	printf("Please enter an integer for analysis: ");
	printf("Enter q to quit.\n");
}