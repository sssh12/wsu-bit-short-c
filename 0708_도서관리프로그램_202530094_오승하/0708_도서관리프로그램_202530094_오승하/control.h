#pragma once

void con_init();
void con_exit();

void con_insert();
void con_select_from_isbn();
void con_select_from_title();
void con_update();
void con_delete();
void con_printAll();

int isbn_to_idx(const int isbn);
int title_to_idx(const char* title);
