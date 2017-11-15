#include <stdio.h>
#include "11-hotel.h" /* 头文件引入，使用双引号表示被包含的文件位于当前工作目录下 */
int main (void)
{
	int nights; //住宿夜数
	double hotel_rate; //每晚基准单价
	int code; //选择的旅馆号

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
			case 1 : 
				hotel_rate = HOTEL1;
				break;
			case 2 :
				hotel_rate = HOTEL2;
				break;
			case 3 :
				hotel_rate = HOTEL3;
				break;
			case 4 :
				hotel_rate = HOTEL4;
				break;
			default :
				printf("Oops!\n");
				break;
		}
		nights = getnights();
		show_price(hotel_rate, nights);
	}

	printf("Thank you and goodbye!\n");
	return 0;
}