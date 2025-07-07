/*
디버깅: 벌레를 잡는다.(논리적 오류를 잡기 위한 행위)
F9 : Breack Point
F5 : 디버깅 시작
F11: 단계적 흐름
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
		printf("num의 값은 10\n");
	
	printf("if와 관련 없는 문장\n");

	if (num == 10) {
		printf("if 종속\n");
		printf("if 종속\n");
	}
}

void exam2() {
	char gender = 'm';

	if (gender == 'm')
		printf("남성\n");
	else
		printf("여성\n");
}

void exam3() {
	int jumsu;
	char result;

	printf("점수 입력: ");
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

	printf("정수 입력: ");
	scanf("%d", &num1);

	printf("정수 입력: ");
	scanf("%d", &num2);

	char dummy = getchar();

	printf("연산자(+, -, *, /) 입력: ");
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
		printf("잘못된 연산자를 입력\n");
		return; // 함수를 종료시키는 키워드
	}
		
	printf("%d %c %d = %.1f\n", num1, oper, num2, result);
}

void exam5() {
	int num = 2;

	switch (num) {	// 정수, 문자만 가능
	case 1:
		printf("문장 1\n");
		printf("문장 2\n");
		printf("문장 3\n");
		break;
	case 2:
		printf("문장 4\n");
		printf("문장 5\n");
		printf("문장 6\n");
		break;
	case 4:
		printf("문장 7\n");
		printf("문장 8\n");
		break;
	}
}

void exam6() {
	int num1, num2;
	char oper;
	float result;

	printf("정수 입력: ");
	scanf("%d", &num1);

	printf("정수 입력: ");
	scanf("%d", &num2);

	char dummy = getchar();

	printf("연산자(+, -, *, /) 입력: ");
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
		printf("잘못된 연산자를 입력\n");
		return;
	}

	printf("%d %c %d = %.1f\n", num1, oper, num2, result);
}