#pragma once

// ���� �迭 �ʱ�ȭ �� ���� �ε�
void con_init();

// ���� �� ���� ���� �� ���� �۾�
void con_exit();

// ���� ���(�Է¹޾� �迭�� �߰�)
void con_insert();

// ���� ��ȸ(�������� �˻�)
void con_select();

// ���� ���� ����(�Ⱓ��, ���ǻ�)
void con_update();

// ���� ����(�޸� ���� �� �迭���� ����)
void con_delete();

// ��ü ���� ��� ���
void con_printAll();

// ������ �ε����� ��ȯ(�˻�)
int title_to_idx(const char* title);

