#include<stdio.h>
int main(void) {
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[0];  // int * ptr = arr;과 동일한 문장
	// ptr이 arr과 동일한 주소 값ㅇ르 갖도록 하기 위해 첫번째 요소의 주소값 지정.
	printf("%d %d \n", ptr[0], arr[0]); 
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	return 0;
}