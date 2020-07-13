#include<stdio.h>
// continue: 실행중인 위치에 상관없이 반복문의 조건검사 위치로 이동한다. 
// continue 이후는 생략을 하고 다시 실행을 하게 된다.
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
		

	