#include <stdio.h>

/*
����
5���� �л��� �ִ�.
���� ���� ���� 3������ ������ �Է��ϰ�
������ ����� �����Ͻÿ�.
���� �Է� �Լ� - input
(5�� �л��� ���������� ����, ����� ������ �� �ִ� 2���� �迭 ����)
*/

void input(int (*p)[5]);

void main() {
	int std[5][5] = { 0 };

	input(std);

	// ������ ��� ���
	for (int i = 0; i < 5; i++) {
		printf("�л� %d�� ����: %d\n", i + 1, std[i][3]);
		printf("�л� %d�� ���: %d\n", i + 1, std[i][4]);
	}
}

void input(int(*p)[5]) {
	for (int i = 0; i < 5; i++) {
		printf("���� : ");
		scanf_s("%d", &p[i][0]);
		printf("���� : ");
		scanf_s("%d", p[i] + 1);
		printf("���� : ");
		scanf_s("%d", &p[i][2]);
		p[i][3] = p[i][0] + p[i][1] + p[i][2];	// ����
		p[i][4] = p[i][3] / 3;	// ���
	}
}
