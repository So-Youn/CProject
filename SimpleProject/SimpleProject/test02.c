#include<stdio.h>

double CelToFah(double c)//������ ȭ����
{
	return 1.8 * c + 32;
}
double FahToCel(double f)//ȭ���� ������
{
	return (f - 32) / 1.8;
}
int main(void)
{
	int sel;
	double num;
	printf("1 . ������ ȭ���� 2. ȭ���� ������\n");
	printf("����>>");
	scanf("%d", &sel);

	if (sel == 1)
	{
		printf("���� �Է�:");
		scanf("%lf", &num);
		printf("��ȭ�� ȭ�� : %f\n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("ȭ�� �Է� :");
		scanf("%lf", &num);
		printf("��ȭ�� ���� : %f \n", FahToCel(num));

	}
	else
	{
		printf("���� ���� \n");
	}
	return 0;
}