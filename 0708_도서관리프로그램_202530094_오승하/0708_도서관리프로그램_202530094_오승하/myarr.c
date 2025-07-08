#include "std.h"

void myarr_init(myarr* parr) {
	parr->max = ARR_MAX;
	parr->size = 0;
}

int myarr_push_back(myarr* parr, void* value) {
	if (parr->max <= parr->size) {
		return 0;
	}
	parr->arr[parr->size] = value;
	parr->size++;

	return 1;
}
int myarr_erase(myarr* parr, int idx) {
	if (idx < 0 || idx >= parr->size) {
		return 0;
	}

	for (int i = idx; i < parr->size - 1; i++) {
		parr->arr[i] = parr->arr[i + 1];
	}
	parr->size--;
	return 1;
}

void* myarr_get_data(myarr* parr, int idx) {
	if (idx < 0 || idx >= parr->size) {
		return NULL;
	}
	else {
		return parr->arr[idx];
	}
}