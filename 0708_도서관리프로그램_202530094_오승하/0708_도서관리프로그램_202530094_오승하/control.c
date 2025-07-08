#include "std.h"

myarr books;

void con_init() {
	myarr_init(&books);

	file_load();
}
void con_exit() {
	file_save();
}

void con_insert() {
	printf("[���� ����]\n\n");

	int isbn;
	char title[20];
	char author[20];
	int price;

	printf("���� ��ȣ �Է�: ");
	scanf_s("%d", &isbn);

	char dummy = getchar();

	printf("������ �Է�: ");		gets_s(title, sizeof(title));
	
	printf("���� �Է�: ");			gets_s(author, sizeof(author));

	printf("���� ���� �Է�: ");		scanf_s("%d", &price);

	dummy = getchar();
	
	book* pbook = book_create(isbn, title, author, price);
	if (pbook == NULL) {
		printf("���� ���� ����\n");
		return;
	}
	else {
		if (myarr_push_back(&books, pbook) == 1) {
			printf("����Ǿ����ϴ�.\n");
		}
		else {
			printf("���� ����(overflow)\n");
		}
	}
}
void con_select_from_isbn() {
	printf("���� ��ȣ�� �˻�\n\n");

	int isbn;

	printf("���� ��ȣ �Է�: ");
	scanf_s("%d", &isbn);

	char dummy = getchar();

	int idx = isbn_to_idx(isbn);

	if (idx != -1) {
		book* pbook = myarr_get_data(&books, idx);
		book_println(pbook);
	}
	else {
		printf("�ش��ϴ� ������ �����ϴ�.\n");
	}
}
void con_select_from_title() {
	printf("���������� �˻�\n\n");

	char title[20];

	printf("������ �Է�: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);

	if (idx != -1) {
		book* pbook = myarr_get_data(&books, idx);
		book_println(pbook);
	}
	else {
		printf("�ش��ϴ� ������ �����ϴ�.\n");
	}

}
void con_update() {
	printf("���� ���� ����\n\n");

	int isbn;

	printf("���� ��ȣ �Է�: ");
	scanf_s("%d", &isbn);

	char dummy = getchar();

	int idx = isbn_to_idx(isbn);

	if (idx != -1) {
		int price;

		printf("������ ����: ");
		scanf_s("%d", &price);

		dummy = getchar();

		book* pbook = (book*)myarr_get_data(&books, idx);

		book_setPrice(pbook, price);	
		
		printf("����Ǿ����ϴ�.\n");

	}
	else {
		printf("�ش��ϴ� ������ �����ϴ�\n");
	}
}

void con_delete() {
	printf("���� ����\n\n");

	int isbn;

	printf("���� ��ȣ �Է�: ");
	scanf_s("%d", &isbn);

	char dummy = getchar();

	int idx = isbn_to_idx(isbn);

	if (idx != -1) {
		book* pbook = (book*)myarr_get_data(&books, idx);
		book_clear(pbook);

		myarr_erase(&books, idx);

		printf("�����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ������ �����ϴ�\n");
	}

}
void con_printAll() {
	for (int i = 0; i < books.size; i++) {
		printf("[%d] ", i);
		book* pbook = (book*)myarr_get_data(&books, i);
		book_print(pbook);
	}
	printf("------------------------------------------------------------------------\n");
}

int isbn_to_idx(const int isbn) {
	for (int i = 0; i < books.size; i++) {
		book* pbook = (book*)myarr_get_data(&books, i);

		if (pbook->isbn == isbn) {
			return i;
		}
	}
	return -1;
}

int title_to_idx(const char* title) {
	for (int i = 0; i < books.size; i++) {
		book* pbook = (book*)myarr_get_data(&books, i);

		if (strcmp(pbook->title, title) == 0) {
			return i;
		}
	}
	return -1;
}