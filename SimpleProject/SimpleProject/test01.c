#include<stdio.h>

int main(void)
{
	int xpos1, ypos1;
	int xpos2, ypos2;
	int area;

	printf("�� ����� x,y ��ǥ:");
	scanf("%d %d ", &xpos1, &ypos1);
	printf("�� �ϴ��� x,y ��ǥ:");
	scanf("%d %d ", &xpos2, &ypos2);
	area = (xpos2 - xpos1) * (ypos2 - ypos1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�̴�. \n", area);

	double num1, num2;
	printf("�� ���� �Ǽ� �Է� : ");
	scanf("%lf %lf", &num1, &num2);
	printf("�� ���� ���� : %f \n", num1 + num2);
	return 0;
}


