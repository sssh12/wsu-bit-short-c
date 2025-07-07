#include "std.h"

myarr books;		// ���� �迭(����)

void con_init() {
	myarr_init(&books);	// �迭 �ʱ�ȭ
	file_load();
}

void con_exit() {
	file_save();
	// �ʿ�� ���� �޸� ���� ��
}

void con_insert() {
	printf("���� ���\n\n");

	char title[100], author[50], publisher[50];
	int year;

	printf("å ����: ");		gets_s(title, sizeof(title));
	printf("����: ");			gets_s(author, sizeof(author));
	printf("���ǿ���: ");		scanf_s("%d", &year);
	char dummy = getchar();
	printf("���ǻ�: ");			gets_s(publisher, sizeof(publisher));

	book* b = book_create(title, author, year, publisher);
	if (b == NULL) {
		printf("ȸ�� ���� ����\n");
		return;
	}
	else {
		if (myarr_push_back(&books, b) == 1) {
			printf("��� �Ϸ�\n");
		}
		else {
			printf("��� ����(overflow)\n");
		}
		
	}
	

}
void con_select() {
	printf("���� ��ȸ\n\n");

	char title[100];
	printf("�˻��� å ����: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);
	if (idx != -1) {
		book* b = (book*)myarr_get_data(&books, idx);
		book_println(b);
	}
	else {
		printf("�ش� ������ ������ �����ϴ�.\n");
	}
	
}
void con_update() {
	printf("���� ����\n\n");

	char title[100];
	printf("������ å ����: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);
	if (idx != -1) {
		int year;
		char publisher[50];

		printf("�� �Ⱓ��: "); scanf_s("%d", &year);

		char dummy = getchar();

		printf("�� ���ǻ�: "); gets_s(publisher, sizeof(publisher));

		book* b = (book*)myarr_get_data(&books, idx);

		book_setYear(b, year);
		book_setPublisher(b, publisher);

		printf("���� ����\n");
	}
	else {
		printf("�ش� ������ ������ �����ϴ�.\n");
	}
}
void con_delete() {
	printf("���� ����\n\n");

	char title[100];

	printf("������ å �Է�: ");
	gets_s(title, sizeof(title));

	int idx = title_to_idx(title);

	if (idx != -1) {
		book* b = (book*)myarr_get_data(&books, idx);
		book_clear(b);	// �� �޸� ����

		myarr_erase(&books, idx);	// i + 1�� �ּҸ� i�� ����

		printf("�����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}
void con_printAll() {
	printf("��ü ���� ���\n\n");

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