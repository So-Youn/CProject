#include<stdio.h>

int main(void) {
	int num1, num2;
	printf("두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d - %d = %d \n", num1, num2, num1-num2);
	printf("%d X %d = %d \n", num1, num2, num1 * num2);
	int num3, result;
	printf("세번째 정수 입력:");
	scanf("%d", &num3);
	result = num1 * num2 + num3;
	printf("result : %d \n", result);

	return 0;
}