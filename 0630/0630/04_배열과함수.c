/*
[인자 전달(값, 주소)]
*/
#include <stdio.h>

void func1(int* arr);	// int arr[];
void func2(int value, int* addr);

/*
-------------------------------------
108번지		arr[2]		3 -> 30
104번지		arr[1]		2 -> 20
100번지		arr[0]		1 -> 10 -> 11
-------------------------------------
main stack
*/
void main() {
	int arr[3] = { 1, 2, 3 };

	func1(arr);	// 배열의 이름 인자 전달 -> 주소 전달

	func2(arr[1], &arr[1]);	// 값 전달, 주소 전달
}

/*
-----------------------------
200번지		arr		[100번지]
-----------------------------
func1 stack
*/
void func1(int* arr) {
	*arr = 10;			// int = int
	*(arr + 0) = 11;	// int = int
	arr[1] = 20;
	arr[2] = 30;
}

// 배열의 특정 요소의 값과 주소를 전달 받음
void func2(int value, int* addr) {
	value = 20;		// func2의 value값 변경
	*addr = 20;		// main 함수의 특정 배열 요소의 값 변경
}