#include "std.h"

// 참조 선언(함수의 선언)
extern member g_member;

void file_load() {
	FILE* fp;
	int ret = fopen_s(&fp, "member.txt", "r");
	if (ret != 0) {
		printf("파일 열기 실패\n");
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
		printf("파일 열기 실패\n");
		return;
	}
	
	fprintf(fp, "%d %s %d %s\n", g_member.flag, g_member.name, g_member.age, g_member.phone);
	

	fclose(fp);
}