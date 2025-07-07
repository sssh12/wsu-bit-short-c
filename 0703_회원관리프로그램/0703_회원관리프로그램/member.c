#include "std.h"

member member_create(const char* name, int age, const char* phone) {
	member mem;

	mem.flag = 1;	// **
	strcpy_s(mem.name, sizeof(mem.name), name);
	mem.age = age;
	strcpy_s(mem.phone, sizeof(mem.phone), phone);

	return mem;
}

void member_println(const member* pmember) {
	printf("[��		��]: %s\n", pmember->name);
	printf("[��		��]: %d\n", pmember->age);
	printf("[��ȭ ��ȣ]: %s\n", pmember->phone);
}

void member_print(const member* pmember) {
	printf("�̸�: %s \t ����: %d \t ��ȭ ��ȣ: %s\n", pmember->name, pmember->age, pmember->phone);
}

void member_setAge(member* pmember, int age) {
	pmember->age = age;
}

void member_setPhone(member* pmember, const char* phone) {
	strcpy_s(pmember->phone, sizeof(pmember->phone), phone);
}

void member_clear(member* pmember) {
	pmember->flag = 0;
	strcpy_s(pmember->name, sizeof(pmember->name), "");
	pmember->age = 0;
	strcpy_s(pmember->phone, sizeof(pmember->phone), "");
}
