#pragma once

// 포인터 배열의 최대 크기
#define ARR_MAX 100

typedef struct tagmyarr {
	void* arr[ARR_MAX];	// 어떤 타입 포인터든 저장 가능(확장성)
	int size;			// 현재 저장된 데이터 개수
	int max;			// 최대 저장 가능 개수(상수)

} myarr;

// 배열(리스트) 구조체를 초기화 하는 함수 선언
void myarr_init(myarr* parr);
int myarr_push_back(myarr* parr, void* value); // 새 데이터 추가(주소!)
int myarr_erase(myarr* parr, int idx);	// 삭제
void* myarr_get_data(myarr* parr, int idx);	// idx번째 데이터 반환