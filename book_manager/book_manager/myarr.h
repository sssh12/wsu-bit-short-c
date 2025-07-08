#pragma once

// ����(Ȥ�� �ٸ� Ÿ��) �����͸� ������ �� �ִ� �迭 ����ü
#define ARR_MAX 100

typedef struct tagmyarr {
	void* arr[ARR_MAX]; // void*�� �����Ͽ� �پ��� Ÿ���� ������ ���� ����
	int size;           // ���� ����� ������ ����
	int max;            // �ִ� ���� ���� ����(���)
} myarr;

// �迭�� �ʱ�ȭ(������ 0����)
void myarr_init(myarr* parr);		

// �迭 ���� �� �����͸� �߰�(�����ͷ� ����)
int myarr_push_back(myarr* parr, void* value);

// ���� �ε����� �����͸� ����(���� �����͵��� ������ ���)
int myarr_erase(myarr* parr, int idx);

// ���� �ε����� ������(������) ��ȯ
void* myarr_get_data(myarr* parr, int idx);