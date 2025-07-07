#include <stdio.h> // c 언어 표준 h

void exam1();	// 함수 선언
void exam2();	
void exam3();

void main() {
	exam1();	// 함수 호출 -> 흐름에 관여
	exam2();
	exam3();
}

// int 정수, %d (Decimal)
void exam1() {	// 함수 정의
	// 변수 선언 -> 저장 공간 생성 (초기화 하지 않으면 더미값 저장)
	int num1 = 10;	// 1) 선언과 동시에 초기화
	int num2;

	num2 = 20;		// 2) 선언한 이후 대입 연산을 통한 초기화

	// 출력
	printf("num1의 값: %d\n", num1);
	printf("num2의 값: %d\n", num2);
	printf("num1의 값: %d\tnum2의 값: %d\n", num1, num2);
}

// double 실수, %lf, (Long Float)
// 실수형 변수 dnum 선언, 선언 후 대입을 통한 10.123 초기화
// 출력
void exam2() {	
	double dnum;
	dnum = 10.123;

	printf("\ndnum의 값: %.3lf\n", dnum);
}

// char 문자 %c (Character)
// 문자 ch 선언, 선언 후 대입을 통한 'A' 초기화
// 출력
void exam3() {
	char ch;
	ch = 'A';

	printf("\nch의 값: %c\n", ch);
}