#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2;
	char oper;
	float result;

	printf("정수 입력: ");
	scanf("%d", &num1);

	printf("정수 입력: ");
	scanf("%d", &num2);

	char dummy = getchar();	// \n 제거

	printf("연산자 입력: ");
	scanf("%c", &oper);

	switch (oper) {
	case '+': result = (float)num1 + num2;
		break;
	case '-': result = (float)num1 - num2;
		break;
	}

	printf("%d %c %d = %.f", num1, oper, num2, result);
}