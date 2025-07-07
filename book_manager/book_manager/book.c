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
	printf("[��  ��] %s\n", pbook->title);
	printf("[��  ��] %s\n", pbook->author);
	printf("[�Ⱓ��] %d\n", pbook->year);
	printf("[���ǻ�] %s\n", pbook->publisher);
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