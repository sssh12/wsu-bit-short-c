#include <stdio.h>
#include <string.h>

// 구조체 정의(정보 생성) -> .h
typedef struct tagmember member;
struct tagmember {
	char name[20];
	int age;
	char phone[20];
};

// 정보 -> .h
#define DATA_MAX 5

// 전역 변수 -> [소스 코드] 반드시 .c
member members[DATA_MAX];

// [임시 변수 선언] -> [정보 입력] -> [전역 변수 대입] -> [결과 출력]
void insert_test() {
	char name[20] = { "오승하" };
	int age = 20;
	char phone[20] = { "010-0000-0000" };
	int idx;

	printf("저장 위치 입력(0 ~ %d): ", DATA_MAX -1);
	scanf_s("%d", &idx);

	strcpy_s(members[idx].name, sizeof(members[idx].name), name);
	members[idx].age = age;
	strcpy_s(members[idx].phone, sizeof(members[idx].phone), phone);

	printf("저장 성공\n");
}

member member_create(const char* name, int age, const char* phone) {
	member mem;

	strcpy_s(mem.name, sizeof(mem.name), name);
	mem.age = age;
	strcpy_s(mem.phone, sizeof(mem.phone), phone);

	return mem;
}

void insert_test1() {
	char name[20] = { "류지후" };
	int age = 20;
	char phone[20] = { "010-1111-2222" };
	int idx;

	printf("저장 위치 입력(0 ~ %d): ", DATA_MAX -1);
	scanf_s("%d", &idx);

	char dummy = getchar();

	member mem = member_create(name, age, phone);
	members[idx] = mem;

	printf("저장 성공\n");
	printf("\n");
}

// 순회
void print_test() {
	for (int i = 0; i < DATA_MAX; i++) {
		member mem = members[i];

		printf("[%d] %s, %d, %s\n", i, mem.name, mem.age, mem.phone);
	}
}

// 구조체는 값 전달시 주소 전달 사용을 권장
// 이유) 메모리, 대입 연산
// 단, 원본을 변경하지 못 하도록 const 처리 필요
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

// 순차 검색(순회 기반)
void select_test() {

	char name[20];

	member mem;

	printf("\n");

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	printf("\n");

	for (int i = 0; i < DATA_MAX; i++) {
		mem = members[i];
		
		if (strcmp(mem.name, name) == 0) {
			printf("이름: %s\n", mem.name);
			printf("나이: %d\n", mem.age);
			printf("전화 번호: %s\n", mem.phone);
			return;
		}
	}
	printf("해당하는 회원 정보가 없습니다\n");
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

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		member mem = members[idx];

		printf("이름: %s\n", mem.name);
		printf("나이: %d\n", mem.age);
		printf("전화 번호: %s\n", mem.phone);
		return;
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}

	printf("\n");
}

void update_test() {
	char name[20];

	member mem;

	printf("\n");

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		mem = members[idx];

		char phone[20];
		printf("변경할 전화 번호: ");
		gets_s(phone, sizeof(phone));

		//strcpy_s(mem.phone, (int)sizeof(phone), phone);						// 복사본
		strcpy_s(members[idx].phone, (int)sizeof(members[idx].phone), phone);	// 원본

		printf("변경되었습니다.\n");
		
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
	}

	printf("\n");
}

void delete_test() {
	char name[20];

	printf("\n");

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	int idx = name_to_idx(name);

	if (idx != -1) {
		// 초기 상태
		strcpy_s(members[idx].name, sizeof(members[idx].name), "");
		members[idx].age = 0;
		strcpy_s(members[idx].phone, sizeof(members[idx].name), "");
		
		return;
	}
	else {
		printf("해당하는 회원 정보가 없습니다\n");
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