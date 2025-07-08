#include <stdio.h>
#include <stdlib.h>	// exit()

int main(int argc, char** argv) {
	if (argc != 4) {
		printf("호출 예) 실행파일명.exe 10 + 20\n");
		exit(-1);	// 프로그램 강제 종료 함수
	}

	// "실행파일명.exe" "10" "+" "20" 
	int num1 = atoi(argv[1]);	// "123" -> 123
	char oper = argv[2][0];		// "+" -> '+'
	int num2 = atoi(argv[3]);	// "20" -> 20

	switch (oper) {
	case '+': printf("%d\n", num1 + num2); break;
	case '-': printf("%d\n", num1 - num2); break;
	case '*': printf("%d\n", num1 * num2); break;
	}

	return 0;
}