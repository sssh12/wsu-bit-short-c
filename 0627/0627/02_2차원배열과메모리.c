#include <stdio.h>

void exam1();
void exam2();

void main() {
	//exam1();
	exam2();
}

void exam1() {
	// arr1의 타입 int(*)[3]
	int arr1[2][3] = { { 1, 2, 3 },
					   { 4, 5, 6 } };

	// arr2의 타입 int(*)[2]
	int arr2[3][2] = { { 1, 2 },
					   { 3, 4 },
					   { 5, 6 } };

	printf("2차원 이동: 0x%p -> 0x%p\n", arr1, arr1 + 1);	// 12 byte 이동
	printf("2차원 이동: 0x%p -> 0x%p\n", arr2, arr2 + 1);	// 8 byte 이동
}

void exam2() {
	// arr1의 타입 int(*)[3]
	int arr1[2][3] = { { 1, 2, 3 },
					   { 4, 5, 6 } };

	// arr2의 타입 int(*)[2]
	int arr2[3][2] = { { 1, 2 },
					   { 3, 4 },
					   { 5, 6 } };

	printf("%zd\n", arr1[1]);		// 4의 주소(1차원)
	printf("%zd\n", arr1[1] + 2);	// 6의 주소(1차원)
	printf("%d\n", arr1[1][2]);		// 6(값)
}