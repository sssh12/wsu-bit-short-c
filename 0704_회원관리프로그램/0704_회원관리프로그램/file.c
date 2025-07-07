#include "std.h"

// ���� ����(�Լ��� ����)
extern myarr members;

void file_load() {
	FILE* fp;
	int ret = fopen_s(&fp, "members.txt", "r");
	if (ret != 0)
	{
		printf("���� ���� ����\n");
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
		printf("���� ���� ����\n");
		return;
	}

	// ���� ����(���)
	fprintf(fp, "%d\n", members.size);

	// ���� ���� ��ŭ�� ������
	for (int i = 0; i < members.size; i++) {
		member mem = members.arr[i];

		fprintf(fp, "%s %d %s\n", mem.name, mem.age, mem.phone);
	}

	fclose(fp);
}
