#include "std.h"

// 전역 도서 배열 books를 사용하여 파일 입출력 수행
extern myarr books;

// 파일에서 도서 정보를 읽어와 배열에 저장
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

		// 파일에서 각 도서 정보를 읽어옴
		fscanf_s(fp, "%s %s %d %s\n",
			title, (unsigned)sizeof(title),
			author, (unsigned)sizeof(author),
			&year,
			publisher, (unsigned)sizeof(publisher));

		// 동적으로 도서 생성 후 배열에 추가
		book* b = book_create(title, author, year, publisher);
		myarr_push_back(&books, b);
	}

	fclose(fp);
}

// 배열의 도서 정보를 파일에 저장
void file_save()
{
	FILE* fp;
	int ret = fopen_s(&fp, "books.txt", "w");
	if (ret != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	// 도서 개수 먼저 저장(헤더)
	fprintf(fp, "%d\n", books.size);

	// 각 도서 정보를 파일에 저장
	for (int i = 0; i < books.size; i++)
	{
		book* b = (book*)myarr_get_data(&books, i);
		fprintf(fp, "%s %s %d %s\n", b->title, b->author, b->year, b->publisher);
	}

	fclose(fp);
}