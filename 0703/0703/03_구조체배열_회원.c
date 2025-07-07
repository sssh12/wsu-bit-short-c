#include <stdio.h>
#include <string.h>

// ����ü ����(���� ����) -> .h
typedef struct tagmember member;
struct tagmember {
	char name[20];
	int age;
	char phone[20];
};

// ���� -> .h
#define DATA_MAX 5

// ���� ���� -> [�ҽ� �ڵ�] �ݵ�� .c
member members[DATA_MAX];

// [�ӽ� ���� ����] -> [���� �Է�] -> [���� ���� ����] -> [��� ���]
void insert_test() {
	char name[20] = { "������" };
	int age = 20;
	char phone[20] = { "010-0000-0000" };
	int idx;

	printf("���� ��ġ �Է�(0 ~ %d): ", DATA_MAX -1);
	scanf_s("%d", &idx);

	strcpy_s(members[idx].name, sizeof(members[idx].name), name);
	members[idx].age = age;
	strcpy_s(members[idx].phone, sizeof(members[idx].phone), phone);

	printf("���� ����\n");
}

member member_create(const char* name, int age, const char* phone) {
	member mem;

	strcpy_s(mem.name, sizeof(mem.name), name);
	mem.age = age;
	strcpy_s(mem.phone, sizeof(mem.phone), phone);

	return mem;
}

void insert_test1() {
	char name[20] = { "������" };
	int age = 20;
	char phone[20] = { "010-1111-2222" };
	int idx;

	printf("���� ��ġ �Է�(0 ~ %d): ", DATA_MAX -1);
	scanf_s("%d", &idx);

	char dummy = getchar();

	member mem = member_create(name, age, phone);
	members[idx] = mem;

	printf("���� ����\n");
	printf("\n");
}

// ��ȸ
void print_test() {
	for (int i = 0; i < DATA_MAX; i++) {
		member mem = members[i];

		printf("[%d] %s, %d, %s\n", i, mem.name, mem.age, mem.phone);
	}
}

// ����ü�� �� ���޽� �ּ� ���� ����� ����
// ����) �޸�, ���� ����
// ��, ������ �������� �� �ϵ��� const ó�� �ʿ�
void member_print(int idx, const member* mem) {
	printf("[%d] %s, %d, %s\n", idx, mem->name, mem->age, mem->phone);
}

void print_test1() {
	for (int i = 0; i < DATA_MAX; i++) {
		//member mem = members[i];
		//member_print(mem);

		member_print(i, &members[i]);
	}
}

// ���� �˻�(��ȸ ���)
void select_test() {

	char name[20];

	member mem;

	printf("\n");

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	printf("\n");

	for (int i = 0; i < DATA_MAX; i++) {
		mem = members[i];
		
		if (strcmp(mem.name, name) == 0) {
			printf("�̸�: %s\n", mem.name);
			printf("����: %d\n", mem.age);
			printf("��ȭ ��ȣ: %s\n", mem.phone);
			return;
		}
	}
	printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
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

void select_test1() {
	char name[20];

	printf("\n");

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		member mem = members[idx];

		printf("�̸�: %s\n", mem.name);
		printf("����: %d\n", mem.age);
		printf("��ȭ ��ȣ: %s\n", mem.phone);
		return;
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}

	printf("\n");
}

void update_test() {
	char name[20];

	member mem;

	printf("\n");

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		mem = members[idx];

		char phone[20];
		printf("������ ��ȭ ��ȣ: ");
		gets_s(phone, sizeof(phone));

		//strcpy_s(mem.phone, (int)sizeof(phone), phone);						// ���纻
		strcpy_s(members[idx].phone, (int)sizeof(members[idx].phone), phone);	// ����

		printf("����Ǿ����ϴ�.\n");
		
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}

	printf("\n");
}

void delete_test() {
	char name[20];

	printf("\n");

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		// �ʱ� ����
		strcpy_s(members[idx].name, sizeof(members[idx].name), "");
		members[idx].age = 0;
		strcpy_s(members[idx].phone, sizeof(members[idx].name), "");
		
		return;
	}
	else {
		printf("�ش��ϴ� ȸ�� ������ �����ϴ�\n");
	}

	printf("\n");
}

int main() {
	insert_test();
	insert_test1();
	print_test1();

	//select_test1();
	//update_test();
	//print_test1();

	delete_test();
	print_test1();
	
	return 0;
}