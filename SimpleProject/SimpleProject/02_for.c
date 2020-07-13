#include<stdio.h>
//팩토리얼
int main(void)
{
	int num, i;
	int result = 1;//팩토리얼의 계산 결과 저장
	printf("정수 입력 : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		result = result * i;
	printf("%d! = %d \n", num, result);
	return 0;
}
