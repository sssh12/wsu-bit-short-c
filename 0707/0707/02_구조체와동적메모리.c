#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef struct tagdata
{
	int num;
	char str[10];
}data;

void init_test(data** arr)
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = NULL;
	}
}

void insert_test(data** arr)
{
	//1. 변수 선언 -> 초기화
	int num1 = 10;
	char str1[10] = "ABC";

	//2. 저장 타입 생성
	//data temp;
	//temp.num = num1;
	//strcpy_s(temp.str, sizeof(temp.str), str1);
	data* temp = (data*)malloc(sizeof(data));
	temp->num = num1;
	strcpy_s(temp->str, sizeof(temp->str), str1);

	//3. 저장
	//arr[0] = &temp;
	arr[0] = temp;

	//4. 결과 출력
	printf("성공\n");
}

void print_test(const data** arr)
{
	for (int i = 0; i < 10; i++)
	{
		const data* temp = arr[i];
		//temp->num = 222;
		if (temp != NULL)
			printf("%d, %s\n", temp->num, temp->str);
	}
}

int main()
{
	data* arr[10] = { 0 };    //arr의 타입?  1차원 배열이지만, 2차
	//1차원 배열이기때문에 열의 의미가 없다
	//data**

	init_test(arr);
	insert_test(arr);
	print_test(arr);

	return 0;
}