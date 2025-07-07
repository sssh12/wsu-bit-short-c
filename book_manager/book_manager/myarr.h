#pragma once

// ������ �迭�� �ִ� ũ��
#define ARR_MAX 100

typedef struct tagmyarr {
	void* arr[ARR_MAX];	// � Ÿ�� �����͵� ���� ����(Ȯ�强)
	int size;			// ���� ����� ������ ����
	int max;			// �ִ� ���� ���� ����(���)

} myarr;

// �迭(����Ʈ) ����ü�� �ʱ�ȭ �ϴ� �Լ� ����
void myarr_init(myarr* parr);
int myarr_push_back(myarr* parr, void* value); // �� ������ �߰�(�ּ�!)
int myarr_erase(myarr* parr, int idx);	// ����
void* myarr_get_data(myarr* parr, int idx);	// idx��° ������ ��ȯ