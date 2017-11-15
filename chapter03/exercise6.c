#include <stdio.h>
int main (void) 
{

	//一个水分子的重量
	double water = 3.0e-23;
	//一夸脱水的重量
	int weight = 950;

	//夸脱数
	int nums;

	printf("Please enter the weight: \n");
	scanf("%d", &nums);
	printf("The nums of water is %f\n", nums * weight / water);

}