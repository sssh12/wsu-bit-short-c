#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();

void main() {
	//exam1();
	//exam2();
	exam3();
}

void exam1() {
	int arr[2][3] = { {1, 2, 3},
					  {4, 5, 6} };

	printf("%zd byte\n", sizeof(arr));		// 24 byte
	printf("%zd byte", sizeof(arr[1][0]));	// 4 byte
}

void exam2() {
	int arr[2][3] = { { 1, 2, 3 },
					  { 4, 5, 6 } };

	// 순회
	for (int i = 0; i < 2; i++) {			// 행 0, 1
		for (int j = 0; j < 3; j++) {		// 열 0, 1, 2
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}

void exam3() {
	int arr[2][3] = { { 1, 2, 3 },
					  { 4, 5, 6 } };

	arr[1][0] = 40;

	printf("사용자 입력 arr[1][2]: ");
	scanf("%d", &arr[1][2]);

	// 순회
	for (int i = 0; i < 2; i++) {			// 행 0, 1
		for (int j = 0; j < 3; j++) {		// 열 0, 1, 2
			printf("%-3d", arr[i][j]);
		}
		printf("\n");
	}
}