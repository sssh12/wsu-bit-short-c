#include "std.h"

void app_init() {
	print_logo();
	con_init();	// 배열/리스트 초기화 + 파일 로드
}

// 메인 루프 (메뉴 반복, CRUD 분기)
void app_run() {
	while (1) {
		system("cls");
		char sel = print_menu();	// 메뉴 출력 및 선택 (문자)
		switch (sel) {
		case '1': con_insert(); break;
		case '2': con_select(); break;
		case '3': con_update(); break;
		case '4': con_delete(); break;
		case '5': con_printAll(); break;
		case '0': return;	// 종료
		default: printf("잘못된 입력입니다.\n"); break;
		}
		system("pause");
	}
}

void app_exit() {
	print_ending();
	con_exit();		// 파일 저장 등
}