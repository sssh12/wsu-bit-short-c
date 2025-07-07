#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void exam1();
void exam2();
void exam3();
void exam4();
void exam5();
void exam6();
void exam7();

void main() {
	/*exam1();*/
	/*exam2();*/
	/*exam3();*/
	/*exam4();*/
	/*exam5();*/
	exam6();
	/*exam7();*/
}

// ����ڷκ��� ���� 2���� �Է� �޾� ���� ����� ���Ͻÿ�.
// //in(���� 2��) --[����]--> out(���� ���)
void exam1() {
	// 1. ���� ����
	int num1, num2; // in
	int result;		// out

	// 2. in ���� �ʱ�ȭ
	printf("���� �Է�: ");
	scanf("%d", &num1);

	printf("���� �Է�: ");
	scanf("%d", &num2);


	// 3. ���� (in ���� -> out)
	result = num1 + num2; // ����

	// 4. ��� ���
	printf("���� ���: %d", result);
}

// ���� 3���� �Է� �޾� ���� ����� ����Ͻÿ�.
void exam2() {
	int num1, num2, num3, result;

	printf("���� �Է�: ");
	scanf("%d", &num1);

	printf("���� �Է�: ");
	scanf("%d", &num2);

	printf("���� �Է�: ");
	scanf("%d", &num3);

	result = num1 + num2 + num3;

	printf("\n���� ���: %d\n", result);
}

// ���ο� ���� ���̸� �Է� �޾� �簢���� ���̸� ���Ͻÿ�.
// �簢���� ���� = ���� ���� * ���� ����
void exam3() {
	int width, height, result;

	printf("���� ���� �Է�: ");
	scanf("%d", &width);

	printf("���� ���� �Է�: ");
	scanf("%d", &height);

	result = width * height;

	printf("\n�簢���� ����: %d\n", result);
}

// ���ο� ���� ���̸� �Է� �޾� �ﰢ���� ���̸� ���Ͻÿ�.
// �ﰢ���� ���� = (���� ���� * ���� ����) / 2
// ���� Ÿ�Գ����� ������ ���� Ÿ��
// ex) int�� int�� ���� ����� int
// ���� �ٸ� Ÿ�� �� ������ ǥ�� ������ ū ������
// ex) int�� float�� ���� ����� float
void exam4() {
	int width, height;
	float result; // ***

	printf("���� ���� �Է�: ");
	scanf("%d", &width);

	printf("���� ���� �Է�: ");
	scanf("%d", &height);

	// '=': 'int'���� 'float'(��)�� ��ȯ�ϸ鼭 �����Ͱ� �սǵ� �� �ֽ��ϴ�.
	// result = (width * height) / 2; -> �ذ�: result = (width * height) / 2.0f;

	result = ((float)width * height) / 2; // ���� �� ��ȯ

	printf("\n�ﰢ���� ����: %.2f\n", result);
}

/*���� �߷��� ���� �߷��� 17 % �� �Ұ��ϴ�.
		�������� �����԰� 100kg �� ����� �޿� ���� 17kg �� �ȴ�.
		������ �����Ը� �Է¹޾� �޿����� �����Ը� ����Ͻÿ�.
		�޿����� ������ = ���� ������ * 0.17

		���) ������ �Է� : 75(�Է°�)
		�޿����� ������ : 12.75*/
void exam5() {
	int weight;
	float moonWeight;

	printf("������ �Է�: ");
	scanf("%d", &weight);

	moonWeight = weight * 0.17f;

	printf("�޿����� ������: %.2f", moonWeight);
}

//���ڸ� �Է¹޾� �ش� ��¥�� ������  ������ ���·� ����Ͻÿ�.
//��, 1������ 30�Ϸ� ����
//���� = ��¥ / 30
//���� = ��¥ % 30
//
//���)  ���� : 100(�Է°�)
//��� : 3���� 10��
void exam6() {
	int day, days, month;
	
	printf("����: ");
	scanf("%d", &day);

	month = day / 30;
	days = day % 30;

	printf("���: %d���� %d��", month, days);
}

//�ҹ��ڸ� �Է¹޾� �빮�ڷ� ��ȯ�Ͽ� ����Ͻÿ�.
//�빮�� = �ҹ��� - (��a�� - ��A��)
void exam7() {
	char lower, upper;

	printf("�ҹ��� �Է�: ");
	scanf("%c", &lower);

	upper = lower - ('a' - 'A');

	printf("�빮��: %c", upper);
}
