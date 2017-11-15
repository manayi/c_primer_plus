/* 求2个integer的汉明距离 */
#include <stdio.h>
int main(void) {
	int x = 2, y = 9;

    int count = 0;
    int index = 1;
    do {
        if ((x & 1) != (y & 1)) {
         count++;   
        }
        x >>= 1;
        y >>= 1;
        index++;
    } while (index < 32);
   	printf("the hammingDistance is %d.\n", count);

    return 0;
}

int hammingDistance(int x, int y) {
    int count = 0;
    int index = 1;
    do {
        if ((x & 1) != (y & 1)) {
         count++;   
        }
        x >>= 1;
        y >>= 1;
        index++;
    } while (index < 32);
   
    return count;
}

int hammingDistance(int x, int y) {
    int count = 0;
    while (x || y) {
        if ((x & 1) != (y & 1)) {
         count++;   
        }
        x >>= 1;
        y >>= 1;
    }
   
    return count;
}