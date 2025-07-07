#include "std.h"

void print_logo() {
    system("cls");
    printf("========================\n");
    printf("   도서 관리 프로그램  \n");
    printf("========================\n\n");
    system("pause");
}

char print_menu() {
    printf("==== 메뉴 ====\n");
    printf("1. 도서 등록\n");
    printf("2. 도서 조회\n");
    printf("3. 도서 수정\n");
    printf("4. 도서 삭제\n");
    printf("5. 전체 도서 목록\n");
    printf("0. 프로그램 종료\n");
    printf("메뉴 선택: ");
    return _getch(); // 입력값을 문자로 반환
}

void print_ending() {
    system("cls");
    printf("\n프로그램을 종료합니다. 감사합니다\n");
    system("pause");
}