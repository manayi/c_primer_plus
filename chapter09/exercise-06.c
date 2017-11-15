#include <stdio.h>
#include <ctype.h>
#define START 64
void is_alpha (char ch);
int main (void)
{
	printf("Please enter some words: \n");

 	int ch;
	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			is_alpha(ch);
		}	
	}

	return 0;
}

/**
 * 判断一个字符时候为字母
 * 若其为字母，判断它在字母表的位置
 * @param ch [description]
 */
void is_alpha (char ch)
{
	if (!isalpha(ch)) 
	{
		printf("%c is not alpha!\n", ch);
		return;
	}

	char upper = toupper(ch);
	printf("%c is the NO.%d.\n", ch, upper - START);
}

