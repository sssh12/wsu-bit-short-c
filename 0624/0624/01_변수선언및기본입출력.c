#include <stdio.h> // c ��� ǥ�� h

void exam1();	// �Լ� ����
void exam2();	
void exam3();

void main() {
	exam1();	// �Լ� ȣ�� -> �帧�� ����
	exam2();
	exam3();
}

// int ����, %d (Decimal)
void exam1() {	// �Լ� ����
	// ���� ���� -> ���� ���� ���� (�ʱ�ȭ ���� ������ ���̰� ����)
	int num1 = 10;	// 1) ����� ���ÿ� �ʱ�ȭ
	int num2;

	num2 = 20;		// 2) ������ ���� ���� ������ ���� �ʱ�ȭ

	// ���
	printf("num1�� ��: %d\n", num1);
	printf("num2�� ��: %d\n", num2);
	printf("num1�� ��: %d\tnum2�� ��: %d\n", num1, num2);
}

// double �Ǽ�, %lf, (Long Float)
// �Ǽ��� ���� dnum ����, ���� �� ������ ���� 10.123 �ʱ�ȭ
// ���
void exam2() {	
	double dnum;
	dnum = 10.123;

	printf("\ndnum�� ��: %.3lf\n", dnum);
}

// char ���� %c (Character)
// ���� ch ����, ���� �� ������ ���� 'A' �ʱ�ȭ
// ���
void exam3() {
	char ch;
	ch = 'A';

	printf("\nch�� ��: %c\n", ch);
}