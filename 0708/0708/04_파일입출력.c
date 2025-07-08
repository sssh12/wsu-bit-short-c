#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();
void exam8();

int main() {
	//exam1();
	//exam2();
	//exam3();
	//exam4();
	//exam5();
	//exam6();
	//exam7();
	exam8();

	return 0;
}

// 문자 전용 파일 입출력: ACD\nEF
void exam1() {
	FILE* fp;
	int ret = fopen_s(&fp, "sample.txt", "w");

	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	fputc('A', fp);		// stdout (프로그렘 -> 콘솔 창)
	fputc('C', fp);
	fputc('D', fp);
	fputc('\n', fp);	// '\n': new line '\r': c return
	fputc('E', fp);
	fputc('F', fp);

	fclose(fp);
}

void exam2() {
	FILE* fp;
	int ret = fopen_s(&fp, "sample.txt", "r");

	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	char ch;
	ch = fgetc(fp); printf("%c\n", ch);	// A
	ch = fgetc(fp); printf("%c\n", ch);	// C
	ch = fgetc(fp); printf("%c\n", ch);	// D
	ch = fgetc(fp); printf("%c\n", ch);	// \n -> \r\n
	ch = fgetc(fp); printf("%c\n", ch);	// E
	ch = fgetc(fp); printf("%c\n", ch);	// F

	fclose(fp);
}

// 04_파일입출력.c -> 04_파일입출력_복사.txt
void exam3() {
	FILE *read_fp, *write_fp;
	int ret1 = fopen_s(&read_fp, "04_파일입출력.c", "r");
	int ret2 = fopen_s(&write_fp, "04_파일입출력_복사.txt", "w");

	if (ret1 != 0 || ret2 != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	while (1) {
		char ch = fgetc(read_fp);
		if (ch == -1) {	// EOF
			break;
		}

		fputc(ch, stdout);		// 화면 출력
		fputc(ch, write_fp);	// 파일 출력
	}

	fclose(read_fp);
	fclose(write_fp);
}

// 문자열 단위로 파일 입출력
void exam4() {
	FILE* fp;
	int ret = fopen_s(&fp, "sample.txt", "w");

	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	fputs("abcd\n", fp);
	fputs("한글출력\n", fp);

	fclose(fp);
}

void exam5() {
	FILE* fp;
	int ret = fopen_s(&fp, "sample.txt", "r");

	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	// 문자열은 보통 라인 단위로 읽는다.
	// 배열의 크기가 작으면?
	char temp[1024];

	fgets(temp, sizeof(temp), fp);		printf("%s", temp);
	fgets(temp, sizeof(temp), fp);		printf("%s", temp);

	fclose(fp);
}

// 04_파일입출력.c -> 04_파일입출력_복사.txt
void exam6() {
	FILE* read_fp, * write_fp;
	int ret1 = fopen_s(&read_fp, "04_파일입출력.c", "r");
	int ret2 = fopen_s(&write_fp, "04_파일입출력_복사.txt", "w");

	if (ret1 != 0 || ret2 != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	while (1) {
		char temp[1024];
		if (fgets(temp, sizeof(temp), read_fp) == 0) {	// EOF: 0
			break;
		}

		fputs(temp, stdout);
		fputs(temp, write_fp);
	}

	fclose(read_fp);
	fclose(write_fp);
}

// 바이너리 모드
void exam7() {
	FILE* fp;
	int ret = fopen_s(&fp, "sample.txt", "wb");

	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	int num = 10;
	char ch = 'A';
	float fnum = 10.123f;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	fwrite(&num, sizeof(int), 1, fp);	// 시작 주소, sizeof(int) * 1의 크기를 저장
	fwrite(&ch, sizeof(char), 1, fp);
	fwrite(&fnum, sizeof(float), 1, fp);
	fwrite(arr, sizeof(int), 10, fp);

	fclose(fp);
}

void exam8() {
	FILE* fp;
	int ret = fopen_s(&fp, "sample.txt", "rb");

	if (ret != 0) {
		printf("파일 열기 실패\n");
		return;
	}

	int num;
	char ch;
	float fnum;
	int arr[10];

	fread(&num, sizeof(int), 1, fp);	// 시작 주소, sizeof(int) * 1의 크기를 읽어옴
	fread(&ch, sizeof(char), 1, fp);
	fread(&fnum, sizeof(float), 1, fp);
	fread(arr, sizeof(int), 10, fp);

	printf("%d, %c, %.3f, %d, %d, %d\n", num, ch, fnum, arr[0], arr[1], arr[2]);

	fclose(fp);
}