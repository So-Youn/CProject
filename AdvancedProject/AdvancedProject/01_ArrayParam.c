#include<stdio.h>
void ShowArrayElem(int* param, int len) {
	int i;
	for (i = 0; i < len; i++) 
		printf("%d ", param[i]);
	printf("\n");
}
void AddArayElem(int* param, int len, int add) {
	//int param[]
	int i;
	for (i = 0; i < len; i++)
		param[i] += add; //º¯°æ
}
int main(void)
{
	int arr[3] = { 1,2,3 };
	//int arr2[5] = { 4,5,6,7,8 };
	AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));
	//ShowArrayElem(arr2, sizeof(arr2) / sizeof(int));
	AddArayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));
	AddArayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));
	return 0;
}