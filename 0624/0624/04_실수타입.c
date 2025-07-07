/*
float	%f			float  dnum1 = 10.123f;	// 오류 발생
double	%lf			double dnum2 = 10.123;

저장시 정확도가 떨어진다.
*/

#include <stdio.h>

void exam1();
void exam2();

void main() {
	/*exam1();*/
	exam2();
}

void exam1() {
	double	d1 = 10.123;
	float	f1 = 10.123f; // Float 리터럴 필요

	printf("double: %.3lf\n", d1);
	printf("float: %.3f\n", f1);
}

void exam2() {
	float d1 = 12.1f;
	printf("%f\n", d1);
	d1 = d1 + 0.1f;
	printf("%f\n", d1);
}