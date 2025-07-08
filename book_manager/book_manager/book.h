#pragma once

// ���� ������ �����ϴ� ����ü
typedef struct tagbook {
	char title[100];      // å ����
	char author[50];      // ����
	int year;             // �Ⱓ ����
	char publisher[50];   // ���ǻ�
} book;

// �������� book ����ü�� �����ϰ� �ʱ�ȭ
// ������ ��ȯ: ���� �޸� �Ҵ��̹Ƿ� �ݵ�� �����ͷ� �����ؾ� ��
book* book_create(const char* title, const char* author, int year, const char* publisher);

// ���� ������ ���� �ٷ� ���� ���� ���
void book_println(const book* pbook);

// ���� ������ �� �ٷ� ������ ���
void book_print(const book* pbook);

// ������ �Ⱓ ������ ����
void book_setYear(book* pbook, int year);

// ������ ���ǻ� ������ ����
void book_setPublisher(book* pbook, const char* publisher);

// �������� �Ҵ�� ���� ����ü �޸� ����
void book_clear(book* pbook);