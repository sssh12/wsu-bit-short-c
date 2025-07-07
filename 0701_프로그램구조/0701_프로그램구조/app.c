#include "std.h"

void app_init() {
	print_logo();
}

void app_run() {
	while (1) {
		system("cls");
		char input = print_menu();
		switch (input) {
		case '1': printf("[insert]\n\n"); break;
		case '2': printf("[select]\n\n"); break;
		case '3': printf("[update]\n\n"); break;
		case '4': printf("[delete]\n\n"); break;
		case '5': return;
		}
		system("pause");
	}
}

void app_exit() {
	print_ending();
}