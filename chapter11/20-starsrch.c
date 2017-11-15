/* 一个strncmp函数的展示 */
#include <stdio.h>
#include <string.h>
#define LISTSIZE 5
int main(void) {
	char * list[LISTSIZE] = {
		"astronomy", "astounding", "astrophysics",
		"ostracize", "asterism"
	};

	int index;
	int count = 0;
	for (index = 0; index < LISTSIZE; index++) {
		if (!strncmp(list[index], "astro", 5)) {
			printf("Found: %s\n", list[index]);
			count++;
		}
	}

	printf("The list contained %d words beginning with astro\n", count);

	return 0;
}