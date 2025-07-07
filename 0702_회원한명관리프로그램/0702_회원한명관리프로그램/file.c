#include "std.h"

// ���� ����(�Լ��� ����)
extern member g_member;

void file_load() {
	FILE* fp;
	int ret = fopen_s(&fp, "member.txt", "r");
	if (ret != 0) {
		printf("���� ���� ����\n");
		return;
	}

	fscanf_s(fp, "%d %s %d %s\n", &g_member.flag, 
								  g_member.name, (int)sizeof(g_member.name), 
								  &g_member.age, 
								  g_member.phone, (int)sizeof(g_member.name));

	fclose(fp);
}
void file_save() {
	FILE* fp;
	int ret	= fopen_s(&fp ,"member.txt", "w");
	if (ret != 0) {
		printf("���� ���� ����\n");
		return;
	}
	
	fprintf(fp, "%d %s %d %s\n", g_member.flag, g_member.name, g_member.age, g_member.phone);
	

	fclose(fp);
}