#include <stdio.h>

typedef struct sample sample;
struct sample {
	int num;
	char ch;
};

int main() {
	sample arr[3] = { {1, 'A'}, {2, 'B'}, {3, 'C'} };

	// 0 ~ 2�� �ε��� ���, 1 �ε����� ���� 'b' ����
	arr[1].ch = 'b' ;

	printf("%c\n", arr[1].ch);	// b

	sample s1;

	//s1 = arr;			// sample = sample*
	s1 = arr[1];		// sample* = sample*

	printf("%d, %c\n", s1.num, s1.ch);	// 2, b

	sample* p1 = &s1;	// sample* = sample*
	*p1;				// [Ÿ��] sample
	(*p1).num;			// [Ÿ��] int
	(*p1).num = 20;		// int = int

	printf("%d, %d\n", (*p1).num, s1.num);	// 20, 20

	sample* p2 = arr;		// sample* = sample*
	sample* p3 = arr + 2;	// sample* = sample*

	(*p2).num;	// 1
	(*p3).num;	// 3


	return 0;
}