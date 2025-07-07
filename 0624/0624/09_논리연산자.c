/*
&&,  ||,   !
거짓 : 0
  참 : 0을 제외한 모든 숫자  → 1을 대표 숫자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	/*exam5();*/
	exam6();
}

void exam1() {
	int result;

	result = 10 && -1;	// 1
	printf("%d\n", result);

	printf("%d\n", 10 && 0);	// 0

	printf("%d\n", 10 || 0);	// 1

	printf("%d\n", !100);	// 0
}

// 논리 연산자, 비교 연산자 -> 조건식(참과 거짓을 반환하는 식)
// 정수를 입력받고, 입력된 값이 100 이상이면 참, 아니면 거짓을 출력하시오.
void exam2() {
	int num;
	int result;

	printf("정수 입력: ");
	scanf("%d", &num);

	result = (num >= 100);

	printf("결과: %s\n", (result ? "참" : "거짓"));
}

// 정수를 입력받고, 짝수면 "짝수", 홀수면 "홀수"를 출력하시오.
void exam3() {
	int num;
	int result;

	printf("정수 입력: ");
	scanf("%d", &num);

	result = num % 2;

	printf("결과: %s\n", (result ? "홀수" : "짝수"));
}

// 출석 점수, 과제 점수, 수시 평가, 정기 평가를 입력받아,
// 합을 구하고
// 60점 이상이면 "P",  아니면 "F"를 출력하시오.
void exam4() {
	int num1, num2, num3, num4;
	int sum;
	int result;

	printf("출석 점수(20점 만점) 입력: ");	
	scanf("%d", &num1);
	
	printf("과제 점수(20점 만점) 입력: ");	
	scanf("%d", &num2);

	printf("수시 평가 점수(20점 만점) 입력: ");	
	scanf("%d", &num3);
	
	printf("정기 평가 점수(20점 만점) 입력: ");	
	scanf("%d", &num4);
	
	sum = num1 + num2 + num3 + num4;

	result = (sum >= 60);

	printf("합계: %d\n", sum);
	printf("결과: %s\n", (result ? "P" : "F"));
}

// 영문자를 입력받아, 대문자면 "대문자", "소문자"를 출력하시오.
// 단, 반드시 영문자를 출력한다고 가정
void exam5() {
	char ch;
	int result;

	printf("영문자 입력: ");
	scanf("%c", &ch);

	// result = 'A' <= ch <= 'Z'			// 0 or 1 <= 'Z' == 0 or 1 <= 90 -> 1
	result = ('A' <= ch) && (ch <= 'Z');	// 65 <= ch <= 90

	printf("입력 결과: %c\n", ch);
	printf("결과: %s\n", (result ? "대문자" : "소문자"));
}

// 문자를 입력받아,
// 영문자(대소문자)이면 "영문자"
// 아니면 "기호"를 출력하시오.
void exam6() {
	char ch;
	int result;

	printf("문자 입력: ");
	scanf("%c", &ch);

	result = ('A' <= ch) && (ch <= 'Z') ||  // 65 <= ch <= 90
			 ('a' <= ch) && (ch <= 'z');	

	printf("입력 결과: %c\n", ch);
	printf("결과: %s\n", (result ? "영문자" : "기호"));
}

