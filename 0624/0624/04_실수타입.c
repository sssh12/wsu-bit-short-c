/*
float	%f			float  dnum1 = 10.123f;	// ���� �߻�
double	%lf			double dnum2 = 10.123;

����� ��Ȯ���� ��������.
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
	float	f1 = 10.123f; // Float ���ͷ� �ʿ�

	printf("double: %.3lf\n", d1);
	printf("float: %.3f\n", f1);
}

void exam2() {
	float d1 = 12.1f;
	printf("%f\n", d1);
	d1 = d1 + 0.1f;
	printf("%f\n", d1);
}