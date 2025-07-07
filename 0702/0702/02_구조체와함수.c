#include <stdio.h>

// Ÿ�� ����
struct mydate {
	int year;
	int month;
	int day;
};

void init_today(struct mydate* pdate);
void print_day(struct mydate date);

/*
-----------------------------------------
108����			date.day			2
104����			date.month			7
100����			date.year			2025
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
200����			pdate			[100����]
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
308����			date.day			2
304����			date.month			7
300����			date.year			2025
-----------------------------------------
<print_day stack>
*/
void print_day(struct mydate date) {
	printf("%04d-%02d-%02d\n", date.year, date.month, date.day);
}