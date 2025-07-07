#include <stdio.h>

void exam1();
void exam2();
void exam3();

void main() {
	/*exam1();*/
	/*exam2();*/
	exam3();
}

// & int: 1 byte로 가정
void exam1() {
	int num1 = 12;				// 0000 1100
	int num2 = 8;				// 0000 1000
	int result = num1 & num2;	// 0000 1000

	printf("%d\n", result);		// 8

	result = num1 | num2;		// 0000 1100
	result = ~num1;				// 1111 0011
}

// 비트 켜기(0 -> 1), 비트 끄기(1 -> 0), 비트 마스크(해당 비트 정보 확인)
//	|					&~					&
void exam2() {
	int attend = 0;	// 0000 0000

	// 2번 학생 출석(비트 켜기): |
	attend = attend | 4;	// attend: 0000 0000
							// 4	 : 0000 0100
							// |	 : 0000 0100

	// 1번 학생 출석
	attend = attend | 2;	// attend: 0000 0100
							// 2	 : 0000 0010
							// |	 : 0000 0110

	// 2번 학생 출석?(비트 마스크): &
	int check = attend & 4;	// attend: 0000 0110
							// 4	 : 0000 0100
							// &     : 0000 0100
	printf("2번 학생: %s\n", check ? "O" : "X");

	// 4번 학생 출석?
	check = attend & 16;	// attend: 0000 0110
							// 16	 : 0001 0000
							// &	 : 0000 0000
	printf("4번 학생: %s\n", check ? "O" : "X");

	// 2번 학생 출석 -> 결석 수정(비트 끄기): &~
	attend = attend & ~4;	// attend: 0000 0110 ****
							// 4	 : 0000 0100
							// ~4	 : 1111 1011 ****
							// &	 : 0000 0010
}

// (비트를 묶어서)
void exam3() {
	int x = 8;		// 0000 1000
	int y = 13;		// 0000 1101
	int xy = 0;		// 상위 4 bit에 y, 하위 4 bit에 x 저장
					// 1101 1000
	
	// x를 저장
	xy = xy | x;	// xy: 0000 0000
					// x : 0000 1000
					// | : 0000 1000

	xy = xy | (y << 4);	// xy  : 0000 1000
						// y   : 0000 1101
						// y<<4: 1101 0000
						// |   : 1101 1000

	printf("xy: %d\n", xy); // 216

	int x1, y1;
	x1 = xy & 15;		// xy: 1101 1000
						//   : 0000 1111
						// & : 0000 1000
	printf("%d\n", x1);

	y1 = xy & 0xf0;		// xy: 1101 1000
						//   : 1111 0000
						// & : 1101 0000
	y1 = y1 >> 4;
	printf("%d\n", y1);
}