#include "std.h"

void myarr_init(myarr* pdata) {
	pdata->max = ARR_MAX;
	pdata->size = 0;
}

// 성공, 실패
int myarr_push_back(myarr* pdata, member value) {
	if (pdata->max <= pdata->size) {
		return 0;
	}
	pdata->arr[pdata->size] = value;
	pdata->size++;

	return 1;
}

int myaddr_erase(myarr* pdata, int idx) {
	// 잘못된 인덱스
	if (idx < 0 || idx >= pdata->size) {
		return 0;
	}

	for (int i = idx; i < pdata->size - 1; i++) {
		pdata->arr[i] = pdata->arr[i + 1];
	}
	pdata->size--;
	return 1;
}
