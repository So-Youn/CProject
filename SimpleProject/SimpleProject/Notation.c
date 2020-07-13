#include<stdio.h>

int main(void) 
{
	//변수를 선언과 동시에 16진수와 8진수로 초기화.
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수 값 : %d \n", num1); // %d는 정수형태의 출력을 의미
	printf("0x43의 10진수 정수 값 : %d \n", num2);
	printf("032의 10진수 정수 값 : %d \n", num3);
	printf("024의 10진수 정수 값 : %d \n", num4);
	return 0;
}