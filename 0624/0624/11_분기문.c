/*
�����: ������ ��´�.(���� ������ ��� ���� ����)
F9 : Breack Point
F5 : ����� ����
F11: �ܰ��� �帧
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();

int main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	/*exam5();*/
	exam6();

	return 0;
}

void exam1() {
	int num = 10;

	if (num == 10)
		printf("num�� ���� 10\n");
	
	printf("if�� ���� ���� ����\n");

	if (num == 10) {
		printf("if ����\n");
		printf("if ����\n");
	}
}

void exam2() {
	char gender = 'm';

	if (gender == 'm')
		printf("����\n");
	else
		printf("����\n");
}

void exam3() {
	int jumsu;
	char result;

	printf("���� �Է�: ");
	scanf("%d", &jumsu);

	if (90 <= jumsu && jumsu <= 100)
		result = 'A';
	else if (80 <= jumsu && jumsu < 90)
		result = 'B';
	else if (70 <= jumsu && jumsu < 80)
		result = 'C';
	else if (60 <= jumsu && jumsu < 70)
		result = 'D';
	else
		result = 'F';

	printf("%d -> %c", jumsu, result);
}

void exam4() {
	int num1, num2;
	char oper;
	float result;

	printf("���� �Է�: ");
	scanf("%d", &num1);

	printf("���� �Է�: ");
	scanf("%d", &num2);

	char dummy = getchar();

	printf("������(+, -, *, /) �Է�: ");
	scanf("%c", &oper);

	if (oper == '+')
		result = (float)num1 + num2;
	else if (oper == '-')
		result = (float)num1 - num2;
	else if (oper == '*')
		result = (float)num1 * num2;
	else if (oper == '/')
		result = (float)num1 / num2;
	else {
		printf("�߸��� �����ڸ� �Է�\n");
		return; // �Լ��� �����Ű�� Ű����
	}
		
	printf("%d %c %d = %.1f\n", num1, oper, num2, result);
}

void exam5() {
	int num = 2;

	switch (num) {	// ����, ���ڸ� ����
	case 1:
		printf("���� 1\n");
		printf("���� 2\n");
		printf("���� 3\n");
		break;
	case 2:
		printf("���� 4\n");
		printf("���� 5\n");
		printf("���� 6\n");
		break;
	case 4:
		printf("���� 7\n");
		printf("���� 8\n");
		break;
	}
}

void exam6() {
	int num1, num2;
	char oper;
	float result;

	printf("���� �Է�: ");
	scanf("%d", &num1);

	printf("���� �Է�: ");
	scanf("%d", &num2);

	char dummy = getchar();

	printf("������(+, -, *, /) �Է�: ");
	scanf("%c", &oper);

	switch (oper) {
	case '+':
		result = (float)num1 + num2;
		break;
	case '-':
		result = (float)num1 - num2;
		break;
	case '*':
		result = (float)num1 * num2;
		break;
	case '/':
		result = (float)num1 / num2;
		break;
	default:
		printf("�߸��� �����ڸ� �Է�\n");
		return;
	}

	printf("%d %c %d = %.1f\n", num1, oper, num2, result);
}