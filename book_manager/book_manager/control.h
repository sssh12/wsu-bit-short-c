#pragma once

// ������(�迭) �ʱ�ȭ,  CRUD ���

void con_init();	// �迭/����Ʈ �ʱ�ȭ + ���� �ε�
void con_exit();	// ����� ���� ���� ��

void con_insert();	// ���� ���
void con_select();	// ���� ��ȸ(�˻�)
void con_update();	// ���� ���� ����
void con_delete();	// ���� ����
void con_printAll();	// ���� ��ü ���

int title_to_idx(const char* title);	// ������ -> �ε��� ��ȯ (�˻���)

