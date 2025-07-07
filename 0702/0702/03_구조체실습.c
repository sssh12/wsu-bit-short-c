/*
[회원(이름, 나이, 전화번호)] 저장, 출력
*/
#include <stdio.h>
#include <string.h>

// 구조체 정의(타입 키워드, 크기, 멤버의 개수)
typedef struct tagmember member;
struct tagmember {
	char name[20];		// 구조체 멤버
	int age;
	char phone[20];
};

int main() {
	member mem;

	// 대입 연산
	mem.age = 20;												// int
	strcpy_s(mem.name, sizeof(mem.name), "오승하");				// char*
	strcpy_s(mem.phone, sizeof(mem.phone), "010-8343-7705");	// char*

	// 출력
	printf("%s, %d, %s\n", mem.name, mem.age, mem.phone);

	// 사용자 입력
	printf("이름 입력: ");
	gets_s(mem.name, sizeof(mem.name));
	//scanf_s("%s", &mem.name, (int)sizeof(mem.name));

	printf("나이 입력: ");
	scanf_s("%d", &mem.age);

	char dummy = getchar();

	printf("전화번호 입력: ");
	gets_s(mem.phone, sizeof(mem.phone));
	//scanf_s("%s", &mem.phone, (int)sizeof(mem.phone));

	// 출력
	printf("%s, %d, %s\n", mem.name, mem.age, mem.phone);

	return 0;
}
