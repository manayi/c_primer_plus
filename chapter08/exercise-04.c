#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main (void)
{
	int words = 0;
	int chars = 0;

	int input;
	bool inword = false; //假设不在一个单词内
	while ((input = getchar()) != EOF)
	{
		if (isalpha(input))
		{
			//如果读到了字母
			chars++; //字符数+1

			if (!inword)
			{
				//如果不在单词内
				words++; //单词数+1
				inword = true;
			} 
			continue;
		} 
		else 
		{
			//如果读到的不是字母，并且在单词内，则设置标志位
			if (inword)
			{
				inword = false;
			}
		}
	}

	printf("the total of chars is %d, words is %d\n", chars, words);
	printf("the average of chars is %f\n", chars / ((double) words));

	return 0;
}