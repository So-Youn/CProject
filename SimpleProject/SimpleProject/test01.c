#include<stdio.h>

int main(void)
{
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("좌 상단의 x,y 좌표:");
	scanf("%d %d ", &xpos1, &ypos1);
	printf("우 하단의 x,y 좌표:");
	scanf("%d %d ", &xpos2, &ypos2);
	area = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("두 점이 이루는 직사각형의 넓이는 %d이다. \n", area);

	double num1, num2;
	printf("두 개의 실수 입력 : ");
	scanf("%lf %lf", &num1, &num2);
	printf("두 수의 덧셈 : %f \n", num1 + num2);
	return 0;
}


