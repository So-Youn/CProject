#include<stdio.h>

int main(void) {
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);

	//����� �� ��ȯ
	int num1 = 3, num2 = 4;
	double divResult;
	//divResult = (double)num1 / num2;
	divResult = 3.0 / num2;
	printf("������ ���: %f \n", divResult);
	// ������ ���: 0.000000
	//���� ����� �ڷ����� �ǿ������� �ڷ����� ��ġ�ϱ� ������, �������� ����� 0�� �ǰ�. �� ����  double ������ ����ȯ�ȴ�.

	return 0;

}