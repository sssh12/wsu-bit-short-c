#include <stdio.h>

// 타입 정의
struct mydate {
	int year;
	int month;
	int day;
};

void init_today(struct mydate* pdate);
void print_day(struct mydate date);

/*
-----------------------------------------
108번지			date.day			2
104번지			date.month			7
100번지			date.year			2025
-----------------------------------------
<main stack>
*/
int main() {
	struct mydate date;

	init_today(&date);
	print_day(date);

	return 0;
}

/*
-----------------------------------------
200번지			pdate			[100번지]
-----------------------------------------
<init_today stack>
*/
void init_today(struct mydate* pdate) {
	/*
	pdate->year = 2025;
	pdate->month = 7;
	pdate->day = 2;
	*/

	(*pdate).year = 2025;
	(*pdate).month = 7;
	(*pdate).day = 2;
}

/*
-----------------------------------------
308번지			date.day			2
304번지			date.month			7
300번지			date.year			2025
-----------------------------------------
<print_day stack>
*/
void print_day(struct mydate date) {
	printf("%04d-%02d-%02d\n", date.year, date.month, date.day);
}