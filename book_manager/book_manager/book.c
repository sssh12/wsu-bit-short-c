#include "std.h"

book* book_create(const char* title, const char* author, int year, const char* publisher) {
	book* p = (book*)malloc(sizeof(book));
	if (p == NULL) {
		return NULL;
	}
	
	strcpy_s(p->title, sizeof(p->title), title);
	strcpy_s(p->author, sizeof(p->author), author);
	p->year = year;
	strcpy_s(p->publisher, sizeof(p->publisher), publisher);

	return p;
}

void book_println(const book* pbook) {
	printf("[제  목] %s\n", pbook->title);
	printf("[저  자] %s\n", pbook->author);
	printf("[출간일] %d\n", pbook->year);
	printf("[출판사] %s\n", pbook->publisher);
}

void book_print(const book* pbook) {
	printf("[%s] %s | %d | %s\n", pbook->title, pbook->author, pbook->year, pbook->publisher);
}

void book_setYear(book* pbook, int year) {
	pbook->year = year;
}

void book_setPublisher(book* pbook, const char* publisher) {
	strcpy_s(pbook->publisher, sizeof(pbook->publisher), publisher);
}
void book_clear(book* pbook) {
	free(pbook);
}