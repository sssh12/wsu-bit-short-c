/*
char ch = 'A';
- ���� ����ǥ�� ǥ���Ѵ�.
  �޸𸮴� ������ ���� ���¸� ���� �����ϴ�.
  ���ڸ� ���ڷ� ��ȯ�ϴ� �ڵ�ǥ�� �ʿ��ϴ�. (ASCII �ڵ�ǥ)
- 'A' -> ASCII -> 65, ��ȯ�� ���ڰ� ����ȴ�.
  char���� ASCII �ڵ�ǥ�� �ִ� ���ڸ� ���� ����(0 ~ 127)
- "%c" -> �޸� ���� -> ASCII -> ���ڷ� ���
- ���ڴ� ���� �����̴�.(������ ȣȯ�ȴ�.)
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

	printf("ch1�� ����� ����: %c\n", ch1);
	printf("ch1�� ����� ����: %d\n", ch1);
}

void exam2() {
	char ch1 = 'A';
	char ch2 = 65;	// **
	int num1 = 65;
	int num2 = 'A';	// **

	printf("%d\t%d\t%d\t%d\n", ch1, ch2, num1, num2);
	printf("%c\t%c\t%c\t%c\n", ch1, ch2, num1, num2);
}