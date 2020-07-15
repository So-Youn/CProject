#include<stdio.h>
int main(void) {
	int arr[3] = { 0,1,2 };
	printf("배열의 이름: %p \n", arr);  //%p 주소 값 출력에 사용되는 서식문자.
	printf("첫 번째 요소 : %p \n", &arr[0]);
	printf("두 번째 요소 : %p \n", &arr[1]);
	printf("세 번째 요소 : %p \n", &arr[2]);
	return 0;
}