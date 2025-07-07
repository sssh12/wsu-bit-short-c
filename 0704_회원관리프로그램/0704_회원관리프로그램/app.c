#include "std.h"

void app_init() {
	print_logo();
	con_init();
}

void app_run() {
	while (1) {
		system("cls");
		con_printAll();
		char input = print_menu();
		switch (input) {
		case '1': con_insert(); break;
		case '2': con_select(); break;
		case '3': con_update(); break;
		case '4': con_delete(); break;
		case '5': return;
		}
		system("pause");
	}
}

void app_exit() {
	print_ending();
	con_exit();
}