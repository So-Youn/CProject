#include<stdio.h>
void Swap(int* ptr1, int* ptr2) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d \n ", num1, num2);
	Swap(&num1, &num2);
	printf("num1 num2 : %d %d \n ", num1, num2);
	//num1, num2에 저장된 값이 서로 바뀜을 알 수 있다.
	return 0; b
}