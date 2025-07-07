/*
변수 선언의 문법 -> 저장 공간 생성
int arr1[5];
char arr2[3];
float arr3[4];
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>		// printf(), scanf()
#include <stdlib.h>		// rand()
#include <time.h>		// time()

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();

void main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	exam5();
}

// 저장 공간의 크기
void exam1() {
	int num;
	char ch;
	float fNum;

	int arr1[5];
	char arr2[3];
	float arr3[4];

	printf("%zd byte \t %zd byte\n", sizeof(int), sizeof(num));			// 4 byte   4 byte
	printf("%zd byte \t %zd byte\n", sizeof(char), sizeof(ch));			// 1 byte   1 byte
	printf("%zd byte \t %zd byte\n", sizeof(float), sizeof(fNum));		// 4 byte   4 byte

	printf("%zd byte \t %zd byte\n", sizeof(int), sizeof(arr1));		// 4 byte   20 byte
	printf("%zd byte \t %zd byte\n", sizeof(char), sizeof(arr2));		// 1 byte   3 byte
	printf("%zd byte \t %zd byte\n", sizeof(float), sizeof(arr3));		// 4 byte   16 byte
}

/*
주소		식별자		저장소
--------------------------------
112번지		num			1 -> 10
108번지		arr[2]		4 -> 44
104번지		arr[1]		3 -> 30
100번지		arr[0]		2 입력?
--------------------------------
*/
void exam2() {
	int arr[3] = { 2, 3, 4 };
	int num = 1;

	num = 10;
	arr[1] = 30;

	arr[2] = arr[1] + arr[2] + num;

	printf("%d, %d\n", num, arr[1]);	// 10, 30

	printf("입력: ");
	scanf("%d", &num);		// *** 112번지 (저장 공간의 주소)

	printf("입력: ");
	scanf("%d", &arr[0]);	// 100번지
}

// 배열과 반복문(배열의 인덱스 이동)
void exam3() {
	int arr[10];	// int를 10개 저장하는 1차원 배열 선언 -> 40 byte 메모리 생성

	// 1 ~ 10까지 순서대로 저장
	for (int i = 0; i < 10; i++) {	// 0...9
		arr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		printf("%-3d", arr[i]);
	}

	printf("\n");
		
}

// 정수 5개를 입력 받아 합과 평균을 구하시오.
void exam4() {
	int arr[5];		// in
	int sum = 0;	// out, in
	float average;	// out

	for (int i = 0; i < 5; i++) {
		printf("정수 입력: ");
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 5; j++) {
		sum += arr[j];	// ***
	}

	average = sum / 5.0f;

	printf("합: %d\n", sum);
	printf("평균: %.1f\n", average);
}

void exam5() {
	srand((unsigned int)time(NULL));	// <time.h>

	// 정수 100개를 저장하는 배열 선언, 모든 값을 0으로 초기화
	int arr[100] = { 0 };

	// 난수로 초기화
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 99 + 1;	// 0 ~ 98 -> 1 ~ 99	<stdlib.h>
	}

	// 출력
	for (int i = 0; i < 100; i++) {
		printf("%3d", arr[i]);
	}

	printf("\n");
}