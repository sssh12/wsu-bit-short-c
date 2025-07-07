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
	//1. ���� ���� -> �ʱ�ȭ
	int num1 = 10;
	char str1[10] = "ABC";

	//2. ���� Ÿ�� ����
	//data temp;
	//temp.num = num1;
	//strcpy_s(temp.str, sizeof(temp.str), str1);
	data* temp = (data*)malloc(sizeof(data));
	temp->num = num1;
	strcpy_s(temp->str, sizeof(temp->str), str1);

	//3. ����
	//arr[0] = &temp;
	arr[0] = temp;

	//4. ��� ���
	printf("����\n");
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
	data* arr[10] = { 0 };    //arr�� Ÿ��?  1���� �迭������, 2��
	//1���� �迭�̱⶧���� ���� �ǹ̰� ����
	//data**

	init_test(arr);
	insert_test(arr);
	print_test(arr);

	return 0;
}