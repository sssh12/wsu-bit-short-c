//scanf ****** �и����� ����(' '), ��(\t),  ����(\n)
//scanf_s 
/*
"%d" : �Է¹��۷� ���� ������ ���� �� ��
&num : ����� ���޵� �ּҿ� ������ ��
scanf("%d", &num);
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();

void main() {
	/*exam1();*/
	/*exam2();*/
	exam3();
}

void exam1() {
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num); // *** int* (int�� 1��)

	printf("�Է� ���: %d\n", num);
}

void exam2() {
	int num1, num2; // �� �ٿ� 2���� ���� ���� ����

	printf("���� �Է�: ");
	scanf("%d", &num1);

	printf("���� �Է�: ");
	scanf("%d", &num2);

	printf("�Է� ���: %d, %d\n", num1, num2);
}

void exam3() {
	char ch1, ch2;

	printf("���� �Է�: ");
	scanf("%c", &ch1);

	char dummy = getchar(); // ���� ���� �Է� �Լ�, \n ����

	printf("���� �Է�: ");
	scanf("%c", &ch2);

	printf("�Է� ���: %c, %c\n", ch1, ch2);
}