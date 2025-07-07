#include "std.h"

// 참조 선언(함수의 선언)
extern member members[DATA_MAX];

void file_load() {
	FILE* fp;
	int ret = fopen_s(&fp, "members.txt", "r");
	if (ret != 0)
	{
		printf("파일 열기 실패\n");
		return;
	}

	while (1)
	{
		int idx, flag, age;
		char name[20], phone[20];

		int ret = fscanf_s(fp, "%d %d %s %d %s\n",
			&idx,
			&flag,
			name, (int)sizeof(name),
			&age,
			phone, (int)sizeof(phone));
		if (ret == -1)		//EOF(end of file)
			break;

		member mem = member_create(name, age, phone);
		members[idx] = mem;
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

	for (int i = 0; i < DATA_MAX; i++) {
		member mem = members[i];

		if (mem.flag == 1) {
			fprintf(fp, "%d %d %s %d %s\n", i, mem.flag, mem.name, mem.age, mem.phone);
		}
	}
}
