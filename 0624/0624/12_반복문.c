#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();
void exam9();
void exam10();
void exam11();
void exam12();
void exam13();
void exam14();
void exam15();

void main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	/*exam5();*/
	/*exam6();*/
	/*exam7();*/
	/*exam8();*/
	/*exam9();*/
	/*exam10();*/
	/*exam11();*/
	/*exam12();*/
	/*exam13();*/
	/*exam14();*/
	exam15();
}

// --------------------- 횟수 ---------------------
// Hello, World!를 10번 출력하고 싶다.
void exam1() {
	int i = 0;	// 초기값

	while (i < 10) {	// 반복 조건
		printf("Hello, World!\n");

		i++;	// 증감
	}
	printf("\n");
}

// 정수 3개를 입력 받고 합의 결과를 출력 하시오.
void exam2() {
	int i = 0;
	int num;		// in
	int sum = 0;	// out, in

	while (i < 3) {
		printf("정수 입력: ");
		scanf("%d", &num);

		sum += num; // **********
		i++;
	}

	printf("sum: %d\n", sum);
}

// --------- 번호에 사용되는 변수를 활용 ---------
// 1부터 10을 출력하시오.
void exam3() {
	int i = 1;

	while (i <= 10) {
		printf("%-3d", i);

		i++;
	}
	printf("\n");
}

// 10부터 1을 출력하시오.
void exam4() {
	int i = 10;

	while (i >= 1) {
		printf("%-3d", i);

		i--;
	}
	printf("\n");
}

// 1부터 100의 숫자 중 짝수만 출력하시오.
void exam5() {
	int i = 2;

	while (i <= 100) {
		printf("%-3d", i);
		i += 2;
	}
	printf("\n");
}

// 'A' ~ 'Z'
void exam6() {
	int i = 'A';

	while (i <= 'Z') {
		printf("%-3c", i);

		i++;
	}
	printf("\n");
}

// --------- 사건에 따른 반복 종료 ---------
// 사용자가 -1을 입력할 때까지 반복해서 정수를 입력 받을 것
void exam7() {
	int num;

	while (1) {	// 무한 루프
		printf("정수 입력: ");
		scanf("%d", &num);

		if (num == -1)
			break;
	}
}

// 1. 양의 정수를 입력한 후 짝수면 “even number”, 홀수면 “odd number” 출력
// 짝수 확인 : (입력받은 수 % 2 == 0)
// 출력 예) 정수 : 3
// 3은 odd number
void exam8() {
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("even number\n");
	}
	else {
		printf("odd number\n");
	}
}

// 2. 구구단 중 5단을 출력
void exam9() {
	int num = 5;
	int i = 1;

	while (i <= 9) {
		printf("%d * %d = %-2d\n", num, i, num * i);
		i++;
	}
}

//3. 화씨 온도를 섭씨 온도로 환산해서 출력
//단, 0도에서 100도까시 10도 단위
//섭씨온도 = 5 / 9 * (화씨온도 - 32) )
//출력 예)  화씨   0도  – > 섭씨 - 17.8도
//화씨  10도  – > 섭씨 - 12.2도
//…
//화씨  10 0도  – > 섭씨  37.8도
void exam10() {
	int fahrenheit = 0;
	float celcius;

	while (fahrenheit <= 100) {
		celcius = 5.0f / 9 * (fahrenheit - 32);
		printf("화씨 %3d도 -> 섭씨 %.1f도\n", fahrenheit, celcius);
		fahrenheit += 10;
	}
}

// ------- do while -------
void exam11() {
	int i = 0;

	do {
		printf("Hello World!\n");	// 최소 1번은 반드시 실행
		i++;
	} while (i <= 10);
}

// ------- for -------
// while문과 for문은 호환 가능
// 흐름 동일: 초기화 -> [반복 조건 확인 -> 실행 -> 증감]
// exam1
void exam12() {
	// 초기값, 반복 조건, 증감
	for (int i = 0; i < 10; i++) {
		printf("Hello World!\n");
	}

	printf("\n");
}

// exam3
void exam13() {
	for (int i = 1; i <= 10; i++) {
		printf("%-3d\n", i);
	}

	printf("\n");
}

// exam7
void exam14() {
	int num;

	for(;;) {	// 무한 루프
		printf("정수 입력: ");
		scanf("%d", &num);

		if (num == -1)
			break;
	}
}

/*
return	: 함수 종료
break	: switch, 반복문 -> 종료 
---------------------------------
continue: 반복문 -> 반복문 continue 다음 문장 생략, 다음 반복문 수행
*/
void exam15() {
	for (int i = 1; i <= 10; i++) {
		if (i == 5)
			continue;

		printf("%-2d\n", i);
	}

	printf("\n");
}