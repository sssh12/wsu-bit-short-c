/*
매개 변수와 인자 전달: 강제성 문법
- 매개 변수에 맞추어 반드시 인자가 전달되어야 한다.
- 매개 변수 = 인자 전달;
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_star_10();
void print_star_20();
void print_star_count(int count);
void print_shape_count(int count, char shape);
									

void main() {
	print_star_10();
	print_star_20();
	print_star_count(30 + 22);		// int count = 30 + 22;
	print_star_count(40);			// int count = 40;
	print_shape_count(30, '#');		// int count = 30; char shape = '#';

}

void print_star_10() {
	for (int i = 0; i < 10; i++) {
		printf("%c", '*');
	}
	printf("\n");
}

void print_star_20() {
	for (int i = 0; i < 20; i++) {
		printf("%c", '*');
	}
	printf("\n");
}

void print_star_count(int count) {
	for (int i = 0; i < count; i++) {
		printf("%c", '*');
	}
	printf("\n");
}

void print_shape_count(int count, char shape) {
	for (int i = 0; i < count; i++) {
		printf("%c", shape);
	}
	printf("\n");
}
