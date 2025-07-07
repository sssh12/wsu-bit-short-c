#include "std.h"

// 참조 선언(함수의 선언)
extern myarr members;

void file_load() {
	FILE* fp;
	int ret = fopen_s(&fp, "members.txt", "r");
	if (ret != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	int size;
	fscanf_s(fp, "%d", &size);

	for (int i = 0; i < size; i++)
	{
		int age;
		char name[20], phone[20];

		int ret = fscanf_s(fp, "%s %d %s\n",
			name, (int)sizeof(name),
			&age,
			phone, (int)sizeof(phone));
		if (ret == -1)		//EOF(end of file)
			break;

		member mem = member_create(name, age, phone);
		myarr_push_back(&members, mem);
	}

	fclose(fp);
}
void file_save() {
	FILE* fp;
	int ret = fopen_s(&fp, "members.txt", "w");
	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	// 저장 개수(헤더)
	fprintf(fp, "%d\n", members.size);

	// 저장 개수 만큼의 데이터
	for (int i = 0; i < members.size; i++) {
		member mem = members.arr[i];

		fprintf(fp, "%s %d %s\n", mem.name, mem.age, mem.phone);
	}

	fclose(fp);
}
