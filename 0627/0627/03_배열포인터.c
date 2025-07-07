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
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* parr;
	parr = arr;	// int* = int*

	printf("%p, %p\n", arr, parr);					// ������ �ּ�

	printf("%d, %d\n", arr[2], parr[2]);			// 3, 3

	printf("%d, %d\n", *(arr + 2), *(parr + 2));	// 3, 3

	printf("%d\n", (*parr) + 3);					// * > +  ��� ���� 4
}

void exam2() {
	int arr1[2][3] = { { 1, 2, 3 },		// int (*)[3] <<<<<
					   { 4, 5, 6 } };

	// ������ ���� ����
	int** parr1;						// int **
	int (*parr2)[2];					// int (*)[2]	
	int (*parr3)[3];					// int (*)[3] <<<<<

	// '=': 'int **'�� ���� ���� ������ 'int (*)[3]'��(��) �ٸ��ϴ�.
	// parr1 = arr1; // ����
	parr3 = arr1;	 // OK

	printf("%d, %d\n", arr1[1][1], parr3[1][1]);	// 5, 5

	// �������� ����
	printf("%d, %d\n", arr1[0][4], parr3[0][4]);	// 5, 5
}

void exam3() {
	// 100����, 104����, 108����,
	// 112����, 116����, 120����
	int arr1[2][3] = { { 1, 2, 3 },		
					   { 4, 5, 6 } };

	int (*parr1)[3];
	int* parr2;

	parr1 = arr1 + 1;	// 112
	parr2 = arr1[1];	// int* = int*, 112

	// 5 ���
	printf("%d, %d\n", parr1[0][1], parr1[1][-2]);
	printf("%d\n", parr2[1]);
}