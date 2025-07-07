#include "std.h"

myarr members;

void con_init() {
	myarr_init(&members);

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

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	printf("���� �Է�: ");
	scanf_s("%d", &age);

	char dummy = getchar();

	printf("��ȭ ��ȣ �Է�: ");
	gets_s(phone, sizeof(phone));

	member* pmember = member_create(name, age, phone);
	if (pmember == NULL) {
		printf("ȸ�� ���� ����\n");
		return;
	}
	else {
		if (myarr_push_back(&members, pmember) == 1) {	// *****
			printf("����Ǿ����ϴ�.\n");
		}
		else {
			printf("���� ����(overflow)\n");
		}

	}


}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		member* mem = myarr_get_data(&members, idx);
		member_println(mem);	// *****
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}

}
void con_update() {
	printf("[update]\n\n");

	char name[20];

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		int age;
		char phone[20];

		printf("������ ����: ");
		scanf_s("%d", &age);

		char dummy = getchar();

		printf("������ ��ȭ ��ȣ: ");
		gets_s(phone, sizeof(phone));

		// �迭�� �ִ� member �� Ư�� �ε����� �ִ� member�� �ּ� ����
		// member_setAge(&members.arr[idx], age);
		// member_setPhone(&members.arr[idx], phone);

		// members[idx].age = age;
		// strcpy_s(members[idx].phone, (int)sizeof(members[idx].phone), phone);	// ����

		member* pmember = (member*)myarr_get_data(&members, idx);

		member_setAge(pmember, age);		// member*, int
		member_setPhone(pmember, phone);	// member*, const char*

		printf("����Ǿ����ϴ�.\n");

	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}
void con_delete() {
	printf("[delete]\n\n");

	char name[20];

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		member* pmember = (member*)myarr_get_data(&members, idx);
		member_clear(pmember);	// �� �޸� ����

		myarr_erase(&members, idx);	// i + 1�� �ּҸ� i�� ����

		printf("�����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}

void con_printAll() {
	for (int i = 0; i < members.size; i++) {
		printf("[%d] ", i);
		member* pmember = (member*)myarr_get_data(&members, i);
		member_print(pmember);
	}
	printf("------------------------------------------------------------------------\n");
}

int name_to_idx(const char* name) {
	for (int i = 0; i < members.size; i++) {
		member* mem = (member*)myarr_get_data(&members, i);

		if (strcmp(mem->name, name) == 0) {
			return i;
		}
	}
	return -1;
}