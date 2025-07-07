/*
배열과 함수 호출
1) 배열의 이름은 주소 -> 배열의 이름 전달: 주소 전달
   배열의 이름으로 값 전달 불가능
   인자 전달
   - 값  : 복사
   - 주소: 원본 변경
*/
#include <stdio.h>

// 배열의 시작 주소와 요소의 개수를 전달한다.
void init_arr(int* parr, int size);

// 만약, 원본의 값을 변경 X: const를 활용한다.
void print_arr(const int* parr, int size);

int main() {
	int arr[1000];

	// 1 ~ 값 저장
	init_arr(arr, 1000);

	// 배열 요소의 값 출력
	print_arr(arr, 1000);

	return 0;
}

void init_arr(int* parr, int size) {
	for (int i = 0; i < size; i++) {
		parr[i] = i + 1;	// main 함수의 배열
	}
}

void print_arr(const int* parr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%-5d", parr[i]);	// main 함수의 배열
	}
	printf("\n");
}