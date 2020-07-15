#include<stdio.h>
int main(void) {
	int arr[5]; //길이가 5인 int형 배열 선언 
	int sum = 0, i;
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50; //arr[5]는 존재 x
	//선언과 동시에 초기화
	int arr1[5] = { 1,2,3,4,5 };
 	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("배열 요소에 저장된 값의 합 : %d \n", sum);
	return 0;
}