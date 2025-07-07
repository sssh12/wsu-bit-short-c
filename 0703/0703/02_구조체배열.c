#include <stdio.h>

typedef struct sample sample;
struct sample {
	int num;
	char ch;
};

int main() {
	struct sample s1;			// 蔼 历厘
	struct sample* p1 = &s1;	// 林家 历厘

	s1.num;			s1.ch;

	// 林家 -> 开曼炼 -> 糕滚
	(*p1).num;		(*p1).ch;
	// ～			   ～
	p1->num;		p1->ch;

	return 0;
}