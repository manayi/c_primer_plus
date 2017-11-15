/* 使用字符串复制函数strncpy */
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
int main(void) {
	char target[LIM][TARGSIZE];
	char source[SIZE];

	int count = 0;
	printf("Please enter %d words beginning whith q!\n", LIM);
	while (count < LIM && gets(source)) {
		if (strncmp(source, "q", 1)) {
			printf("%s doesn`t begin with q!\n", source);
			continue;
		}
		strncpy(target[count], source, TARGSIZE);
		//strncpy只会无脑复制，如果source字符串过大，可能导致无法复制到'\0'，
		//为了确保正确，应该在target手动添加结束符
		target[count][TARGSIZE - 1] = '\0'; 
		count++;	
	}

	puts("Here are the words accepted: ");
	for (count = 0; count < LIM; count++) {
		puts(target[count]);
	}

	return 0;
}