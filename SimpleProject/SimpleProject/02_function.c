#include<stdio.h>
int AbsoCompare(int num1, int num2); //절댓값이 큰 정수 반환
int GetAbsoValue(int num); //전달인자의 절대값을 반환

int main(void)
{
	int num1, num2;
	printf(" 두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);
	printf("%d 와 %d중 절댓값이 큰 정수 : %d \n", num1, num2, AbsoCompare(num1, num2));
	return 0;
}
int AbsoCompare(int num1, int num2) { //함수 내에서 또 다른 함수 호출
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}
int GetAbsoValue(int num){
	if (num < 0)
		return num * (-1);
	else
		return num;

}