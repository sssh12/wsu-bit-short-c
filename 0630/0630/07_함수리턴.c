#include <stdio.h>

void func1();
int func2();
char func3();

void main() {
	// 호출 시 리턴된 값을 획득하는 것은 선택
	func1();
	func2();
	func3();

	int result1 = func2();	// 대입 연산 L value = R value
	char result2 = func3();	// 대입 연산 L value = R value
}

void func1() {
	return;				// 함수 종료 키워드
}

int func2() {
	return 1 + 2 + 3;	// return 6;
}

char func3() {
	char ch = 'A';

	return ch + 1;		// return 'B';
}