#include "std.h"

void myarr_init(myarr* pdata) {
	pdata->max = ARR_MAX;
	pdata->size = 0;
}

// ����, ����
int myarr_push_back(myarr* pdata, void* value) {
	if (pdata->max <= pdata->size) {
		return 0;
	}
	pdata->arr[pdata->size] = value;
	pdata->size++;

	return 1;
}

int myarr_erase(myarr* pdata, int idx) {
	// �߸��� �ε���
	if (idx < 0 || idx >= pdata->size) {
		return 0;
	}

	for (int i = idx; i < pdata->size - 1; i++) {
		pdata->arr[i] = pdata->arr[i + 1];
	}
	pdata->size--;
	return 1;
}

void* myarr_get_data(myarr* pdata, int idx) {
	// �߸��� �ε���
	if (idx < 0 || idx >= pdata->size) {
		return NULL;	// *****
	}
	else {
		return pdata->arr[idx];
	}

}
