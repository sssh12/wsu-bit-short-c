#include <stdio.h>

// main �Լ��� ǥ��
/*
����(��ȯ): ȣ���ڿ��� �����ϴ� ����
*/
// int printf(const char* _Format, ...);
/*
���� Ÿ��		: int
�Լ���			: printf
�Ű� ���� ����Ʈ: 2��
	1) const char*: ��� ���ڿ� (Ÿ��)
		���: ������ �ʴ� �� 
			const int NUM = 10;		NUM = 20(����)
		����: ���ϴ� ��		 
			int num = 10;			num = 20;
	2) ...		  : ������ ���� (Ÿ�԰� ������ �����Ӱ�)
*/
int main() {
	int ret = printf("abc\n");
	printf("%d byte\n", ret);

	return 0;	// �� ����Ǿ���.
}