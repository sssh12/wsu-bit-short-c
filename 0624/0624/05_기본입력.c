//scanf ****** 분리기준 공백(' '), 탭(\t),  엔터(\n)
//scanf_s 
/*
"%d" : 입력버퍼로 부터 정수를 가져 올 것
&num : 여기로 전달된 주소에 저장해 줘
scanf("%d", &num);
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();

void main() {
	/*exam1();*/
	/*exam2();*/
	exam3();
}

void exam1() {
	int num;
	printf("정수 입력: ");
	scanf("%d", &num); // *** int* (int의 1차)

	printf("입력 결과: %d\n", num);
}

void exam2() {
	int num1, num2; // 한 줄에 2개의 변수 선언 가능

	printf("정수 입력: ");
	scanf("%d", &num1);

	printf("정수 입력: ");
	scanf("%d", &num2);

	printf("입력 결과: %d, %d\n", num1, num2);
}

void exam3() {
	char ch1, ch2;

	printf("문자 입력: ");
	scanf("%c", &ch1);

	char dummy = getchar(); // 문자 전용 입력 함수, \n 제거

	printf("문자 입력: ");
	scanf("%c", &ch2);

	printf("입력 결과: %c, %c\n", ch1, ch2);
}