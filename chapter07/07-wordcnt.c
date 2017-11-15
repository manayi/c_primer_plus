#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main (void)
{
	char c; //读入字符
	char prev; //前一个字符
	long n_chars = 0L; //总字符数
	int n_lines = 0; //总行数
	int n_words = 0; //总单词数
	int p_lines = 0; //不完整的行数
	bool inword = false; //是否处在一个单词内

	printf("Enter next to be analyzed(| to terminate): \n");
	prev = '\n';
	while ((c = getchar()) != STOP) 
	{
		n_chars++; //总字符数+1
		
		//判断是否为一行末尾
		if (c == '\n')
		{
			n_lines++;
		}

		//判断是否是一个新的单词
		if (!isspace(c) && !inword) 
		{
			n_words++;
			inword = true;
		}

		//判断是否结束了一个单词
		if (isspace(c) && inword) {
			inword = false;
		}

		prev = c; //保持字符值
	}

	if (prev != '\n')
	{
		p_lines++;
	}

	printf("characters = %ld, words = %d, lines = %d", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	return 0;
}