//실습1.아래 구문에 해당하는 함수를 구현하시오.
//
//int main()
//{
//    int num = 10;
//    float fnum = 10.1f;
//
//    float  result1 = fun1(num, num + 10, fnum, fnum - 1);
//
//    float resul2;
//    fun2(num, num + 10, fnum, fnum - 1, &result2);
//
//    printf(“ % f, % f\n”, result1, result2); //동일한 값;
//
//    return 0;
//}
#include <stdio.h>

float func1(int n1, int n2, float fn1, float fn2);
void func2(int n1, int n2, float fnum, float fnum2, float *result2);

int main() {
	int num = 10;
	float fnum = 10.1f;

	float result1 = func1(num, num + 10, fnum, fnum - 1);

	float result2;
	func2(num, num + 10, fnum, fnum - 1, &result2);

	printf("%.1f, %.1f\n" , result1, result2);

	return 0;
}

float func1(int n1, int n2, float fn1, float fn2) {
	float result;
	result = n1 + n2 + fn1 + fn2;
	return result;
}

void func2(int n1, int n2, float fnum, float fnum2, float* result2) {
	float temp;
	temp = n1 + n2 + fnum + fnum2;
	
	*result2 = temp;
}







