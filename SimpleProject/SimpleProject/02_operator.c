#include<stdio.h> // 헤더파일 선언

int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2; //후위 감소
	//num1의 선 연산 후 감소.
	//소괄호의 영향을 받지 않고, 다음 문장으로 넘어가야만 비로소 값의 증가 및 감소가 이루어진다.
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	//콤마 연산자
	printf("Hello "), printf("World!\n");
	num1++, num2++;
	printf("%d", num1), printf("%d", num2), printf("\n");
	return 0;
}