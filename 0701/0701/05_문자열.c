/*
ASCII ǥ(ǥ��) - �����ڸ� ǥ�� ����...
OS���� ���ӵ� �ڵ�ǥ(��ǥ��) - 

----------------------------------------
UNICODE ǥ(ǥ��) - ���� ���� [��� ���]
*/
#include <stdio.h>
#include <string.h>	// ���ڿ� ���� �Լ�

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void mystr_cpy(char* s1, const char* s2);
void exam6();
void exam7();
void exam8();
void exam9();

int main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	//exam8();
	exam9();

	return 0;
}

/*
-----------------------------------------
104����			str[4]				\0
103����			str[3]				D
102����			str[2]				C
101����			str[1]				B
100����			str[0]				A
-----------------------------------------

�����ϰ� �Ʒ��� ���·ε� ǥ���� �� �ִ�.
-----------------------------------------
100����			str				"ABCD"
-----------------------------------------
*/
void exam1() {
	// ���ڿ� ������ ����� �ʱ�ȭ
	char str1[5] = { "ABCD" };

	// %s�� ���޵� �ּ� ~���� ����
	// 1����
	printf("%s\n", str1);		// ABCD
	printf("%s\n", str1 + 2);	// CD

	printf("%c\n", str1[1]);	// B
}

// ���ڿ� �����
void exam2() {
	char str1[10];
	char str2[20];

	printf("�̸�: ");
	scanf_s("%s", str1, (int)sizeof(str1));

	char dummy = getchar();

	printf("�̸�: ");
	gets_s(str2, sizeof(str2));

	printf("%s, %s", str1, str2);
}

/*
gets : ���� ����('\n')�� ���� ������ �Է� ���ۿ��� ���ڸ� �о�´�.
	   \n�� ������ ���ۿ��� �����´�. �׸��� \0�� ��ȯ�Ѵ�.
scanf: ����(' '), ��('\t'), ����('\n') ���ڷ� �����Ѵ�.
	   �����ڴ� ���ۿ� �����ִ�.
*/
void exam3() {
	char str1[10];
	char str2[20];

	printf("�̸�: ");
	gets_s(str1, sizeof(str1));

	printf("�̸�: ");
	scanf_s("%s", str2, (int)sizeof(str2));

	printf("%s, %s", str1, str2);
}

// ���ڿ� ����(���� ����)
void exam4() {
	int num1 = 10;
	int num2;

	num2 = num1;

	char str1[10] = "ABCD";
	char str2[10];

	//str2 = str1;		// ����, "������ �迭�� �̸��� ��� �ּ�"
	str2[0] = str1[0];
	str2[1] = str1[1];
	str2[2] = str1[2];
	str2[3] = str1[3];
	str2[4] = str1[4];

	printf("%s\n", str2);
}

void mystr_cpy(char* s1, const char* s2) {
	for ( ; *s2 != '\0'; s2++, s1++) {
		*s1 = *s2;
	}
	*s1 = '\0';
}

void exam5() {
	char str1[20] = "�ѱ� abc";
	char str2[20];

	mystr_cpy(str2, str1);

	printf("%s\n", str2);
}


// --------- ���ڿ� ���� �Լ� ---------
// ���� ����(strcpy)

void exam6() {
	char str1[20] = "�ѱ� abc";
	char str2[20];

	strcpy_s(str2, sizeof(str2), str1);

	printf("%s\n", str2);
}

// ���ڿ� �߰� ����(strcat)
void exam7() {
	char str1[20] = "ABC";
	char str2[20] = "abc";

	strcat_s(str2, sizeof(str2), str1);

	printf("%s\n", str2);
}

// ���ڿ� �� �Լ�(strcmp)
/*
��  : ũ��(>0), ����(0), �۴�(<0)
equals: True(1), False(0)
*/
void exam8() {
	char str1[] = "ABCD";
	char str2[] = "ABc";
	char str3[] = "ABCD";

	printf("%d\n", strcmp(str1, str2));	// ���: ����

	if (str1 == str3) {					// �ּ� ��
		printf("����\n");		
	}
	else {
		printf("�ٸ���\n");
	}

	if (strcmp(str1, str3) == 0) {
		printf("����\n");
	}
	else {
		printf("�ٸ���\n");
	}
}

// ���ڿ� ũ��(strlen): ���ڿ� Ÿ�Ը�(����� ���ڿ� ũ��, ���� ���� ����)
// �޸� ũ��(sizeof): ��� Ÿ��
void exam9() {
	char str1[20] = "abc";
	char str2[30] = "�ѱ�";
	char str3[40] = "ab �ѱ�\t";

	printf("%d byte, %d byte\n", (int)sizeof(str1), strlen(str1));	// 20 byte, 3 byte
	printf("%d byte, %d byte\n", (int)sizeof(str2), strlen(str2));	// 30 byte, 4 byte
	printf("%d byte, %d byte\n", (int)sizeof(str3), strlen(str3));	// 40 byte, 8 byte
}