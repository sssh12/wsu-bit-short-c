/*
�迭�� Ư�� ����� ���� �ּҸ� ������ �� �ִ�.
*/
#include <stdio.h>

void set_arr1(int* parr, int value);
void print_arr1(int value);

/*
--------------------------------------------
108����		arr[2]		3	***** Ư�� ���
104����		arr[1]		2
100����		arr[0]		1
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