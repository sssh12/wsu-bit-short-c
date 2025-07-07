/*
값 전달(Call by value)	  : 원본을 [복사]해서 [전달]
주소 전달(Call by address): [원본]의 주소 [전달]
*/
#include <stdio.h>

/*
----------------------------------------
100번지			num1			10 -> 30
----------------------------------------
<main stack>
*/
void func1(int value, int* address);

void main() {
	int num1 = 10;

	func1(num1, &num1);		// 값, 주소

	printf("%d\n", num1);	// 30
}

/*
-----------------------------------------
204번지			n2				[100번지]
200번지			n1				10 -> 20
-----------------------------------------
<func1 stack>
*/
void func1(int value, int* address) {
	value = 20;	// int = int

	*address = 30;	// int = int
					// *: 역참조

	printf("n1: %d, n2: 0x%p\n", value, address);
}