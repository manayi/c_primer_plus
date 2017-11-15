#include <stdio.h>
int main (void)
{
	int t_ct; //索引计数
	double time, x; //总耗时和当前耗时
	int limit; //统计总项

	printf("Enter the number of terms you want: \n");
	scanf("%d", &limit);
	for (time = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
	{
		time += 1.0 / x;
		printf("time = %f when terms = %d.\n", time, t_ct);
	}

	return 0;
} 