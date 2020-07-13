#include<stdio.h>
//분기의 경우의 수가 많아지면 switch문으로 구현되어야 한다.
int main(void)
{
	int num;
	printf("1이상 5이하의 정수 입력 :");
	scanf("%d", &num);

	switch (num)  //num : switch문으로 전달되는 인자의 정보.
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

