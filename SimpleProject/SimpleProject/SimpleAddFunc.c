#include<stdio.h>

int Add(int num1, int num2) { //���� ���ڴ� int �� ���� �ΰ�
    return  num1 + num2; //result�� ����� ���� Add�Լ��� ȣ���� �������� ����.
}

void ShowAddResult(int num) { //���� ���� O, ��ȯ �� X
    printf("������� ���: %d \n", num);
}

int ReadNum(void) { //���� ���� X, ��ȯ �� O
    int num;
    scanf("%d", &num);
    return num;
}
void HowToUseThisProg(void) {//���� ���� X, ��ȯ �� X
    printf("�� ���� ������ �Է��Ͻø� ���� ��� \n");
    printf(" ��! �׷� �ΰ��� ������ �Է��ϼ��� !!! \n");
}
int main(void) {
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
    result = Add(num1, num2);
    ShowAddResult(result);
    return 0;
}