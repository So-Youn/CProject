#include<stdio.h>
//While문의 중첩
int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10) //2단부터 9단까지 반복
	{
		is = 1;// 새로운 단의 시작
		while (is < 10) {
			printf("%d * %d = %d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}