//실습 3. 아래 구문에 해당하는 함수를 구현하시오.
//
//int  main()
//{
//    int arr[5] = { 1, 2, 3, 4, 5 };
//
//    input_number(arr, 2, 30);   //arr 2의 인덱스 값을 30으로 변경
//
//    int num = get_number(arr, 2);  //arr 2의 인덱스 값을 반환 
//
//    printf(“ % d\n”, num);   //30출력
//}
#include <stdio.h>

void input_number(int* parr, int index, int value);
int get_number(int* parr, int index);

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	input_number(arr, 2, 30);	// arr 2의 인덱스 값을 30으로 변경

	int num = get_number(arr, 2);	// arr 2의 인덱스 값을 반환

	printf("%d\n", num);
}

void input_number(int* parr, int index, int value) {
	parr[index] = value;
}

int get_number(int* parr, int index) {
	int num;
	num = parr[index];
	return num;
}