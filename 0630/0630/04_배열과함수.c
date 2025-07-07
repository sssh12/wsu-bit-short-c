/*
[���� ����(��, �ּ�)]
*/
#include <stdio.h>

void func1(int* arr);	// int arr[];
void func2(int value, int* addr);

/*
-------------------------------------
108����		arr[2]		3 -> 30
104����		arr[1]		2 -> 20
100����		arr[0]		1 -> 10 -> 11
-------------------------------------
main stack
*/
void main() {
	int arr[3] = { 1, 2, 3 };

	func1(arr);	// �迭�� �̸� ���� ���� -> �ּ� ����

	func2(arr[1], &arr[1]);	// �� ����, �ּ� ����
}

/*
-----------------------------
200����		arr		[100����]
-----------------------------
func1 stack
*/
void func1(int* arr) {
	*arr = 10;			// int = int
	*(arr + 0) = 11;	// int = int
	arr[1] = 20;
	arr[2] = 30;
}

// �迭�� Ư�� ����� ���� �ּҸ� ���� ����
void func2(int value, int* addr) {
	value = 20;		// func2�� value�� ����
	*addr = 20;		// main �Լ��� Ư�� �迭 ����� �� ����
}