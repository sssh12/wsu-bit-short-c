#include <stdio.h>

void my_sum(int n1, int n2, int* result);

void main() {
	// ���� ����, in ���� �ʱ�ȭ
	int num1 = 10;	// in
	int num2 = 20;	// in
	int sum;		// out

	// ����
	my_sum(num1, num2, &sum);	// sum = num1 + num2;

	// ��� ���
	printf("%d + %d = %d\n", num1, num2, sum);
}

void my_sum(int n1, int n2, int* result) {
	// ��� 1) �ӽ� ���� ���
	int sum;		// �ӽ� ����
	sum = n1 + n2;

	*result = sum;	// ***** ������ �� ����(out)

	// ��� 2) �ӽ� ���� ����
	*result = n1 + n2;
}