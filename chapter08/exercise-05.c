#include <stdio.h>
int main (void)
{
	int guess = 50;
	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
	printf("Respond with a y if my guess is right\n");
	printf("and with an g if it is greater\n");
	printf("and with an l if it is less.\n");
	printf("Uh...is your number %d?\n", guess);

	int left = 0;
	int right = 100;

	char response;
	while ((response = getchar()) != 'y')
	{
		if (response == 'g') {
			//猜大了，则划分到左边
			right = guess;
			guess = (guess + left) / 2;
			printf("Well, is it %d\n", guess);
		} else if (response == 'l') {
			left = guess;
			guess = (guess + right) / 2;
			printf("Well, is it %d\n", guess);
		} else {
			printf("Sorry, I understand only y or n.\n");
		}

		while (getchar() != '\n')
		{
			continue;
		}
	}
	printf("I knew I could do it!\n");

	return 0;
}