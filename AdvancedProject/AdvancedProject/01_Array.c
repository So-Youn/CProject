#include<stdio.h>
int main(void) {
	int arr[5]; //���̰� 5�� int�� �迭 ���� 
	int sum = 0, i;
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; //arr[5]�� ���� x
	//����� ���ÿ� �ʱ�ȭ
	int arr1[5] = { 1,2,3,4,5 };
 	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("�迭 ��ҿ� ����� ���� �� : %d \n", sum);
	return 0;
}