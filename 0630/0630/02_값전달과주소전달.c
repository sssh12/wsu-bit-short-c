/*
�� ����(Call by value)	  : ������ [����]�ؼ� [����]
�ּ� ����(Call by address): [����]�� �ּ� [����]
*/
#include <stdio.h>

/*
----------------------------------------
100����			num1			10 -> 30
----------------------------------------
<main stack>
*/
void func1(int value, int* address);

void main() {
	int num1 = 10;

	func1(num1, &num1);		// ��, �ּ�

	printf("%d\n", num1);	// 30
}

/*
-----------------------------------------
204����			n2				[100����]
200����			n1				10 -> 20
-----------------------------------------
<func1 stack>
*/
void func1(int value, int* address) {
	value = 20;	// int = int

	*address = 30;	// int = int
					// *: ������

	printf("n1: %d, n2: 0x%p\n", value, address);
}