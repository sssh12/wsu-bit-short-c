#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();

void main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	exam5();
}

void exam1() {
	int num1 = 1;
	int num2;
	
	// ��ġ ����(�ش� ���忡�� ���� ���� ó��)
	num2 = ++num1;	// num2 = 2;
	printf("%d, %d\n", num1, num2);	// 2, 2

	// ��ġ ����(�ش� ���忡���� ������ ������� �ʴ´�.)
	//			(������ ����� �Ŀ� ó���ȴ�.)
	num2 = num1++;	// num2 = 2;
	printf("%d, %d\n", num1, num2);	// 3, 2
}

void exam2() {
	int num1 = 1;
	int result;

	result = ++num1 + ++num1 + ++num1;	// result = 4 + 4 + 4;

	printf("%d, %d\n", num1, result);	// 4, 12
}

void exam3() {
	int num1 = 1;
	int result;

	result = num1++ + num1++ + num1++;	// result = 1 + 1 + 1;

	printf("%d, %d\n", num1, result);	// 4, 3
}

void exam4() {
	int num1 = 1;
	int result;

	result = num1++ + ++num1 + num1++;	// result = 2 + 2 + 2;

	printf("%d, %d\n", num1, result);	// 4, 6
}

void exam5() {
	int num1 = 1;

	num1 = num1++ + ++num1 + num1++;	// num1 = 2 + 2 + 2;

	printf("%d\n", num1);	// 8
}