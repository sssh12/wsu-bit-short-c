/*
���� ������ ���� -> ���� ���� ����
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

// ���� ������ ũ��
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
�ּ�		�ĺ���		�����
--------------------------------
112����		num			1 -> 10
108����		arr[2]		4 -> 44
104����		arr[1]		3 -> 30
100����		arr[0]		2 �Է�?
--------------------------------
*/
void exam2() {
	int arr[3] = { 2, 3, 4 };
	int num = 1;

	num = 10;
	arr[1] = 30;

	arr[2] = arr[1] + arr[2] + num;

	printf("%d, %d\n", num, arr[1]);	// 10, 30

	printf("�Է�: ");
	scanf("%d", &num);		// *** 112���� (���� ������ �ּ�)

	printf("�Է�: ");
	scanf("%d", &arr[0]);	// 100����
}

// �迭�� �ݺ���(�迭�� �ε��� �̵�)
void exam3() {
	int arr[10];	// int�� 10�� �����ϴ� 1���� �迭 ���� -> 40 byte �޸� ����

	// 1 ~ 10���� ������� ����
	for (int i = 0; i < 10; i++) {	// 0...9
		arr[i] = i + 1;
	}

	for (int i = 0; i < 10; i++) {
		printf("%-3d", arr[i]);
	}

	printf("\n");
		
}

// ���� 5���� �Է� �޾� �հ� ����� ���Ͻÿ�.
void exam4() {
	int arr[5];		// in
	int sum = 0;	// out, in
	float average;	// out

	for (int i = 0; i < 5; i++) {
		printf("���� �Է�: ");
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 5; j++) {
		sum += arr[j];	// ***
	}

	average = sum / 5.0f;

	printf("��: %d\n", sum);
	printf("���: %.1f\n", average);
}

void exam5() {
	srand((unsigned int)time(NULL));	// <time.h>

	// ���� 100���� �����ϴ� �迭 ����, ��� ���� 0���� �ʱ�ȭ
	int arr[100] = { 0 };

	// ������ �ʱ�ȭ
	for (int i = 0; i < 100; i++) {
		arr[i] = rand() % 99 + 1;	// 0 ~ 98 -> 1 ~ 99	<stdlib.h>
	}

	// ���
	for (int i = 0; i < 100; i++) {
		printf("%3d", arr[i]);
	}

	printf("\n");
}