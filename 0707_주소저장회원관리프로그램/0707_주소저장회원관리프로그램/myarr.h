#pragma once

#define ARR_MAX 10

typedef struct tagmyarr {
	void* arr[ARR_MAX];	// *
	int size;
	int max;
} myarr;

void myarr_init(myarr* pdata);
int myarr_push_back(myarr* pdata, void* value);	// *
int myarr_erase(myarr* pdata, int idx);
void* myarr_get_data(myarr* pdata, int idx);	// *