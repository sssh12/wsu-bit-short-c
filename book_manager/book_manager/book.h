#pragma once

typedef struct tagbook {
	char title[100];
	char author[50];
	int year;
	char publisher[50];
} book;

//������(book*)�� ��ȯ / �Ű������� �� ���!
//�� "���� ������"�� �����Ϸ��� �ݵ�� �ּ�(������)�� �ʿ�
//�� �� ����δ� ��¥ �����Ͱ� �ٲ��� ����(C����� �ٽ� ����)
book* book_create(const char* title, const char* author, int year, const char* publisher);
void book_println(const book* pbook);
void book_print(const book* pbook);

void book_setYear(book* pbook, int year);
void book_setPublisher(book* pbook, const char* publisher);
void book_clear(book* pbook);