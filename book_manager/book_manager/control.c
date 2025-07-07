#include "std.h"

myarr books;		// 도서 배열(전역)

void con_init() {
	myarr_init(&books);	// 배열 초기화
	file_load();
}

void con_exit() {
	file_save();
	// 필요시 동적 메모리 해제 등
}

void con_insert() {
	printf("도서 등록\n\n");

	char title[100], author[50], publisher[50];
	int year;

	printf("책 제목: ");		gets_s(title, sizeof(title));
	printf("저자: ");			gets_s(author, sizeof(author));
	printf("출판연도: ");		scanf_s("%d", &year);
	char dummy = getchar();
	printf("출판사: ");			gets_s(publisher, sizeof(publisher));

	book* b = book_create(title, author, year, publisher);
	if (b == NULL) {
		printf("회원 생성 실패\n");
		return;
	}
	else {
		if (myarr_push_back(&books, b) == 1) {
			printf("등록 완료\n");
		}
		else {
			printf("등록 실패(overflow)\n");
		}
		
	}
	

}
void con_select() {
	printf("도서 조회\n\n");

	char title[100];
	printf("검색할 책 제목: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);
	if (idx != -1) {
		book* b = (book*)myarr_get_data(&books, idx);
		book_println(b);
	}
	else {
		printf("해당 제목의 도서가 없습니다.\n");
	}
	
}
void con_update() {
	printf("도서 수정\n\n");

	char title[100];
	printf("수정할 책 제목: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);
	if (idx != -1) {
		int year;
		char publisher[50];

		printf("새 출간일: "); scanf_s("%d", &year);

		char dummy = getchar();

		printf("새 출판사: "); gets_s(publisher, sizeof(publisher));

		book* b = (book*)myarr_get_data(&books, idx);

		book_setYear(b, year);
		book_setPublisher(b, publisher);

		printf("수정 성공\n");
	}
	else {
		printf("해당 제목의 도서가 없습니다.\n");
	}
}
void con_delete() {
	printf("도서 삭제\n\n");

	char title[100];

	printf("삭제할 책 입력: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);

	if (idx != -1) {
		book* b = (book*)myarr_get_data(&books, idx);
		book_clear(b);	// 힙 메모리 생성

		myarr_erase(&books, idx);	// i + 1의 주소를 i에 저장

		printf("삭제되었습니다.\n");
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}
}
void con_printAll() {
	printf("전체 도서 목록\n\n");

	for (int i = 0; i < books.size; i++) {
		book* b = (book*)myarr_get_data(&books, i);
		book_print(b);
	}
	printf("\n----------------------\n");
}

int title_to_idx(const char* title) {
	for (int i = 0; i < books.size; i++) {
		book* b = (book*)myarr_get_data(&books, i);

		if (strcmp(b->title, title) == 0) {
			return i;
		}
	}
	return -1;
}