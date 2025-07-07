/*
&&,  ||,   !
���� : 0
  �� : 0�� ������ ��� ����  �� 1�� ��ǥ ����
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

void main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	/*exam5();*/
	exam6();
}

void exam1() {
	int result;

	result = 10 && -1;	// 1
	printf("%d\n", result);

	printf("%d\n", 10 && 0);	// 0

	printf("%d\n", 10 || 0);	// 1

	printf("%d\n", !100);	// 0
}

// �� ������, �� ������ -> ���ǽ�(���� ������ ��ȯ�ϴ� ��)
// ������ �Է¹ް�, �Էµ� ���� 100 �̻��̸� ��, �ƴϸ� ������ ����Ͻÿ�.
void exam2() {
	int num;
	int result;

	printf("���� �Է�: ");
	scanf("%d", &num);

	result = (num >= 100);

	printf("���: %s\n", (result ? "��" : "����"));
}

// ������ �Է¹ް�, ¦���� "¦��", Ȧ���� "Ȧ��"�� ����Ͻÿ�.
void exam3() {
	int num;
	int result;

	printf("���� �Է�: ");
	scanf("%d", &num);

	result = num % 2;

	printf("���: %s\n", (result ? "Ȧ��" : "¦��"));
}

// �⼮ ����, ���� ����, ���� ��, ���� �򰡸� �Է¹޾�,
// ���� ���ϰ�
// 60�� �̻��̸� "P",  �ƴϸ� "F"�� ����Ͻÿ�.
void exam4() {
	int num1, num2, num3, num4;
	int sum;
	int result;

	printf("�⼮ ����(20�� ����) �Է�: ");	
	scanf("%d", &num1);
	
	printf("���� ����(20�� ����) �Է�: ");	
	scanf("%d", &num2);

	printf("���� �� ����(20�� ����) �Է�: ");	
	scanf("%d", &num3);
	
	printf("���� �� ����(20�� ����) �Է�: ");	
	scanf("%d", &num4);
	
	sum = num1 + num2 + num3 + num4;

	result = (sum >= 60);

	printf("�հ�: %d\n", sum);
	printf("���: %s\n", (result ? "P" : "F"));
}

// �����ڸ� �Է¹޾�, �빮�ڸ� "�빮��", "�ҹ���"�� ����Ͻÿ�.
// ��, �ݵ�� �����ڸ� ����Ѵٰ� ����
void exam5() {
	char ch;
	int result;

	printf("������ �Է�: ");
	scanf("%c", &ch);

	// result = 'A' <= ch <= 'Z'			// 0 or 1 <= 'Z' == 0 or 1 <= 90 -> 1
	result = ('A' <= ch) && (ch <= 'Z');	// 65 <= ch <= 90

	printf("�Է� ���: %c\n", ch);
	printf("���: %s\n", (result ? "�빮��" : "�ҹ���"));
}

// ���ڸ� �Է¹޾�,
// ������(��ҹ���)�̸� "������"
// �ƴϸ� "��ȣ"�� ����Ͻÿ�.
void exam6() {
	char ch;
	int result;

	printf("���� �Է�: ");
	scanf("%c", &ch);

	result = ('A' <= ch) && (ch <= 'Z') ||  // 65 <= ch <= 90
			 ('a' <= ch) && (ch <= 'z');	

	printf("�Է� ���: %c\n", ch);
	printf("���: %s\n", (result ? "������" : "��ȣ"));
}

