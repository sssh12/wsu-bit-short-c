/*
�迭�� �Լ� ȣ��
1) �迭�� �̸��� �ּ� -> �迭�� �̸� ����: �ּ� ����
   �迭�� �̸����� �� ���� �Ұ���
   ���� ����
   - ��  : ����
   - �ּ�: ���� ����
*/
#include <stdio.h>

// �迭�� ���� �ּҿ� ����� ������ �����Ѵ�.
void init_arr(int* parr, int size);

// ����, ������ ���� ���� X: const�� Ȱ���Ѵ�.
void print_arr(const int* parr, int size);

int main() {
	int arr[1000];

	// 1 ~ �� ����
	init_arr(arr, 1000);

	// �迭 ����� �� ���
	print_arr(arr, 1000);

	return 0;
}

void init_arr(int* parr, int size) {
	for (int i = 0; i < size; i++) {
		parr[i] = i + 1;	// main �Լ��� �迭
	}
}

void print_arr(const int* parr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%-5d", parr[i]);	// main �Լ��� �迭
	}
	printf("\n");
}