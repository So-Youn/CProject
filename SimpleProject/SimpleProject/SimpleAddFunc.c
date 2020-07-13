#include<stdio.h>

int Add(int num1, int num2) { //전달 인자는 int 형 정수 두개
    return  num1 + num2; //result에 저장된 값을 Add함수를 호출한 영역으로 전달.
}

void ShowAddResult(int num) { //인자 전달 O, 반환 값 X
    printf("덧셈결과 출력: %d \n", num);
}

int ReadNum(void) { //인자 전달 X, 반환 값 O
    int num;
    scanf("%d", &num);
    return num;
}
void HowToUseThisProg(void) {//인자 전달 X, 반환 값 X
    printf("두 개의 정수를 입력하시면 덧셈 출력 \n");
    printf(" 자! 그럼 두개의 정수를 입력하세요 !!! \n");
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