#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_number(int* pnum);
void input_oper(char* oper);
void get_result(int num1, int num2, char oper, float* result);
void print(int num1, int num2, char oper, float result);

void main() {
	int num1, num2;
	char oper;
	float result;

	input_number(&num1); // in -> out;
	input_number(&num2);

	input_oper(&oper);

	get_result(num1, num2, oper, &result);

	print(num1, num2, oper, result);
}

void input_number(int* pnum) {
	int num;

	printf("정수 입력: ");
	scanf("%d", &num);

	char dummy = getchar();	// \n 제거

	*pnum = num;
}

void input_oper(char* oper) {
	char temp;

	printf("연산자 입력: ");
	scanf("%c", &temp);

	*oper = temp;
}

void get_result(int num1, int num2, char oper, float* result) {
	float temp;
	switch (oper) {
	case '+': temp = (float)num1 + num2; break;
	case '-': temp = (float)num1 - num2; break;
	}

	*result = temp;
}

void print(int num1, int num2, char oper, float result) {
	printf("%d %c %d = %.f\n", num1, oper, num2, result);
}