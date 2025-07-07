#pragma once

#define ARR_MAX 10

typedef struct tagmyarr {
	member arr[ARR_MAX];
	int size;
	int max;
} myarr;

void myarr_init(myarr* pdata);
int myarr_push_back(myarr* pdata, member value);
int myaddr_erase(myarr* pdata, int idx);