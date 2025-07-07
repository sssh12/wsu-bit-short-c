/*
char 저장
*/
#include <stdio.h>

typedef struct tagmyarr {
	char arr[5];
	int size;
	int max;
} myarr;

void myarr_init(myarr* pdata);
int myarr_push_back(myarr* pdata, char value);
void myarr_print(const myarr* pdata);
int myaddr_erase(myarr* pdata, int idx);
int myaddr_select(const myarr* pdata, char value);

int main() {
	myarr data;

	myarr_init(&data);
	myarr_print(&data);

	for (int i = 'A'; i <= 'G'; i++) {	// 10, 20, 30, 40, 50
		int ret = myarr_push_back(&data, i);	// 배열 add

		if (ret == 0) {
			printf("실패(overflow)\n");
		}
		myarr_print(&data);
	}

	printf("\n검색\n");
	int idx = myaddr_select(&data, 'C');

	if (idx != -1) {
		printf("검색 결과: %c\n", data.arr[idx]);
	}
	else {
		printf("실패\n");
	}

	printf("\n삭제\n");
	myaddr_erase(&data, 1);
	myarr_print(&data);

	for (int i = 0; i < 10; i++) {
		if (myaddr_erase(&data ,0) == 0) {
			printf("삭제 실패\n");
		}
		myarr_print(&data);
	}

	return 0;
}

void myarr_init(myarr* pdata) {
	pdata->max = 5;
	pdata->size = 0;
}

// 성공, 실패
int myarr_push_back(myarr* pdata, char value) {
	if (pdata->max <= pdata->size) {
		return 0;
	}
	pdata->arr[pdata->size] = value;
	pdata->size++;

	return 1;
}

void myarr_print(const myarr* pdata) {
	printf("[%d/%d] ", pdata->size, pdata->max);

	for (int i = 0; i < pdata->size; i++) {	// data.size
		printf("%4c", pdata->arr[i]);
	}
	printf("\n");
}

int myaddr_erase(myarr* pdata, int idx) {
	// 잘못된 인덱스
	if (idx < 0 || idx >= pdata->size) {
		return 0;
	}

	for (int i = idx; i < pdata->size - 1; i++) {
		pdata->arr[i] = pdata->arr[i + 1];
	}
	pdata->size--;
	return 1;
}

// 순차 검색
int myaddr_select(const myarr* pdata, char value) {
	for (int i = 0; i < pdata->size; i++) {
		if (pdata->arr[i] == value) {
			return i;
		}
	}

	return -1;
}