/* sprintf格式化字符串函数 */
#include <stdio.h>
#define MAX 20
int main(void) {
	char first[MAX];
	char last[MAX];
	char format[MAX * 2 + 10];
	double prize;

	printf("Enter your first name: \n");
	gets(first);
	printf("Enter your last name: \n");
	gets(last);
	puts("Enter your prize money: \n");
	scanf("%lf", &prize);

	sprintf(format, "%s, %-19s: $%6.2f\n", last, first, prize);
	puts(format);

	return 0;
}