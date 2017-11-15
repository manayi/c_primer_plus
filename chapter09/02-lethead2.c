#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 Megabuck Plaza"
#define PLIACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '
void show_n_char(int n, char ch);
int main (void)
{
	int spaces;

	show_n_char(WIDTH, '*');
	putchar('\n');

	show_n_char(12, SPACE);
	printf("%s", NAME);
	putchar('\n');

	spaces = (WIDTH - strlen(ADDRESS))/2;
	show_n_char(spaces, SPACE);
	printf("%s", ADDRESS);
	putchar('\n');

	spaces = (WIDTH - strlen(PLIACE))/2;
	show_n_char(spaces, SPACE);
	printf("%s", PLIACE);
	putchar('\n');

	show_n_char(WIDTH, '*');
	putchar('\n');

	return 0;
}

void show_n_char(int n, char ch)
{
	int index;
	for (index = 0; index < n; index++)
	{
		putchar(ch);
	}

}