#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();

void main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	/*exam5();*/
	exam6();
	/*exam7();*/
}

// 사용자로부터 정수 2개를 입력 받아 합의 결과를 구하시오.
// //in(정수 2개) --[연산]--> out(합의 결과)
void exam1() {
	// 1. 변수 선언
	int num1, num2; // in
	int result;		// out

	// 2. in 변수 초기화
	printf("정수 입력: ");
	scanf("%d", &num1);

	printf("정수 입력: ");
	scanf("%d", &num2);


	// 3. 연산 (in 변수 -> out)
	result = num1 + num2; // 연산

	// 4. 결과 출력
	printf("합의 결과: %d", result);
}

// 정수 3개를 입력 받아 합의 결과를 출력하시오.
void exam2() {
	int num1, num2, num3, result;

	printf("정수 입력: ");
	scanf("%d", &num1);

	printf("정수 입력: ");
	scanf("%d", &num2);

	printf("정수 입력: ");
	scanf("%d", &num3);

	result = num1 + num2 + num3;

	printf("\n합의 결과: %d\n", result);
}

// 가로와 세로 길이를 입력 받아 사각형의 넓이를 구하시오.
// 사각형의 넓이 = 가로 길이 * 세로 길이
void exam3() {
	int width, height, result;

	printf("가로 길이 입력: ");
	scanf("%d", &width);

	printf("세로 길이 입력: ");
	scanf("%d", &height);

	result = width * height;

	printf("\n사각형의 넓이: %d\n", result);
}

// 가로와 세로 길이를 입력 받아 삼각형의 넓이를 구하시오.
// 삼각형의 넓이 = (가로 길이 * 세로 길이) / 2
// 동일 타입끼리의 연산은 동일 타입
// ex) int와 int의 연산 결과는 int
// 서로 다른 타입 간 연산은 표현 범위가 큰 쪽으로
// ex) int와 float의 연산 결과는 float
void exam4() {
	int width, height;
	float result; // ***

	printf("가로 길이 입력: ");
	scanf("%d", &width);

	printf("세로 길이 입력: ");
	scanf("%d", &height);

	// '=': 'int'에서 'float'(으)로 변환하면서 데이터가 손실될 수 있습니다.
	// result = (width * height) / 2; -> 해결: result = (width * height) / 2.0f;

	result = ((float)width * height) / 2; // 강제 형 변환

	printf("\n삼각형의 넓이: %.2f\n", result);
}

/*달의 중력은 지구 중력의 17 % 에 불과하다.
		지구에서 몸무게가 100kg 인 사람은 달에 가면 17kg 가 된다.
		지구의 몸무게를 입력받아 달에서의 몸무게를 출력하시오.
		달에서의 몸무게 = 지구 몸무게 * 0.17

		출력) 몸무게 입력 : 75(입력값)
		달에서의 몸무게 : 12.75*/
void exam5() {
	int weight;
	float moonWeight;

	printf("몸무게 입력: ");
	scanf("%d", &weight);

	moonWeight = weight * 0.17f;

	printf("달에서의 몸무게: %.2f", moonWeight);
}

//일자를 입력받아 해당 날짜를 개월과  일자의 형태로 출력하시오.
//단, 1개월은 30일로 가정
//개월 = 날짜 / 30
//일자 = 날짜 % 30
//
//출력)  일자 : 100(입력값)
//결과 : 3개월 10일
void exam6() {
	int day, days, month;
	
	printf("일자: ");
	scanf("%d", &day);

	month = day / 30;
	days = day % 30;

	printf("결과: %d개월 %d일", month, days);
}

//소문자를 입력받아 대문자로 변환하여 출력하시오.
//대문자 = 소문자 - (‘a’ - ‘A’)
void exam7() {
	char lower, upper;

	printf("소문자 입력: ");
	scanf("%c", &lower);

	upper = lower - ('a' - 'A');

	printf("대문자: %c", upper);
}
