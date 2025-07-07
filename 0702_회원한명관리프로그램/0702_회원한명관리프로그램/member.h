#pragma once

typedef struct tagmember member;
struct tagmember {
	int flag;			// 0: 비어 있다.	1: 존재한다.
	char name[20];
	int age;
	char phone[20];
};