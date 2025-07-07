// 주소 고정: 프로젝트 >> 속성 >> [구성 속성 > 링커 > 고급]
//			  임의 기준 주소: 아니요
//			  고정 기준 주소: 예

#include <stdio.h>
#include <stdlib.h>

void exam1();
void exam2();
void exam3();


void main() {
	//exam1();
	//exam2();
	exam3();

}

/*
--------------------------------------
FC48		arr[4]
FC44		arr[3]
FC40		arr[2]
FC3C		arr[1]
FC38		arr[0]
--------------------------------------
*/
void exam1() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	printf("배열의 이름: 0x%p\n", arr);	// FC38
	printf("arr + 1: 0x%p\n", arr + 1);	// FC3C
	printf("arr + 4: 0x%p\n", arr + 4);	// FC48
	printf("arr를 +1만큼 이동한 역참조(arr[1])    : %d\n", arr[1]);		// 2
	printf("arr를 +1만큼 이동한 역참조(*(arr + 1)): %d\n", *(arr + 1));	// 2
}