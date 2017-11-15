/** 定义旅店程序中使用的常量以及声明函数原型  */
#define QUIT 5
#define HOTEL1 80.00
#define HOTEL2 125.00
#define HOTEL3 150.00
#define HOTEL4 200.00
#define DISCOUNT 0.95
#define STARS "***************************************"

//菜单函数原型声明
int menu (void);

//获取住店夜数函数声明
int getnights (void);

//计算并显示住宿所需花费函数声明
void show_price (double hotel_rate, int nights);