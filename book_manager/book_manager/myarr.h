#pragma once

// 도서(혹은 다른 타입) 포인터를 저장할 수 있는 배열 구조체
#define ARR_MAX 100

typedef struct tagmyarr {
	void* arr[ARR_MAX]; // void*로 선언하여 다양한 타입의 포인터 저장 가능
	int size;           // 현재 저장된 데이터 개수
	int max;            // 최대 저장 가능 개수(상수)
} myarr;

// 배열을 초기화(사이즈 0으로)
void myarr_init(myarr* parr);		

// 배열 끝에 새 데이터를 추가(포인터로 저장)
int myarr_push_back(myarr* parr, void* value);

// 지정 인덱스의 데이터를 삭제(뒤의 데이터들을 앞으로 당김)
int myarr_erase(myarr* parr, int idx);

// 지정 인덱스의 데이터(포인터) 반환
void* myarr_get_data(myarr* parr, int idx);