#pragma once

void con_init();
void con_exit();

void con_insert();
void con_select();
void con_update();
void con_delete();
void con_printAll();

int name_to_idx(const char* name);
