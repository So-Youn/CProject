#include<stdio.h> // 헤더파일 선언

int main(void) {
	int  result;
	int num1, num2;
	printf("정수 1:");
	scanf("%d", &num1); //첫번째 정수 입력
	printf("정수2 :");
	scanf("%d", &num2); //두번째 정수 입력
	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
	return 0;


	

}