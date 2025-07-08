#include "std.h"

extern myarr books;

void file_load()
{
	FILE* fp;
	int ret = fopen_s(&fp, "books.txt", "r");
	if (ret != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	int size;
	fscanf_s(fp, "%d", &size);

	for (int i = 0; i < size; i++)
	{
		int isbn, price;
		char title[20], author[20];

		fscanf_s(fp, "%d %s %s %d\n",
			&isbn,
			title, (int)sizeof(title),
			author, (int)sizeof(author),
			&price);
			

		book* pbook = book_create(isbn, title, author, price);
		myarr_push_back(&books, pbook);
	}

	fclose(fp);
}

void file_save()
{
	FILE* fp;
	int ret = fopen_s(&fp, "books.txt", "w");
	if (ret != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	fprintf(fp, "%d\n", books.size);

	for (int i = 0; i < books.size; i++)
	{
		book* pbook = (book*)myarr_get_data(&books, i);
		fprintf(fp, "%d %s %s %d\n", pbook->isbn, pbook->title, pbook->author, pbook->price);
	}

	fclose(fp);
}