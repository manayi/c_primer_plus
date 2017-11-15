#include <stdio.h>
#include <math.h>
int main (void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("What`s value of PI?\n");
	scanf("%lf", &response);

	while (fabs(ANSWER - response) > 0.0001)
	{
		printf("Try it again!\n");
		scanf("%lf", &response);
	}
	printf("Close enough!\n");

	return 0;

}