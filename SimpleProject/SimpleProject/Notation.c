#include<stdio.h>

int main(void) 
{
	//������ ����� ���ÿ� 16������ 8������ �ʱ�ȭ.
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7�� 10���� ���� �� : %d \n", num1); // %d�� ���������� ����� �ǹ�
	printf("0x43�� 10���� ���� �� : %d \n", num2);
	printf("032�� 10���� ���� �� : %d \n", num3);
	printf("024�� 10���� ���� �� : %d \n", num4);
	return 0;
}