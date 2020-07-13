#include<stdio.h>
//프로그램 사용자로부터 총 5개의 정수를 입력받아서, 그 수의 합을 출력하는 프로그램 작성
//정수는 반드시 1 이상이어야 하며, 만약 1미만의 수가 입력되는 경우에는 이를 인저하지 않고 재입력을 요구한다.
// 1이상의 정수 5개를 입력받을 수 있도록 프로그램 완성!

int main(void)
{
	int sum = 0, num = 0, i = 0;
	while (i < 5) {
		while (num <= 0) { //재입력을 요청하기 위함
			printf("0보다 큰 수를 입력 (%d 번째):", i + 1);
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
		i++;
	}
	printf("총 합 : %d \n", sum);
	return 0;
}