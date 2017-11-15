#include <stdio.h>
#define MSG "You must have many talents. Tell me some. " //定义一个字符串常量
#define LIM 5 
#define LINELEN 81
int main(void) {
	char name[LINELEN];
	char talents[LINELEN];
	int i;

	//初始化一个字符数组（注意字符数组的可以使用字符串进行初始化）
	const char m1[40] = "Limit yourself to one line`s worth. ";
	const char m2[] = "If you can`t think of anything, fake it. ";

	//初始化一个指向字符的指针（注意指向字符的指针可以使用字符串进行初始化）
	const char *m3 = "\nEnough about me - what`s your name? ";

	//初始化一个指针数组
	const char *mytal[LIM] = {
		"Adding number swiftly", "Multiplying accurately", "Stashing data",
		"Following instructions to the letter", "Understanding the C language"
	};

	printf("Hi! I`m Clyde the computer. " " I have many talents.\n");
	printf("Let me tell you some of them.\n");

	//使用puts函数输出一个字符串
	puts("What were they? Ah, yes, here`s a partial list. ");
	for (i = 0; i < LIM; i++) {
		puts(mytal[i]);
	}

	puts(m3);
	//使用gets函数读取一个字符串输入
	gets(name);
	printf("Well, %s, %s\n", name, MSG);
	printf("%s\n%s\n", m1, m2);
	gets(talents);
	puts("Let`s see if I`ve got that list: ");
	puts(talents);
	printf("Thanks for the information, %s.\n", name);

	return 0;
}

