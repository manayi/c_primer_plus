#include <stdio.h>
int main (void)
{
	float length, width;

	printf("Enter the length of the rectangle: \n");
	while (scanf("%f", &length))
	{
		printf("Length = %0.2f: \n", length);
		printf("Enter the width: \n");
		if (!scanf("%f", &width))
		{
			break;
		}
		printf("width = %0.2f: \n", width);
		printf("Area = %0.2f: \n", length * width);
		printf("Enter the length of the rectangle: \n");
	}
	printf("Done.\n");
	
	return 0;
}