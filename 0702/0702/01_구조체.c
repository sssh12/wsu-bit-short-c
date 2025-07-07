// ����ü�� ����ڰ� ���ϴ� Ÿ���� ����
// �� �ʿ��Ѱ�?
// ���� ��¥�� �����ϰ� ���
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
108����			day				2
104����			month			7
100����			year			2025
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

// ����ü ���� -> Ÿ�� ����: <������ ����, h ����>
struct mydate {
	int year;
	int month;
	int day;
};

/*
---------------------------------------------------------
112����			date.day		2			&(date.day)
108����			date.month		7			&(date.month)
104����			date.year		2025		&(date.year)
100����			num				10			&num
---------------------------------------------------------
<exam2 stack>
*/
void exam2() {
	// int ����
	int num;
	struct mydate date;		// &date

	printf("%d byte, %d byte\n", (int)sizeof(num), (int)sizeof(int));
	printf("%d byte, %d byte\n", (int)sizeof(date), (int)sizeof(struct mydate));

	// ����� ���� ������( . )
	num = 10;
	date.year = 2025;
	date.month = 7;
	date.day = 2;

	printf("%04d-%02d-%02d\n", date.year, date.month, date.day);
}

// int Ÿ���� �����ϸ� ����ü Ÿ�Ե� �����ϴ�.
void exam3() {
	// ���� ����� ���ÿ� �ʱ�ȭ
	int num = 10;
	struct mydate date = { 2025, 7, 2 };

	// ���� ����
	int num1 = num;
	struct mydate date1;
	date1 = date;

	printf("%04d-%02d-%02d\n", date1.year, date1.month, date1.day);
}

// ����� �Է�
void exam4() {
	// ���� ����� ���ÿ� �ʱ�ȭ
	int num = 10;
	struct mydate date1;

	// ����� �Է�
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	// ��¥ �Է�
	printf("��¥ �Է�: ");
	scanf_s("%d%d%d", &date1.year, &date1.month, &date1.day);

	printf("%04d-%02d-%02d\n", date1.year, date1.month, date1.day);
}