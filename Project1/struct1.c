#include <stdio.h>

// ����(����)�� ������(�Ǽ�)�� ������ �� �ִ� ����ü ����
typedef struct info {
    int age;        // ���� (������ ����)
    float wg;       // ������ (�Ǽ��� ����)
}info;

// ����� ������ ��� ����ü User
typedef struct User {
    char name[10];
    // info i;              // ����
    info *data;             // �ܺ�����
    struct User *next;      // ��������
}User;

// �Է� �Լ�: Ű����κ��� 3���� ������ �Է¹���
void input(info * p) {
    for (int i = 0; i < 3; i++) {
        printf("���̸� �Է��ϼ��� : ");
        scanf_s("%d", &p[i].age);
        printf("�����Ը� �Է��ϼ��� : ");
        scanf_s("%f", &p[i].wg);
    }
}

// ��� �Լ�: 3���� ������ �����
void print(info * p) {
    for (int i = 0; i < 3; i++) {
        printf("�ɹ�%d : ���� = %d, ������ = %.1fkg \n", i + 1, p[i].age, p[i].wg);
    }
}

void main() {

    User u;             // User ����ü ���� u ����
    info i;             // info ����ü ���� i ����
    u.data = &i;        // u�� data �ʵ忡 i�� �ּҸ� ���� (info ������ �ʱ�ȭ)
    u.data->age = 10;   // u�� data�� ����Ű�� info ����ü�� age �ʵ忡 10�� ����
    u.data->wg = 75.1;  // u�� data�� ����Ű�� info ����ü�� wg �ʵ忡 75.1�� ����

    info i2;            // ���ο� info ����ü ���� i2 ����
    User daum = { "������", &i2 };     // "������", data�� i2�� �ּҸ� ������ User ����ü daum �ʱ�ȭ
    daum.data->age = 24;               // daum�� data�� ����Ű�� info ����ü�� age �ʵ忡 24�� ����
    daum.data->wg = 65.8;              // daum�� data�� ����Ű�� info ����ü�� wg �ʵ忡 65.8�� ����

    u.next = &daum;     // u�� next �ʵ忡 daum ����ü�� �ּҸ� ���� (���� User ����)

    printf("%s %d \n", u.next->name, u.next->data->age);    // "������"�� age ����� ���


    // 3���� ������ ������ ����ü �迭 ����
    info member[3];

    // ���� �Է�
    input(member);

    // ���� ���
    print(member);

}

// ����(����)�� ������(�Ǽ�)�� ������ �� �ִ� ����ü 3���� ������ �Է��ϰ� ����Ͻÿ�.(����ü �迭)
// input - �Է� �Լ� : Ű���� �Է�
// print - ��� �Լ�