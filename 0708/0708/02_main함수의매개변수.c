// 명령행 인자
// 프로그램을 실행 시 명령행 인자를 추가로 전달할 수 있다.
// 해당 정보는 main 함수에 인자로 전달된다.
#include <stdio.h>

// arg count: 명령행 인자 개수
// arg value: 전달되는 정보(char** 문자열들)

// test: 실행 파일의 위치로 이동
int main(int argc, char** argv) {
	printf("인자 개수: %d\n", argc);

	for (int i = 0; i < argc; i++) {
		printf("[%d] %s\n", i, argv[i]);
	}

	return 0;
}