#include<stdio.h>

int main(void) {
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);

	//명시적 형 변환
	int num1 = 3, num2 = 4;
	double divResult;
	//divResult = (double)num1 / num2;
	divResult = 3.0 / num2;
	printf("나눗셈 결과: %f \n", divResult);
	// 나눗셈 결과: 0.000000
	//연산 결과의 자료형은 피연산자의 자료형과 일치하기 때문에, 나눗셈의 결과는 0이 되고. 이 값이  double 형으로 형변환된다.

	return 0;

}