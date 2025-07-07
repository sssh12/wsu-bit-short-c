#include <stdio.h>

void my_sum(int n1, int n2, int* result);

void main() {
	// 변수 선언, in 변수 초기화
	int num1 = 10;	// in
	int num2 = 20;	// in
	int sum;		// out

	// 연산
	my_sum(num1, num2, &sum);	// sum = num1 + num2;

	// 결과 출력
	printf("%d + %d = %d\n", num1, num2, sum);
}

void my_sum(int n1, int n2, int* result) {
	// 방법 1) 임시 변수 사용
	int sum;		// 임시 변수
	sum = n1 + n2;

	*result = sum;	// ***** 원본의 값 변경(out)

	// 방법 2) 임시 변수 제거
	*result = n1 + n2;
}