#include<stdio.h>
int main(void) {
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[ ] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기 : %d \n", sizeof(arr1)); //배열의 이름을 대상으로 하는 sizeof의 결과는 '바이트단위의 배열크기' 반환
	printf("배열 arr2의 크기 : %d \n", sizeof(arr2));
	printf("배열 arr3의 크기 : %d \n", sizeof(arr3));
	
	ar1Len = sizeof(arr1) / sizeof(int);  //배열 arr1의 길이 계산
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d ", arr1[i]);
	printf("\n");
	for (i = 0; i < ar2Len; i++)
		printf("%d ", arr2[i]);
	printf("\n");
	for (i = 0; i < ar3Len; i++)
		printf("%d ", arr3[i]);
	printf("\n");


	//선언과 동시에 초기화 - > 출력
	char str[] = { 'G', 'o','o','d',' ','m','o','r','n','i','n','g' };
	int arrLen = sizeof(str) / sizeof(char);

	for (i = 0; i < arrLen; i++)
		printf("%c", str[i]);
	printf("\n");
	return 0;

}