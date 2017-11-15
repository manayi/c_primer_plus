/* 研究strcpy的返回值-即第一个参数的值 */
#include <stdio.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void) {
	char * origin = WORDS;
	char target[SIZE] = "Be the best that you can be.";
	char * ps;

	puts(origin);
	puts(target);
	ps = strcpy(target + 7, origin);
	puts(target);
	puts(ps);

	return 0;
}