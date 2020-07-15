#include<stdio.h>
int main(void) {
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str); //문자열을 입력받아서 배열 str에 저장
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력:");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	//영어단어 출력
	char voca[100];
	int len = 0, i;
	char temp;
	printf("영단어 입력 :");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;
	printf("입력한 영단어의 길이는 %d \n", len);

	for (i = 0; i < len / 2; i++) //영단어 뒤집기
	{
		temp = voca[i];// 앞의 문자 임의로 저장
		voca[i] = voca[(len - i) - 1]; //뒤의 문자 앞으로 
		voca[(len - i) - 1] = temp; //앞의 문자를 뒤로
	}
	printf("뒤집힌 영단어: %s \n", voca);

	return 0;
}