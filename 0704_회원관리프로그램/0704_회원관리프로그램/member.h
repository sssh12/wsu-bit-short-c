#pragma once

typedef struct tagmember member;
struct tagmember {
	char name[20];
	int age;
	char phone[20];
};

member member_create(const char* name, int age, const char* phone);
void member_println(const member* pmember);
void member_print(const member* pmember);

void member_setAge(member* pmember, int age);
void member_setPhone(member* pmember, const char* phone);
void member_clear(member* pmember);
