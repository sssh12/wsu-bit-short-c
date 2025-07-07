#include "std.h"

// ���� ���� �迭 ����
extern myarr books;

void file_load()
{
	FILE* fp;
	int ret = fopen_s(&fp, "books.txt", "r");
	if (ret != 0)
	{
		printf("���� ���� ����\n");
		return;
	}

	int size;
	fscanf_s(fp, "%d", &size);

	for (int i = 0; i < size; i++)
	{
		char title[100], author[50], publisher[50];
		int year;

		fscanf_s(fp, "%s %s %d %s\n",
			title, (unsigned)sizeof(title),
			author, (unsigned)sizeof(author),
			&year,
			publisher, (unsigned)sizeof(publisher));

		book* b = book_create(title, author, year, publisher);
		myarr_push_back(&books, b);
	}

	fclose(fp);
}

void file_save()
{
	FILE* fp;
	int ret = fopen_s(&fp, "books.txt", "w");
	if (ret != 0)
	{
		printf("���� ���� ����\n");
		return;
	}

	//���� ����(���)
	fprintf(fp, "%d\n", books.size);

	//���� ���� ��ŭ�� ������ 
	for (int i = 0; i < books.size; i++)
	{
		book* b = (book*)myarr_get_data(&books, i);
		fprintf(fp, "%s %s %d %s\n", b->title, b->author, b->year, b->publisher);
	}

	fclose(fp);
}