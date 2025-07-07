#include <stdio.h>

// 기존의 타입으로 새로운 타입 키워드를 생성
typedef int size_t;				// int			-> 의미 부여 -> size_t
typedef unsigned int uint;		// unsigned int -> 편리성	 -> uint
typedef int(*FUNC)(int, int);	// 함수 포인터 변수 선언과 모양이 동일하다.

int my_add(int num1, int num2) { return num1 + num2; }
int my_sub(int num1, int num2) { return num1 - num2; }

int my_cal1(int n1, int n2, int(*func)(int, int)) {
	int result = func(n1, n2);
	return result;

	// return func(n1, n2);
}

int my_cal2(int n1, int n2, FUNC func) {
	int result = func(n1, n2);
	return result;

	// return func(n1, n2);
}

int main() {
	printf("%d\n", my_cal1(10, 20, my_add));
	printf("%d\n", my_cal2(10, 20, my_sub));

	return 0;
}