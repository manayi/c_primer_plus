/* 使用字符串复制函数strcpy进行字符串复制 */
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5
int main(void) {
	char target[LIM][SIZE];
	char source[SIZE];

	int count = 0;
	printf("Please enter %d words beginning whith q!\n", LIM);
	while (count < LIM && gets(source)) { //gets(source)为gets(source) != NULL的缩写
		if (source[0] != 'q') { //或者if (!strncmp(source, "q", 1))
			printf("%s doesn`t begin with q!\n", source);
			continue;
		}
		strcpy(target[count], source);
		count++;
	}

	puts("Here are the words accepted: ");
	for (count = 0; count < LIM; count++) {
		puts(target[count]);
	}

	return 0;
}