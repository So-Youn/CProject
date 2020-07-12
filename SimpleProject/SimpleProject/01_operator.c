#include<stdio.h>

int main(void) {
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;
	printf("덧셈 결과 : %d \n",  result);
	printf("%d+%d=%d \n", num1, num2, result);
	printf("%d와 %d의 합은 %d입니다. \n", num1, num2, result);

	int opr1 = 12;
	int opr2 = 12;
	printf("opr1: %d \n", opr1);
	printf("opr1++: %d \n", opr1++); // 후위증가
	printf("opr1: %d \n", opr1);

	printf("opr2: %d\n", opr2);
	printf("++opr2: %d\n", ++opr2);  //전위 증가
	printf("opr2: %d\n", opr2);
	return 0;
}