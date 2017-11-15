#include <stdio.h>

int main (void) 
{

	double seconds = 3.156e+7;

	int age;

	printf("Please enter your age: \n");
	scanf("%d", &age);
	printf("The seconds of your age are %f\n", age * seconds);

	return 0;

}