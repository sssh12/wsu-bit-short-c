#include "std.h"

void app_init() {
	print_logo();
	con_init();	// �迭/����Ʈ �ʱ�ȭ + ���� �ε�
}

// ���� ���� (�޴� �ݺ�, CRUD �б�)
void app_run() {
	while (1) {
		system("cls");
		char sel = print_menu();	// �޴� ��� �� ���� (����)
		switch (sel) {
		case '1': con_insert(); break;
		case '2': con_select(); break;
		case '3': con_update(); break;
		case '4': con_delete(); break;
		case '5': con_printAll(); break;
		case '0': return;	// ����
		default: printf("�߸��� �Է��Դϴ�.\n"); break;
		}
		system("pause");
	}
}

void app_exit() {
	print_ending();
	con_exit();		// ���� ���� ��
}