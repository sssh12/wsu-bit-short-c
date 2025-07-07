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

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	printf("나이 입력: ");
	scanf_s("%d", &age);

	char dummy = getchar();

	printf("전화 번호 입력: ");
	gets_s(phone, sizeof(phone));

	member* pmember = member_create(name, age, phone);
	if (pmember == NULL) {
		printf("회원 생성 실패\n");
		return;
	}
	else {
		if (myarr_push_back(&members, pmember) == 1) {	// *****
			printf("저장되었습니다.\n");
		}
		else {
			printf("저장 실패(overflow)\n");
		}

	}


}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		member* mem = myarr_get_data(&members, idx);
		member_println(mem);	// *****
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}

}
void con_update() {
	printf("[update]\n\n");

	char name[20];

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		int age;
		char phone[20];

		printf("변경할 나이: ");
		scanf_s("%d", &age);

		char dummy = getchar();

		printf("변경할 전화 번호: ");
		gets_s(phone, sizeof(phone));

		// 배열에 있는 member 중 특정 인덱스에 있는 member의 주소 전달
		// member_setAge(&members.arr[idx], age);
		// member_setPhone(&members.arr[idx], phone);

		// members[idx].age = age;
		// strcpy_s(members[idx].phone, (int)sizeof(members[idx].phone), phone);	// 원본

		member* pmember = (member*)myarr_get_data(&members, idx);

		member_setAge(pmember, age);		// member*, int
		member_setPhone(pmember, phone);	// member*, const char*

		printf("변경되었습니다.\n");

	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}
}
void con_delete() {
	printf("[delete]\n\n");

	char name[20];

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		member* pmember = (member*)myarr_get_data(&members, idx);
		member_clear(pmember);	// 힙 메모리 생성

		myarr_erase(&members, idx);	// i + 1의 주소를 i에 저장

		printf("삭제되었습니다.\n");
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
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