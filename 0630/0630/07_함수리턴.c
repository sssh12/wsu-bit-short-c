#include <stdio.h>

void func1();
int func2();
char func3();

void main() {
	// ȣ�� �� ���ϵ� ���� ȹ���ϴ� ���� ����
	func1();
	func2();
	func3();

	int result1 = func2();	// ���� ���� L value = R value
	char result2 = func3();	// ���� ���� L value = R value
}

void func1() {
	return;				// �Լ� ���� Ű����
}

int func2() {
	return 1 + 2 + 3;	// return 6;
}

char func3() {
	char ch = 'A';

	return ch + 1;		// return 'B';
}