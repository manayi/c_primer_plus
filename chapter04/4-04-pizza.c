#include <stdio.h>
#define PI 3.14153
int main (void)
{

	float area, circum, radius;

	printf("What is the radius of your pizza?\n");	
	scanf("%f", &radius);
	
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	
	printf("Your basic pazza parameters are as follows: \n");
	printf("circumference = %1.2f, area = %1.2f\n", circum, area);
	
	return 0;

}