#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int ch;
	FILE * fp; //文件的指针
	char filename[50];

	//获取文件名
	printf("Enter the name of the file: \n");
	scanf("%s", filename);

	//打开文件（读取）
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("Failed to open file. Bye\n");
		exit(1);
	}

	//循环读取文件（getc函数）
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}

	//关闭文件
	fclose(fp);
	return 0;
}