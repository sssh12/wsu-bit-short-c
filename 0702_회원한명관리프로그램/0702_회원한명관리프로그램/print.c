#include "std.h"

void print_logo() {
	system("cls");		// <stdlib.h>
	printf("************************************\n");
	printf("2025학년도 1학기\n");
	printf("C 언어 회원 한명 관리\n");
	printf("2025-07-02\n");
	printf("오승하\n");
	printf("************************************\n");
	system("pause");
}

char print_menu() {
	printf("***********************************\n");
	printf("[1] insert\n");
	printf("[2] select\n");
	printf("[3] update\n");
	printf("[4] delete\n");
	printf("[5] exit\n");
	printf("***********************************\n");
	return _getch();	// 문자 입력 전용 함수 getchar()?
	// 입력 시 화면에 문자 출력 X
	// 입력과 동시에 입력 버퍼 전달
}

void print_ending() {
	system("cls");
	printf("************************************\n");
	printf("프로그램을 종료합니다.\n");
	printf("************************************\n");
	system("pause");
}