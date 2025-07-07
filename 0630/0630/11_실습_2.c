//실습2.아래 구문에 해당하는 함수를 구현하시오.
//
//int main()
//{
//    int  jumsu;
//
//    jumsu = input_jumsu();    //정수를 입력받아 반환
//
//    char result = get_result(jumsu); //jumsu가 60 >=  ‘P’ 리턴
//    //  아니면  ‘F’ 리턴
//
//    print_result(jumsu, result);      // 입력이 65점일 경우 출력 예)   65점 -> P
//    입력이 55점일 경우 출력 예)   55점->F
//
//    return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input_jumsu();
char get_result(int jumsu);
void print_result(int jumsu, char result);

int main() {
	int jumsu;

	jumsu = input_jumsu();

	char result = get_result(jumsu); // jumsu가 60 >= 'P' 리턴 아니면 'F' 리턴

	print_result(jumsu, result);	 // 입력이 65점일 경우 출력 예) 65점 -> P
	// 입력이 55점일 경우 출력 예) 55점 -> F

	return 0;
}

int input_jumsu() {
	int jumsu;

	printf("점수 입력: ");
	scanf("%d", &jumsu);

	return jumsu;
}

char get_result(int jumsu) {
	if (jumsu >= 60) {
		return 'P';
	}
	else {
		return 'F';
	}
}

void print_result(int jumsu, char result) {
	printf("%d점 -> %c\n", jumsu, result);
}