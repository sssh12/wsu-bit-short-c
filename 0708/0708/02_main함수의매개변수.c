// ����� ����
// ���α׷��� ���� �� ����� ���ڸ� �߰��� ������ �� �ִ�.
// �ش� ������ main �Լ��� ���ڷ� ���޵ȴ�.
#include <stdio.h>

// arg count: ����� ���� ����
// arg value: ���޵Ǵ� ����(char** ���ڿ���)

// test: ���� ������ ��ġ�� �̵�
int main(int argc, char** argv) {
	printf("���� ����: %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("[%d] %s\n", i, argv[i]);
	}

	return 0;
}