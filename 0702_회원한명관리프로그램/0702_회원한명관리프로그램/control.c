#include "std.h"

// ���� ���� -> ���� ���� �޸�(���α׷� ����/����)
// �ַ�ǿ� �ִ� ��� �Լ��� ����� �� �ִ�.
member g_member;

void con_init() {
	// ���� ���� �ʱ�ȭ
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
		printf("�̹� ����� ������ �ֽ��ϴ�.\n");
	}
	else {
		printf("�̸� �Է�: ");
		gets_s(name, sizeof(name));

		printf("���� �Է�: ");
		scanf_s("%d", &age);

		char dummy = getchar();

		printf("��ȭ��ȣ �Է�: ");
		gets_s(phone, sizeof(phone));

		strcpy_s(g_member.name, sizeof(g_member.name), name);
		g_member.age = age;

		strcpy_s(g_member.phone, sizeof(g_member.phone), phone);

		printf("����Ǿ����ϴ�.\n");
		g_member.flag = 1;
	}
}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	if (isFlag() == 1) {
		printf("�̸� �Է�: ");
		gets_s(name, sizeof(name));

		if (strcmp(g_member.name, name) == 0) {
			printf("%s \t %d \t %s\n", g_member.name, g_member.age, g_member.phone);
		}
		else {
			printf("�̸��� �ùٸ��� �ʽ��ϴ�.\n");
		}
	}
	else {
		printf("����� ������ �����ϴ�.\n");
	}
}
void con_update() {
	printf("[update]\n\n");

	int age;
	char phone[20];

	if (isFlag() == 1) {
		printf("���� �Է�: ");
		scanf_s("%d", &age);

		char dummy = getchar();

		printf("��ȭ��ȣ �Է�: ");
		gets_s(phone, sizeof(phone));

		g_member.age = age;

		strcpy_s(g_member.phone, sizeof(g_member.phone), phone);

		printf("����Ǿ����ϴ�.\n");
	}
	else {
		printf("����� ������ �����ϴ�.\n");
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
		printf("����� ������ �����ϴ�.\n");
	}
}

int isFlag() {
	return (g_member.flag == 1);	// 1(������ ��), 0(������� ��)
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