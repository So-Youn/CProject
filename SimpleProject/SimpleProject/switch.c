#include<stdio.h>
//�б��� ����� ���� �������� switch������ �����Ǿ�� �Ѵ�.
int main(void)
{
	int num;
	printf("1�̻� 5������ ���� �Է� :");
	scanf("%d", &num);

	switch (num)  //num : switch������ ���޵Ǵ� ������ ����.
	{
	case 1:
		printf("one");
		break;
	case 2:
		printf("two");
		break;
	case 3:
		printf("three");
		break;
	case 4:
		printf("four");
		break;
	case 5:
		printf("five");
		break;
	default:
		printf("I dont know");
	}
	return 0;
}

