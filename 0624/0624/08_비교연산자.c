/*
>,  <  >=,  <=, ==,  !=
°á°ú : Âü(1), °ÅÁþ(0)
*/

#include <stdio.h>

void exam1();

void main() {
	exam1();
}

void exam1() {
	int num1 = 10;
	int num2 = 20;
	int result;

	result = num1 < num2;	// 1

	printf("%d\n", result); // 1
}