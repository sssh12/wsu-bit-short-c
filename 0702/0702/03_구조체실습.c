/*
[ȸ��(�̸�, ����, ��ȭ��ȣ)] ����, ���
*/
#include <stdio.h>
#include <string.h>

// ����ü ����(Ÿ�� Ű����, ũ��, ����� ����)
typedef struct tagmember member;
struct tagmember {
	char name[20];		// ����ü ���
	int age;
	char phone[20];
};

int main() {
	member mem;

	// ���� ����
	mem.age = 20;												// int
	strcpy_s(mem.name, sizeof(mem.name), "������");				// char*
	strcpy_s(mem.phone, sizeof(mem.phone), "010-8343-7705");	// char*

	// ���
	printf("%s, %d, %s\n", mem.name, mem.age, mem.phone);

	// ����� �Է�
	printf("�̸� �Է�: ");
	gets_s(mem.name, sizeof(mem.name));
	//scanf_s("%s", &mem.name, (int)sizeof(mem.name));

	printf("���� �Է�: ");
	scanf_s("%d", &mem.age);

	char dummy = getchar();

	printf("��ȭ��ȣ �Է�: ");
	gets_s(mem.phone, sizeof(mem.phone));
	//scanf_s("%s", &mem.phone, (int)sizeof(mem.phone));

	// ���
	printf("%s, %d, %s\n", mem.name, mem.age, mem.phone);

	return 0;
}
