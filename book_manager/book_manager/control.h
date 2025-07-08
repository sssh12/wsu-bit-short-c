#pragma once

// 도서 배열 초기화 및 파일 로드
void con_init();

// 종료 시 파일 저장 등 정리 작업
void con_exit();

// 도서 등록(입력받아 배열에 추가)
void con_insert();

// 도서 조회(제목으로 검색)
void con_select();

// 도서 정보 수정(출간일, 출판사)
void con_update();

// 도서 삭제(메모리 해제 및 배열에서 제거)
void con_delete();

// 전체 도서 목록 출력
void con_printAll();

// 제목을 인덱스로 변환(검색)
int title_to_idx(const char* title);

