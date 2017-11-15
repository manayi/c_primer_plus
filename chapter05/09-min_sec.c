#include <stdio.h>
#define SEC_PER_MIN 60
int main (void)
{

	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit): \n");
	scanf("%d", &sec); //读取秒数

	while (sec > 0) {
		min = sec / SEC_PER_MIN; //分钟数
		left = sec % SEC_PER_MIN; //多余的秒数

		printf("%d seconds is %d minutes and %d seconds.\n", sec, min, left);
		printf("Enter the number of seconds (<=0 to quit): \n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;

}