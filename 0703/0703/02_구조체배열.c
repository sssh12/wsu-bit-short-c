#include <stdio.h>

typedef struct sample sample;
struct sample {
	int num;
	char ch;
};

int main() {
	struct sample s1;			// �� ����
	struct sample* p1 = &s1;	// �ּ� ����

	s1.num;			s1.ch;

	// �ּ� -> ������ -> ���
	(*p1).num;		(*p1).ch;
	// ��			   ��
	p1->num;		p1->ch;

	return 0;
}