//�ǽ� 3. �Ʒ� ������ �ش��ϴ� �Լ��� �����Ͻÿ�.
//
//int  main()
//{
//    int arr[5] = { 1, 2, 3, 4, 5 };
//
//    input_number(arr, 2, 30);   //arr 2�� �ε��� ���� 30���� ����
//
//    int num = get_number(arr, 2);  //arr 2�� �ε��� ���� ��ȯ 
//
//    printf(�� % d\n��, num);   //30���
//}
#include <stdio.h>

void input_number(int* parr, int index, int value);
int get_number(int* parr, int index);

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	input_number(arr, 2, 30);	// arr 2�� �ε��� ���� 30���� ����

	int num = get_number(arr, 2);	// arr 2�� �ε��� ���� ��ȯ

	printf("%d\n", num);
}

void input_number(int* parr, int index, int value) {
	parr[index] = value;
}

int get_number(int* parr, int index) {
	int num;
	num = parr[index];
	return num;
}