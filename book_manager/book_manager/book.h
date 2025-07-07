#pragma once

typedef struct tagbook {
	char title[100];
	char author[50];
	int year;
	char publisher[50];
} book;

//포인터(book*)를 반환 / 매개변수로 꼭 사용!
//→ "실제 데이터"를 수정하려면 반드시 주소(포인터)가 필요
//→ 값 복사로는 진짜 데이터가 바뀌지 않음(C언어의 핵심 개념)
book* book_create(const char* title, const char* author, int year, const char* publisher);
void book_println(const book* pbook);
void book_print(const book* pbook);

void book_setYear(book* pbook, int year);
void book_setPublisher(book* pbook, const char* publisher);
void book_clear(book* pbook);