/*
char ch = 'A';
- 작은 따옴표로 표현한다.
  메모리는 무조건 숫자 형태만 저장 가능하다.
  문자를 숫자로 변환하는 코드표가 필요하다. (ASCII 코드표)
- 'A' -> ASCII -> 65, 변환된 숫자가 저장된다.
  char에는 ASCII 코드표에 있는 문자만 저장 가능(0 ~ 127)
- "%c" -> 메모리 숫자 -> ASCII -> 문자로 출력
- 문자는 양의 정수이다.(정수와 호환된다.)
*/

#include <stdio.h>

void exam1();
void exam2();

void main() {
	/*exam1();*/
	exam2();
}

void exam1() {
	char ch1 = 'A'; // 65

	printf("ch1에 저장된 문자: %c\n", ch1);
	printf("ch1에 저장된 숫자: %d\n", ch1);
}

void exam2() {
	char ch1 = 'A';
	char ch2 = 65;	// **
	int num1 = 65;
	int num2 = 'A';	// **

	printf("%d\t%d\t%d\t%d\n", ch1, ch2, num1, num2);
	printf("%c\t%c\t%c\t%c\n", ch1, ch2, num1, num2);
}