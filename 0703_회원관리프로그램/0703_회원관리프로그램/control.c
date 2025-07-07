#include "std.h"

// 전역 변수 -> 정적 전역 메모리(프로그램 시작/종료)
// 솔루션에 있는 모든 함수가 사용할 수 있다.
member members[DATA_MAX];

void con_init() {
	// 전역 변수 초기화
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

	printf("저장 위치 입력(0 ~ %d): ", DATA_MAX - 1);
	scanf_s("%d", &idx);

	char dummy = getchar();

	if (members[idx].flag == 1) {
		printf("이미 저장된 정보가 있습니다.\n");
		return;
	}

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	printf("나이 입력: ");
	scanf_s("%d", &age);

	dummy = getchar();

	printf("전화번호 입력: ");
	gets_s(phone, sizeof(phone));

	member mem = member_create(name, age, phone);
	members[idx] = mem;

	printf("저장되었습니다.\n");
}
void con_select() {
	printf("[select]\n\n");

	char name[20];

	printf("이름 입력: ");
	gets_s(name, sizeof(name));
	
	int idx = name_to_idx(name);

	if (idx != -1) {
		//member mem = members[idx];
		//member_print(&mem);

		member_println(&members[idx]);	// *****

		//member_print(members + idx);
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
		member_setAge(&members[idx], age);
		member_setPhone(&members[idx], phone);

		//members[idx].age = age;
		//strcpy_s(members[idx].phone, (int)sizeof(members[idx].phone), phone);	// 원본

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
		member_clear(&members[idx]);

		printf("삭제되었습니다.\n");
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
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

