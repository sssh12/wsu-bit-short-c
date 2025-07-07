#include <stdio.h>

/*
typedef struct tagmyarr myarr;
struct tagmyarr {
	int arr[5];
	int size;
	int max;
}
*/

typedef struct tagmyarr {
	int arr[5];
	int size;
	int max;
} myarr;

// 전역 변수: main 함수 호출 전 생성 -> 전역 정적 메모리(프로그램 시작/종료)
myarr data;

void myarr_init();
int myarr_push_back(int value);
void myarr_print();
int myaddr_erase(int idx);
int myaddr_select(int value);

int main() {
	myarr_init();
	myarr_print();
	
	for (int i = 10; i <= 70; i += 10) {	// 10, 20, 30, 40, 50
		int ret = myarr_push_back(i);	// 배열 add

		if (ret == 0) {
			printf("실패(overflow)\n");
		}
		myarr_print();
	}

	printf("\n검색\n");
	int idx = myaddr_select(20);

	if (idx != -1) {
		printf("검색 결과: %d\n", data.arr[idx]);
	}
	else {
		printf("실패\n");
	}

	printf("\n삭제\n");
	myaddr_erase(1);
	myarr_print();

	for (int i = 0; i < 10; i++) {
		if (myaddr_erase(0) == 0) {
			printf("삭제 실패\n");
		}
		myarr_print();
	}

	return 0;
}

void myarr_init() {
	data.max = 5;
	data.size = 0;
}

// 성공, 실패
int myarr_push_back(int value) {
	if (data.max <= data.size) {
		return 0;
	}
	data.arr[data.size] = value;
	data.size++;

	return 1;
}

void myarr_print() {
	printf("[%d/%d] ", data.size, data.max);

	for (int i = 0; i < data.size; i++) {	// data.size
		printf("%4d", data.arr[i]);
	}
	printf("\n");
}

int myaddr_erase(int idx) {
	// 잘못된 인덱스
	if (idx < 0 || idx >= data.size) {
		return 0;
	}

	for (int i = idx; i < data.size - 1; i++) {
		data.arr[i] = data.arr[i + 1];
	}
	data.size--;
	return 1;
}

// 순차 검색
int myaddr_select(int value) {
	for (int i = 0; i < data.size; i++) {
		if (data.arr[i] == value) {
			return i;
		}
	}

	return -1;
}