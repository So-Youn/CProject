#include<stdio.h> // ������� ����

int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2; //���� ����
	//num1�� �� ���� �� ����.
	//�Ұ�ȣ�� ������ ���� �ʰ�, ���� �������� �Ѿ�߸� ��μ� ���� ���� �� ���Ұ� �̷������.
	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	//�޸� ������
	printf("Hello "), printf("World!\n");
	num1++, num2++;
	printf("%d", num1), printf("%d", num2), printf("\n");
	return 0;
}