/*
정수 타입이 여러개 존재한다. short, int***, long
정수를 표현하는 방법
1) 10진수*** (0 ~ 9)			%d		10
2) 8진수 (0 ~ 7)				%o		010
3) 16진수*** (0 ~ 9, a ~ f)		%x		0xa
*/

#include <stdio.h>

void exam1();
void exam2();

void main() {
	exam1();
	exam2();
}

void exam1() {
	int  num = 10;

	printf("10진수: %d\n", num);
	printf("8진수: 0%o\n", num);
	printf("16진수: 0x%x\n", num);
}

void exam2() {
	int num1 = 10;
	int num2 = 012;
	int num3 = 0xa;

	printf("\n%d\t%d\t%d\n", num1, num2, num3);
	printf("\n0%o\t0%o\t0%o\n", num1, num2, num3);
	printf("\n0x%x\t0x%x\t0x%x\n", num1, num2, num3);
}