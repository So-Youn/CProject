#include<stdio.h>
int main(void) {
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str); //���ڿ��� �Է¹޾Ƽ� �迭 str�� ����
	printf("�Է� ���� ���ڿ� : %s \n", str);

	printf("���� ���� ���:");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");

	//����ܾ� ���
	char voca[100];
	int len = 0, i;
	char temp;
	printf("���ܾ� �Է� :");
	scanf("%s", voca);

	while (voca[len] != 0)
		len++;
	printf("�Է��� ���ܾ��� ���̴� %d \n", len);

	for (i = 0; i < len / 2; i++) //���ܾ� ������
	{
		temp = voca[i];// ���� ���� ���Ƿ� ����
		voca[i] = voca[(len - i) - 1]; //���� ���� ������ 
		voca[(len - i) - 1] = temp; //���� ���ڸ� �ڷ�
	}
	printf("������ ���ܾ�: %s \n", voca);

	return 0;
}