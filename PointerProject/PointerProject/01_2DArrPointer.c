# include<stdio.h>
int main(void) {
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1 : %p \n", arr1);
	printf("arr1+1 : %p \n", arr1 + 1); //8증가
	printf("arr1+2 : %p \n", arr1 + 2);

	printf("arr2: %p \n", arr2);
	printf("arr2+1: %p \n", arr2 + 1);
	//2차원 배열이름을 대상으로 증가 및 감소 연산을 할 경우, 연산 결과는 각 행의 첫번째 요소의 주소 값이 된다.
	return 0;
}