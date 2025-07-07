#include <stdio.h>

// main 함수의 표준
/*
리턴(반환): 호출자에게 전달하는 정보
*/
// int printf(const char* _Format, ...);
/*
리턴 타입		: int
함수명			: printf
매개 변수 리스트: 2개
	1) const char*: 상수 문자열 (타입)
		상수: 변하지 않는 값 
			const int NUM = 10;		NUM = 20(에러)
		변수: 변하는 값		 
			int num = 10;			num = 20;
	2) ...		  : 가변형 인자 (타입과 개수를 자유롭게)
*/
int main() {
	int ret = printf("abc\n");
	printf("%d byte\n", ret);

	return 0;	// 잘 종료되었다.
}