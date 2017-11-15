#include <stdio.h>
#include <ctype.h>
int main (void)
{
	char ch;
	int a_ch, e_ch, i_ch, o_ch, u_ch;

	a_ch = e_ch = i_ch = o_ch = u_ch = 0;

	printf("Enter some text: enter # to quit.\n");
	while ((ch = getchar()) != '#')
	{

		switch (toupper(ch))
		{
			case 'A':
				a_ch++;
				break;
			case 'E':
				e_ch++;
				break;
			case 'I':
				i_ch++;
				break;
			case 'O':
				o_ch++;
				break;
			case 'U':
				u_ch++;
				break;
			default:
				break;
		}
	}
	printf("number of vowels: A E I O U\n");
	printf("                  %d %d %d %d %d\n", a_ch, e_ch, i_ch, o_ch, u_ch);
	return 0;
}