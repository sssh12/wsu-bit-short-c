#include "std.h"

// 전역 도서 배열 참조
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
		printf("파일 열기 실패\n");
		return;
	}

	//저장 개수(헤더)
	fprintf(fp, "%d\n", books.size);

	//저장 개수 만큼의 데이터 
	for (int i = 0; i < books.size; i++)
	{
		book* b = (book*)myarr_get_data(&books, i);
		fprintf(fp, "%s %s %d %s\n", b->title, b->author, b->year, b->publisher);
	}

	fclose(fp);
}