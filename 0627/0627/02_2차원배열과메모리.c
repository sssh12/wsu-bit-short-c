#include <stdio.h>

void exam1();
void exam2();

void main() {
	//exam1();
	exam2();
}

void exam1() {
	// arr1�� Ÿ�� int(*)[3]
	int arr1[2][3] = { { 1, 2, 3 },
					   { 4, 5, 6 } };

	// arr2�� Ÿ�� int(*)[2]
	int arr2[3][2] = { { 1, 2 },
					   { 3, 4 },
					   { 5, 6 } };

	printf("2���� �̵�: 0x%p -> 0x%p\n", arr1, arr1 + 1);	// 12 byte �̵�
	printf("2���� �̵�: 0x%p -> 0x%p\n", arr2, arr2 + 1);	// 8 byte �̵�
}

void exam2() {
	// arr1�� Ÿ�� int(*)[3]
	int arr1[2][3] = { { 1, 2, 3 },
					   { 4, 5, 6 } };

	// arr2�� Ÿ�� int(*)[2]
	int arr2[3][2] = { { 1, 2 },
					   { 3, 4 },
					   { 5, 6 } };

	printf("%zd\n", arr1[1]);		// 4�� �ּ�(1����)
	printf("%zd\n", arr1[1] + 2);	// 6�� �ּ�(1����)
	printf("%d\n", arr1[1][2]);		// 6(��)
}