#include<stdio.h>
//���丮��
int main(void)
{
	int num, i;
	int result = 1;//���丮���� ��� ��� ����
	printf("���� �Է� : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;
	printf("%d! = %d \n", num, result);
	return 0;
}
