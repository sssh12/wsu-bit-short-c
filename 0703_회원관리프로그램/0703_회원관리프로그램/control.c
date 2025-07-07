#include "std.h"

// ���� ���� -> ���� ���� �޸�(���α׷� ����/����)
// �ַ�ǿ� �ִ� ��� �Լ��� ����� �� �ִ�.
member members[DATA_MAX];

void con_init() {
	// ���� ���� �ʱ�ȭ
	for (int i = 0; i < DATA_MAX; i++) {
		members[i].flag = 0;	// ******
	}

	file_load();
}

void con_exit() {
	file_save();
}

void con_insert() {
	printf("[insert]\n\n");

	int idx;
	char name[20];
	int age;
	char phone[20];

	printf("���� ��ġ �Է�(0 ~ %d): ", DATA_MAX - 1);
	scanf_s("%d", &idx);

	char dummy = getchar();

	if (members[idx].flag == 1) {
		printf("�̹� ����� ������ �ֽ��ϴ�.\n");
		return;
	}

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	printf("���� �Է�: ");
	scanf_s("%d", &age);

	dummy = getchar();

	printf("��ȭ��ȣ �Է�: ");
	gets_s(phone, sizeof(phone));

	member mem = member_create(name, age, phone);
	members[idx] = mem;

	printf("����Ǿ����ϴ�.\n");
}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));
	
	int idx = name_to_idx(name);

	if (idx != -1) {
		//member mem = members[idx];
		//member_print(&mem);

		member_println(&members[idx]);	// *****

		//member_print(members + idx);
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
		member_setAge(&members[idx], age);
		member_setPhone(&members[idx], phone);

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
		member_clear(&members[idx]);

		printf("�����Ǿ����ϴ�.\n");
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}
}

void con_printAll() {
	for (int i = 0; i < DATA_MAX; i++) {
		printf("[%d] ", i);
		if (members[i].flag == 1) {
			member_print(&members[i]);
		}
		else {
			printf("\n");
		}
	}
	printf("------------------------------------------------------------------------\n");
}

int name_to_idx(const char* name) {
	for (int i = 0; i < DATA_MAX; i++) {
		member mem = members[i];

		if (strcmp(mem.name, name) == 0) {
			return i;
		}
	}
	return -1;
}

