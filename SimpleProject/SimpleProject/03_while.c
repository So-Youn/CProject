#include<stdio.h>
//While���� ��ø
int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10) //2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1;// ���ο� ���� ����
		while (is < 10) {
			printf("%d * %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}