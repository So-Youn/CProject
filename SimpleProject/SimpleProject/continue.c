#include<stdio.h>
// continue: �������� ��ġ�� ������� �ݺ����� ���ǰ˻� ��ġ�� �̵��Ѵ�. 
// continue ���Ĵ� ������ �ϰ� �ٽ� ������ �ϰ� �ȴ�.
int main(void)
{
	int num;
	printf("start! ");
	for (num = 1; num < 20; num++) {
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}
		

	