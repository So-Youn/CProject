#include<stdio.h>
//포인터 연산
int main(void) {
	int arr[3] = { 11,22,33 };
	int* ptr = arr;
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2)); //ptr+0은 *ptr과 같다.
	printf("%d %d %d \n", ptr[0], ptr[1], ptr[2]);
	printf("%d %d %d \n", *(arr+0), *(arr + 1), *(arr + 2)); //*(arr+0)은 *arr과 같다.
	printf("%d %d %d \n", arr[0], arr[1], arr[2]);
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	return 0;
}
