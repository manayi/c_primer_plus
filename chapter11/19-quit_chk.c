/* 一个录入用户输入并能正常退出的程序 */
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 100
int main(void) {
	char input[SIZE][LIM];

	printf("Please enter %d lines(type quit to quit): \n", SIZE);	

	/*
	 * 录入程序的三重判断：
	 * 1、输入行数不允许大于SIZE；
	 * 2、遇到文件尾或者结束符（EOF）停止输入；
	 * 3、遇到"quit"停止输入；
	 */
	int lines = 0;
	while (lines < SIZE && (gets(input[lines]) != NULL) 
		&& strcmp(input[lines], "quit")) {

		lines++;
	}

	/*
	 * 录入程序的另一种三重判断：
	 * 1、输入行数不允许大于SIZE；
	 * 2、遇到文件尾或者结束符（EOF）停止输入；
	 * 3、在输入一行并回车之后，在新的一行不输入任何内容直接回车停止输入；
	 */
	while (lines < SIZE && (get(input[lines]) != NULL) 
		&& input[lines][0] = '\0') {

		lines++;
	}

	printf("%d lines entered!\n", lines);

	return 0;
}