#include <stdio.h>

void my_sum1(int n1, int n2, int* presult);
int my_sum2(int n1, int n2);

void main() {
	int num1 = 10, num2 = 20;
	int result;

	my_sum1(num1, num2, &result);			// ***
	printf("%d\n", result);

	result = my_sum2(num1 + 1, num2 + 1);	// ***
	printf("%d\n", result);
}

void my_sum1(int n1, int n2, int* presult) {
	int sum = n1 + n2;
	*presult = sum;
}

int my_sum2(int n1, int n2) {
	int sum = n1 + n2;
	return sum;
}