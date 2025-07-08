#include <stdio.h>

// 치환: 타입 개념이 없다
#define MYADD(X,Y) X + Y 

void exam1() {
	int num = 10;

	printf("%d\n", MYADD(num, 20));		// printf("%d\n", num + 20);

	float f1 = 10.123f;
	float f2 = 20.243f;

	printf("%.1f\n", MYADD(f1, f2));	// printf("%.1f\n", 10.123f + 20.243f);
}

// 치환: ( ) 명시적 치환 결과물을 제공
#define MYMUL1(X,Y) X * Y
#define MYMUL2(X,Y) (X) * (Y)
int mymul(int n1, int n2) {
	return n1 * n2;
}

void exam2() {
	printf("%d\n", MYMUL1(2, 3));	// 6
	printf("%d\n", mymul(2, 3));	// 6

	printf("%d\n", MYMUL1(2+1, 3+1));	// 2 + 1 * 3 + 1 -> 6
	printf("%d\n", MYMUL2(2+1, 3+1));	// (2 + 1) * (3 + 1) -> 12
	printf("%d\n", mymul(2+1, 3+1));	// 12
}

int main() {
	//exam1();
	exam2();

	return 0;
}