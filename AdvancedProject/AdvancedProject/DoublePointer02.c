#include<stdio.h>
/* void SwqpIntPtr(int* p1, int* p2) { //ptr1�� ptr2�� ����Ű�� ����� �����Ű�� ���ߴ�.
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}*/
//p1�� ptr1�� �����̰�, p2�� ptr2�� �����̴�.
void SwqpIntPtr(int** dp1, int** dp2) {
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}
int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);

	SwqpIntPtr(ptr1, ptr2);
	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
	return 0;

}