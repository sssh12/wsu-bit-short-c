#define _CRT_SECURE_NO_WARNINGS
#define ARR_SIZE 12
#define ARR_MAX 1000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exam1();
void exam2();
void exam3();

void main() {
	exam1();
	exam2();
	exam3();
}

// 1. 배열을 선언하고 반복문을 활용하여 아래와 같이 초기화 하시오.
void exam1() {
	int arr1[10];
	int arr2[10];
	int arr3[26];

	printf("[exam1]\n");

	for (int i = 0; i < 10; i++) {
		arr1[i] = 0;

	}
	for (int i = 0; i < 10; i++) {
		printf("%-3d", arr1[i]);
	}

	printf("\n");

	for (int i = 0; i < 10; i++) {
		arr2[i] = i + 1;

	}
	for (int i = 0; i < 10; i++) {
		printf("%-3d", arr2[i]);
	}

	printf("\n");

	for (int i = 0; i < 26; i++) {
		arr3[i] = 'A' + i;
	}
	for (int i = 0; i < 26; i++) {
		printf("%-3c", arr3[i]);
	}

	printf("\n\n");
}

//2. 12개의 요소를 갖는 int 형 배열을 선언하고 난수로 채우시오.
//단 난수의 범위는 1~99 사이의 값
//
//출력) 첨자 : 0  1  2  3  4  5  6  7  8  9  10  11
//—------------------------------------------------------------
//요소 : 9  4 19  4 18  6  2  4 12  14 10  16   //저장된 난수 출력
void exam2() {
	srand((unsigned int)time(NULL));

	int arr[ARR_MAX];
	int sum = 0;
	float average;

	printf("[exam2]\n");

	for (int i = 0; i < ARR_SIZE; i++) {
		
		arr[i] = rand() % 99 + 1;
		sum += arr[i];
	}

	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%-5d", i);
	}
	printf("\n-----------------------------------------------------------\n");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%-5d", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < ARR_SIZE; i++) {
		arr[i] *= 2;
		sum += arr[i];
	}
	printf("\n");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("%-5d", arr[i]);
	}
	printf("\n\n");

	average = (float)sum / ARR_SIZE;
	printf("sum\t:%5d\n", sum);
	printf("average : %.1f\n", average);

	printf("\n");
}

void exam3() {
	int numArr[ARR_MAX];
	int sum = 0;
	float average;

	printf("[exam3]\n");

	for (int i = 0; i < ARR_MAX; i++) {
		printf("정수 입력: ");
		scanf("%d", numArr + i);
		if (numArr[i] == -1) {
			break;
		}
	}

	int count = 0;
	for (int i = 0; numArr[i] != -1; i++, count++) {
		sum += numArr[i];
	}

	average = (float)sum / count;

	printf("합\t: %-3d\n", sum);
	printf("평균\t: %.1f\n", average);
}