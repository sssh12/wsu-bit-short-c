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
	// ���� 1�� ���� ������ �� �޸𸮿� ����
	// ����: �ּҸ� ��ȯ
	// ����: NULL�� ��ȯ(�ּҰ� ����.)	***** #define NULL 0 .
	int* p1 = (int*)malloc(sizeof(int));
	if (p1 == NULL) {
		printf("���� �޸� ��û ����\n");
		return;
	}

	*p1 = 10;
	*p1 = 20;
	printf("%d\n", *p1);

	free(p1);	// ***************

	char* p2 = (char*)malloc(sizeof(char));
	if (p2 == NULL) {
		printf("���� �޸� ��û ����\n");
		return;
	}

	*p2 = 'A';
	*p2 = 'B';

	printf("%c\n", *p2);
	
	free(p2);
}

void exam2() {
	// �ּҸ� �����ϴ� ���� �迭
	int* arr[3];	// int*�� 3�� �����ϴ� �迭

	int num = 1;
	arr[0] = &num;	// ���� YES, �� NO(���� ������ �ּҸ� �������� ����)

	arr[0] = (int*)malloc(sizeof(int));

	*(arr[0]) = 1;	// arr[0]�� �ּ�, *: �̵�

	free(arr[0]);	// *****
}

void exam3() {
	int* arr1[3];	// int�� �ּ� ���� ���� 3�� ����
	char* arr2[3];	// char�� �ּ� ���� ���� 3�� ����
	void* arr3[3];	// ��� Ÿ���� �ּ� ���� ���� 3�� ����

	int* temp = (int*)malloc(sizeof(int));
	*temp = 10;

	arr1[0] = temp;	// temp��� ������ �޸𸮿��� ������� ��
					// ���� ����� ���� temp�� �����ϰ� �ִ� heap�� �ּ�

	arr2[0] = (char*)malloc(sizeof(char));
	*(arr2[0]) = 'A';


	// void*: ��� Ÿ���� �ּ� ���� ����
	int* temp1 = (int*)malloc(sizeof(int));
	*temp1 = 10;
	arr3[1] = temp1;	// ***** int*

	char* temp2 = (char*)malloc(sizeof(char));
	*temp2 = 'A';
	arr3[2] = temp2;	// ***** char*
}