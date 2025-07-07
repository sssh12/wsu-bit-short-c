#pragma once

// 데이터(배열) 초기화,  CRUD 담당

void con_init();	// 배열/리스트 초기화 + 파일 로드
void con_exit();	// 종료시 파일 저장 등

void con_insert();	// 도서 등록
void con_select();	// 도서 조회(검색)
void con_update();	// 도서 정보 수정
void con_delete();	// 도서 삭제
void con_printAll();	// 도서 전체 출력

int title_to_idx(const char* title);	// 도서명 -> 인덱스 변환 (검색용)

