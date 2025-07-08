#pragma once

// 도서 정보를 저장하는 구조체
typedef struct tagbook {
	char title[100];      // 책 제목
	char author[50];      // 저자
	int year;             // 출간 연도
	char publisher[50];   // 출판사
} book;

// 동적으로 book 구조체를 생성하고 초기화
// 포인터 반환: 동적 메모리 할당이므로 반드시 포인터로 관리해야 함
book* book_create(const char* title, const char* author, int year, const char* publisher);

// 도서 정보를 여러 줄로 보기 좋게 출력
void book_println(const book* pbook);

// 도서 정보를 한 줄로 간단히 출력
void book_print(const book* pbook);

// 도서의 출간 연도만 수정
void book_setYear(book* pbook, int year);

// 도서의 출판사 정보만 수정
void book_setPublisher(book* pbook, const char* publisher);

// 동적으로 할당된 도서 구조체 메모리 해제
void book_clear(book* pbook);