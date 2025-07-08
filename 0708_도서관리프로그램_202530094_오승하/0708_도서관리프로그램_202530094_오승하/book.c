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
	printf("[������ȣ]: %d\n", pbook->isbn);
	printf("[�� �� ��]: %s\n", pbook->title);
	printf("[��    ��]: %s\n", pbook->author);
	printf("[��    ��]: %d\n", pbook->price);
}

void book_print(const book* pbook) {
	printf("���� ��ȣ: %d \t ������: %s \t ����: %s \t ����: %d\n", pbook->isbn, pbook->title, pbook->author, pbook->price);
}

void book_setPrice(book* pbook, int price) {
	pbook->price = price;
}

void book_clear(book* pbook) {
	free(pbook);
}
