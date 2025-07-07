/*
배열의 특정 요소의 값과 주소를 전달할 수 있다.
*/
#include <stdio.h>

void set_arr1(int* parr, int value);
void print_arr1(int value);

/*
--------------------------------------------
108번지		arr[2]		3	***** 특정 요소
104번지		arr[1]		2
100번지		arr[0]		1
--------------------------------------------
*/
int main() {
	int arr[3] = { 1, 2, 3 };

	set_arr1(&arr[2], 30);
	print_arr1(arr[2]);

	return 0;
}

void set_arr1(int* parr, int value) {
	*parr = value;
}

void print_arr1(int value) {
	printf("%d\n", value);
}