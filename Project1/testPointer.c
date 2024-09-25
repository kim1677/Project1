#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ����
// main �Լ����� 1���� �迭 numbers�� ����
// numbers ũ��� 15
// input �̶�� �Լ��� ���� numbers �迭�� ������ �����ϱ� ��������(1~50)
// print �Լ��� ���� numbers �� ����ϱ�

// �Լ��� ����
void input(int*, int);  // ������ �Է� �Լ� ����
void print(int* n);     // ������ ��� �Լ� ����

void main() {
    int numbers[15];  // ũ�Ⱑ 15�� �迭 ����

    // �迭�� �� �Է�
    input(numbers, sizeof(numbers)/sizeof(int) );

    // �迭 �� ���
    print(numbers);

}

// �迭�� ���� ���� �����ϴ� �Լ�
void input(int* n, int size) {

    // ���� �õ� ����
    srand(time(0));

    // �ݺ��� �� ������ ����
    for (int i = 0; i < size; i++) {
        n[i] = rand() % 50 + 1;  // 1~50 ������ ������ ����
    }
}

// �迭 ���� ����ϴ� �Լ�
void print(int* n) {
    for (int i = 0; i < 15; i++) {
        printf("%d ", n[i]);
    }
}