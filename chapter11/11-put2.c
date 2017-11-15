/* 自定义简单的字符串输出函数-统计输出字符数 */
int put2(const char * string) {
	int count = 0;
	while (*string) {
		putchar(*string++);
		count++;
	}

	putchar('\n');
	return count;
}