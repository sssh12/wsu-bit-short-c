//�ǽ�2.�Ʒ� ������ �ش��ϴ� �Լ��� �����Ͻÿ�.
//
//int main()
//{
//    int  jumsu;
//
//    jumsu = input_jumsu();    //������ �Է¹޾� ��ȯ
//
//    char result = get_result(jumsu); //jumsu�� 60 >=  ��P�� ����
//    //  �ƴϸ�  ��F�� ����
//
//    print_result(jumsu, result);      // �Է��� 65���� ��� ��� ��)   65�� -> P
//    �Է��� 55���� ��� ��� ��)   55��->F
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input_jumsu();
char get_result(int jumsu);
void print_result(int jumsu, char result);

int main() {
	int jumsu;

	jumsu = input_jumsu();

	char result = get_result(jumsu); // jumsu�� 60 >= 'P' ���� �ƴϸ� 'F' ����

	print_result(jumsu, result);	 // �Է��� 65���� ��� ��� ��) 65�� -> P
	// �Է��� 55���� ��� ��� ��) 55�� -> F

	return 0;
}

int input_jumsu() {
	int jumsu;

	printf("���� �Է�: ");
	scanf("%d", &jumsu);

	return jumsu;
}

char get_result(int jumsu) {
	if (jumsu >= 60) {
		return 'P';
	}
	else {
		return 'F';
	}
}

void print_result(int jumsu, char result) {
	printf("%d�� -> %c\n", jumsu, result);
}