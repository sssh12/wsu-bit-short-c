#include "std.h"

book* book_create(int isbn, const char* title, const char* author, int price) {
	book* pbook = (book*)malloc(sizeof(book));
	if (pbook == NULL) {
		return NULL;
	}

	pbook->isbn = isbn;
	strcpy_s(pbook->title, sizeof(pbook->title), title);
	strcpy_s(pbook->author, sizeof(pbook->author), author);
	pbook->price = price;

	return pbook;
}
void book_println(const book* pbook) {
	printf("[도서번호]: %d\n", pbook->isbn);
	printf("[도 서 명]: %s\n", pbook->title);
	printf("[저    자]: %s\n", pbook->author);
	printf("[가    격]: %d\n", pbook->price);
}

void book_print(const book* pbook) {
	printf("도서 번호: %d \t 도서명: %s \t 저자: %s \t 가격: %d\n", pbook->isbn, pbook->title, pbook->author, pbook->price);
}

void book_setPrice(book* pbook, int price) {
	pbook->price = price;
}

void book_clear(book* pbook) {
	free(pbook);
}
