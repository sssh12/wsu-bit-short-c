#pragma once

typedef struct tagbook {
	int isbn;
	char title[20];
	char author[20];
	int price;
} book;

book* book_create(int isbn, const char* title, const char* author, int price);
void book_println(const book* pbook);
void book_print(const book* pbook);

void book_setPrice(book* pbook, int price);
void book_clear(book* pbook);
