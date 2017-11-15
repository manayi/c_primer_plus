#include <stdio.h>
void arr_test(int arr[], int rows);
int main(void) {
    int foo[] = {1, 2};
    arr_test(foo, 1);

    int * bar = foo; //编译报错

    
    
    // int * bar2;
    // bar2 = foo; //正确

    return 0;
}

void arr_test(int * ptr, int rows) {

}