#include <stdio.h>
#include <malloc.h>	// malloc, free

void exam1();
void exam2();
void exam3();

int main() {
	exam1();
	return 0;
}

void exam1() {
	// 정수 1개 저장 공간이 힙 메모리에 생성
	// 성공: 주소를 반환
	// 실패: NULL을 반환(주소가 없다.)	***** #define NULL 0 .
	int* p1 = (int*)malloc(sizeof(int));
	if (p1 == NULL) {
		printf("동적 메모리 요청 실패\n");
		return;
	}

	*p1 = 10;
	*p1 = 20;
	printf("%d\n", *p1);

	free(p1);	// ***************

	char* p2 = (char*)malloc(sizeof(char));
	if (p2 == NULL) {
		printf("동적 메모리 요청 실패\n");
		return;
	}

	*p2 = 'A';
	*p2 = 'B';

	printf("%c\n", *p2);
	
	free(p2);
}

void exam2() {
	// 주소를 저장하는 정적 배열
	int* arr[3];	// int*를 3개 저장하는 배열

	int num = 1;
	arr[0] = &num;	// 문법 YES, 논리 NO(지역 변수의 주소를 저장하지 말기)

	arr[0] = (int*)malloc(sizeof(int));

	*(arr[0]) = 1;	// arr[0]은 주소, *: 이동

	free(arr[0]);	// *****
}

void exam3() {
	int* arr1[3];	// int의 주소 저장 공간 3개 생성
	char* arr2[3];	// char의 주소 저장 공간 3개 생성
	void* arr3[3];	// 모든 타입의 주소 저장 공간 3개 생성

	int* temp = (int*)malloc(sizeof(int));
	*temp = 10;

	arr1[0] = temp;	// temp라는 변수는 메모리에서 사라져도 됨
					// 실제 저장된 것은 temp가 저장하고 있던 heap의 주소

	arr2[0] = (char*)malloc(sizeof(char));
	*(arr2[0]) = 'A';


	// void*: 모든 타입의 주소 저장 가능
	int* temp1 = (int*)malloc(sizeof(int));
	*temp1 = 10;
	arr3[1] = temp1;	// ***** int*

	char* temp2 = (char*)malloc(sizeof(char));
	*temp2 = 'A';
	arr3[2] = temp2;	// ***** char*
}