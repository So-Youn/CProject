#include<stdio.h>

void SimpleFunc(void) {
    static int num1 = 0; // 초기화하지 않으면 0으로 초기화 - 사실은 존재 x
    int num2 = 0;
    num1++, num2++;
    printf("static: %d , local : %d \n", num1, num2);
}
int main(void) {
    int i;
    for (i = 0; i < 3; i++)
        SimpleFunc();
    return 0;
}