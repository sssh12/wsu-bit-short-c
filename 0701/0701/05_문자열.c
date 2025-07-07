/*
ASCII 표(표준) - 영문자만 표현 가능...
OS마다 종속된 코드표(비표준) - 

----------------------------------------
UNICODE 표(표준) - 현재 시점 [모든 언어]
*/
#include <stdio.h>
#include <string.h>	// 문자열 연산 함수

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
104번지			str[4]				\0
103번지			str[3]				D
102번지			str[2]				C
101번지			str[1]				B
100번지			str[0]				A
-----------------------------------------

간단하게 아래의 형태로도 표현할 수 있다.
-----------------------------------------
100번지			str				"ABCD"
-----------------------------------------
*/
void exam1() {
	// 문자열 변수의 선언과 초기화
	char str1[5] = { "ABCD" };

	// %s는 전달된 주소 ~종결 문자
	// 1차원
	printf("%s\n", str1);		// ABCD
	printf("%s\n", str1 + 2);	// CD

	printf("%c\n", str1[1]);	// B
}

// 문자열 입출력
void exam2() {
	char str1[10];
	char str2[20];

	printf("이름: ");
	scanf_s("%s", str1, (int)sizeof(str1));

	char dummy = getchar();

	printf("이름: ");
	gets_s(str2, sizeof(str2));

	printf("%s, %s", str1, str2);
}

/*
gets : 엔터 문자('\n')를 만날 때까지 입력 버퍼에서 문자를 읽어온다.
	   \n를 만나면 버퍼에서 가져온다. 그리고 \0로 변환한다.
scanf: 공백(' '), 탭('\t'), 엔터('\n') 문자로 구분한다.
	   구분자는 버퍼에 남아있다.
*/
void exam3() {
	char str1[10];
	char str2[20];

	printf("이름: ");
	gets_s(str1, sizeof(str1));

	printf("이름: ");
	scanf_s("%s", str2, (int)sizeof(str2));

	printf("%s, %s", str1, str2);
}

// 문자열 연산(대입 연산)
void exam4() {
	int num1 = 10;
	int num2;

	num2 = num1;

	char str1[10] = "ABCD";
	char str2[10];

	//str2 = str1;		// 에러, "이유는 배열의 이름은 상수 주소"
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
	char str1[20] = "한글 abc";
	char str2[20];

	mystr_cpy(str2, str1);

	printf("%s\n", str2);
}


// --------- 문자열 연산 함수 ---------
// 대입 연산(strcpy)

void exam6() {
	char str1[20] = "한글 abc";
	char str2[20];

	strcpy_s(str2, sizeof(str2), str1);

	printf("%s\n", str2);
}

// 문자열 추가 연산(strcat)
void exam7() {
	char str1[20] = "ABC";
	char str2[20] = "abc";

	strcat_s(str2, sizeof(str2), str1);

	printf("%s\n", str2);
}

// 문자열 비교 함수(strcmp)
/*
비교  : 크다(>0), 같다(0), 작다(<0)
equals: True(1), False(0)
*/
void exam8() {
	char str1[] = "ABCD";
	char str2[] = "ABc";
	char str3[] = "ABCD";

	printf("%d\n", strcmp(str1, str2));	// 결과: 음수

	if (str1 == str3) {					// 주소 비교
		printf("같다\n");		
	}
	else {
		printf("다르다\n");
	}

	if (strcmp(str1, str3) == 0) {
		printf("같다\n");
	}
	else {
		printf("다르다\n");
	}
}

// 문자열 크기(strlen): 문자열 타입만(저장된 문자열 크기, 종결 문자 제외)
// 메모리 크기(sizeof): 모든 타입
void exam9() {
	char str1[20] = "abc";
	char str2[30] = "한글";
	char str3[40] = "ab 한글\t";

	printf("%d byte, %d byte\n", (int)sizeof(str1), strlen(str1));	// 20 byte, 3 byte
	printf("%d byte, %d byte\n", (int)sizeof(str2), strlen(str2));	// 30 byte, 4 byte
	printf("%d byte, %d byte\n", (int)sizeof(str3), strlen(str3));	// 40 byte, 8 byte
}