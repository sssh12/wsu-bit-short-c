#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void e();
void t();

void main() {
	//e();
	t();
}

void e() {
	int subNum;
	double score;
	int count = 0;
	double sum = 0;
	double average;

	printf("과목 수 입력: ");
	scanf("%d", &subNum);

	for (int i = 0; i < subNum; i++) {
		printf("학점 입력: ");
		scanf("%lf", &score);
		sum += score;
		count++;
	}

	average = (double)sum / count;

	printf("학점 평균: %.2lf", average);
}

void t() {
	int num;

	printf("숫자 입력: ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = num - 1; j > i; j--) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

}