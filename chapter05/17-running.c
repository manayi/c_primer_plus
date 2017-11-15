#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main (void)
{
	double distk, distm; //跑过的公里数，跑过的英里数
	double rate; //平均速度，单位：英里/时
	int min, sec; //跑步用的分钟数和秒数
	int time; //跑步总秒数
	double mtime; //平局速度，单位：秒/英里
	int mmin, msec; //跑完一英里所用的分钟和秒数

	printf("This program converts your time for a metric race\n");
	printf("to a time for running a mile and to your average\n");
	printf("speed in miles per hour.\n");
	printf("Please enter, in kilometers, ths distance run.\n");
	scanf("%lf", &distk);
	scanf("Next enter the time in minutes and seconds.\n");
	printf("Begin by entering the minuters.\n");
	scanf("%d", &min);
	printf("Now enter the seconds.\n");
	scanf("%d", &sec);

	//跑步耗时总秒数
	time = S_PER_M * min + sec;
	//跑步的长度，单位：英里
	distm = M_PER_K * distk;
	//计算平均速度，单位：英里/时
	rate = distm / time * S_PER_H;
	//计算平均速度，单位：秒/英里
	mtime = time / distm;
	//将mtime转换为分钟和秒速
	mmin = (int) mtime / S_PER_M;
	msec = (int) mtime % S_PER_M;

	//集中打印
	printf("You ran %1.2f km(%1.2f miles) in %d min, %d sec.\n", distk, distm, min, sec);
	printf("That pace corresponds to running a mile in %d min, ", mmin);
	printf("%d sec.\nYour averagespeed was %1.2f mph.\n", msec, rate);

	return 0;
}