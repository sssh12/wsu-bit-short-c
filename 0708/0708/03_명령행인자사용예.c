#include <stdio.h>
#include <stdlib.h>	// exit()

int main(int argc, char** argv) {
	if (argc != 4) {
		printf("ȣ�� ��) �������ϸ�.exe 10 + 20\n");
		exit(-1);	// ���α׷� ���� ���� �Լ�
	}

	// "�������ϸ�.exe" "10" "+" "20" 
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