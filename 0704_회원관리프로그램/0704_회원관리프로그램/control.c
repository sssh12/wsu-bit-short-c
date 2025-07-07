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

	member mem = member_create(name, age, phone);
	if (myarr_push_back(&members, mem) == 1) {	// *****
		printf("����Ǿ����ϴ�.\n");
	}
	else {
		printf("���� ����(overflow)\n");
	}


}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		//member mem = members.arr[idx];
		//member_println(&mem);

		member_println(&members.arr[idx]);	// *****

		//member_println(members + idx);
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
		member_setAge(&members.arr[idx], age);
		member_setPhone(&members.arr[idx], phone);

		//members[idx].age = age;
		//strcpy_s(members[idx].phone, (int)sizeof(members[idx].phone), phone);	// ����

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
		myaddr_erase(&members, idx);

		printf("�����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}

void con_printAll() {
	for (int i = 0; i < members.size; i++) {
		printf("[%d] ", i);
		member_print(&members.arr[i]);
	}
	printf("------------------------------------------------------------------------\n");
}

int name_to_idx(const char* name) {
	for (int i = 0; i < members.size; i++) {
		member mem = members.arr[i];

		if (strcmp(mem.name, name) == 0) {
			return i;
		}
	}
	return -1;
}

