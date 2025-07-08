#pragma once

#define ARR_MAX 10

typedef struct tagmyarr {
	void* arr[ARR_MAX];	
	int size;
	int max;
} myarr;

void myarr_init(myarr* parr);
int myarr_push_back(myarr* parr, void* value);
int myarr_erase(myarr* parr, int idx);
void* myarr_get_data(myarr* parr, int idx);