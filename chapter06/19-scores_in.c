#include <stdio.h>
#define SIZE 10
#define PAR 72
int main (void)
{
	int index, score[SIZE];
	int sum = 0;
	float average;

	//输入值
	printf("Please enter %d golf scores\n", SIZE);
	for (index = 0; index < SIZE; index++)
	{
		printf("Now enter no.%d score\n", index);
		scanf("%d", &score[index]);
	}

	//打印
	printf("The scores read in are as follows: \n");
	for (index = 0; index < SIZE; index++)
	{
		printf("%d ", score[index]);
	}

	//求和
	printf("\n");
	for (index = 0; index < SIZE; index++)
	{
		sum += score[index];
	}

	//求平均数
	average = (float) sum / SIZE;

	printf("Sum of scores = %d, average = %.2f\n", sum, average);
	printf("That`s a handicap of %.0f.\n", average - PAR);
	return 0;
}