#include "std.h"

// 전역 변수 -> 정적 전역 메모리(프로그램 시작/종료)
// 솔루션에 있는 모든 함수가 사용할 수 있다.
member g_member;

void con_init() {
	// 전역 변수 초기화
	g_member.flag = 0;
	strcpy_s(g_member.name, sizeof(g_member.name), "-");
	g_member.age = -1;
	strcpy_s(g_member.phone, sizeof(g_member.phone), "-");

	file_load();
}

void con_exit() {
	file_save();
}

void con_insert() {
	printf("[insert]\n\n");

	char name[20];
	int age;
	char phone[20];

	if (isFlag() == 1)/*(g_member.flag == 0)*/ {
		printf("이미 저장된 정보가 있습니다.\n");
	}
	else {
		printf("이름 입력: ");
		gets_s(name, sizeof(name));

		printf("나이 입력: ");
		scanf_s("%d", &age);

		char dummy = getchar();

		printf("전화번호 입력: ");
		gets_s(phone, sizeof(phone));

		strcpy_s(g_member.name, sizeof(g_member.name), name);
		g_member.age = age;

		strcpy_s(g_member.phone, sizeof(g_member.phone), phone);

		printf("저장되었습니다.\n");
		g_member.flag = 1;
	}
}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	if (isFlag() == 1) {
		printf("이름 입력: ");
		gets_s(name, sizeof(name));

		if (strcmp(g_member.name, name) == 0) {
			printf("%s \t %d \t %s\n", g_member.name, g_member.age, g_member.phone);
		}
		else {
			printf("이름이 올바르지 않습니다.\n");
		}
	}
	else {
		printf("저장된 정보가 없습니다.\n");
	}
}
void con_update() {
	printf("[update]\n\n");

	int age;
	char phone[20];

	if (isFlag() == 1) {
		printf("나이 입력: ");
		scanf_s("%d", &age);

		char dummy = getchar();

		printf("전화번호 입력: ");
		gets_s(phone, sizeof(phone));

		g_member.age = age;

		strcpy_s(g_member.phone, sizeof(g_member.phone), phone);

		printf("저장되었습니다.\n");
	}
	else {
		printf("저장된 정보가 없습니다.\n");
	}
}
void con_delete() {
	printf("[delete]\n\n");

	if (isFlag() == 1) {
		strcpy_s(g_member.name, sizeof(g_member.name), "-");
		g_member.age = -1;
		strcpy_s(g_member.phone, sizeof(g_member.phone), "-");
		g_member.flag = 0;
	}
	else {
		printf("저장된 정보가 없습니다.\n");
	}
}

int isFlag() {
	return (g_member.flag == 1);	// 1(존재할 때), 0(비어있을 때)
}

void con_printAll() {
	if(isFlag() == 1) { //if (g_member.flag == 1) {
		printf("%s \t %d \t %s\n", g_member.name, g_member.age, g_member.phone);
		
	}
	else {
		printf("empty\n");
	}
	printf("-----------------------------------\n");
}