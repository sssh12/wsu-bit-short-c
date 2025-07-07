// 구조체는 사용자가 원하는 타입을 정의
// 왜 필요한가?
// 오늘 날짜를 저장하고 출력
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();

int main() {
	//exam1();
	//exam2();
	//exam3();
	exam4();

	return 0;
}

void init_today(int* year, int* month, int* day) {
	*year = 2025;
	*month = 7;
	*day = 2;
}

void print_day(int year, int month, int day) {
	printf("%04d-%02d-%02d\n", year, month, day);
}

/*
-------------------------------------
108번지			day				2
104번지			month			7
100번지			year			2025
-------------------------------------
<exam1 stack>
*/
void exam1() {
	int year;
	int month;
	int day;

	init_today(&year, &month, &day);

	print_day(year, month, day);
}

// 구조체 정의 -> 타입 정의: <정보가 생성, h 파일>
struct mydate {
	int year;
	int month;
	int day;
};

/*
---------------------------------------------------------
112번지			date.day		2			&(date.day)
108번지			date.month		7			&(date.month)
104번지			date.year		2025		&(date.year)
100번지			num				10			&num
---------------------------------------------------------
<exam2 stack>
*/
void exam2() {
	// int 동급
	int num;
	struct mydate date;		// &date

	printf("%d byte, %d byte\n", (int)sizeof(num), (int)sizeof(int));
	printf("%d byte, %d byte\n", (int)sizeof(date), (int)sizeof(struct mydate));

	// 멤버의 접근 연산자( . )
	num = 10;
	date.year = 2025;
	date.month = 7;
	date.day = 2;

	printf("%04d-%02d-%02d\n", date.year, date.month, date.day);
}

// int 타입이 가능하면 구조체 타입도 가능하다.
void exam3() {
	// 변수 선언과 동시에 초기화
	int num = 10;
	struct mydate date = { 2025, 7, 2 };

	// 대입 연산
	int num1 = num;
	struct mydate date1;
	date1 = date;

	printf("%04d-%02d-%02d\n", date1.year, date1.month, date1.day);
}

// 사용자 입력
void exam4() {
	// 변수 선언과 동시에 초기화
	int num = 10;
	struct mydate date1;

	// 사용자 입력
	printf("정수 입력: ");
	scanf_s("%d", &num);

	// 날짜 입력
	printf("날짜 입력: ");
	scanf_s("%d%d%d", &date1.year, &date1.month, &date1.day);

	printf("%04d-%02d-%02d\n", date1.year, date1.month, date1.day);
}