#include<stdio.h>
int main(void) {
	char str[50] = "I like C programming";
	printf("string : %s \n", str);

	str[8] = '\0'; //9��° ��ҿ� null ���� ����
	printf("string : %s \n", str);

	str[6] = '\0'; //7��° ��ҿ� null ���� ����
	printf("string : %s \n", str);

	str[1] = '\0'; //2��° ��ҿ� null ���� ����
	printf("string : %s \n", str);
	return 0;
}