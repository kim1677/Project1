#include <stdio.h>
#include <string.h>

// ����ü(C���� Ŭ����) ����
struct member {
	int age;		// ����Ÿ�� ����
	float eyes;		// �Ǽ�Ÿ�� ����
	char name[10];	// ����Ÿ�� �迭 (�ִ� 9����, �������� Null ����)
};

typedef struct grade {	
	int kor;
	int mat;
	int eng;
	int total;
	int avg;
}grade;

void tot_avg(grade * p) {
	// �ݺ��� ����
	for (int i = 0; i < 5; i++) {
		p[i].total = p[i].kor + p[i].mat + p[i].eng;	// �� �л��� ���� ��� (���� + ���� + ����)
		p[i].avg = p[i].total / 3.0;					// ��� ��� (���� / 3.0)
	}
}

void main() {
	grade std1 = { 88,99,75 };			// grade ����ü�� std1 ���� ����

	// ���� ������ �Է�
	std1.kor = 88; 
	std1.mat = 99;
	std1.eng = 75;

	// ���� �� ��� ���
	std1.total = std1.kor + std1.mat + std1.eng;
	std1.avg = std1.total / 3.0;

	// std ������ �迭�� ���� �� ���� �����͸� ����ü �迭�� �ʱ�ȭ
	grade std[5] = { {88,94,34}, {66,45,61}, {90,11,45}, {87,34,91}, {84,72,89} };
	// ������ ����� ����ϴ� �Լ� ȣ��
	tot_avg(std);

	// �� �л��� ���� ������ ���
	for (int i = 0; i < 5; i++) {
		printf("%d %d %d %d %.2f \n", 
			std[i].kor, 
			std[i].mat, 
			std[i].eng, 
			std[i].total, 
			std[i].avg);
	}


	struct member m;	// member ����ü ���� m ����

	// ����ü member ������ �� �Ҵ� �� ���
	m.age = 24;
	m.eyes = 1.2;
	printf("%d \n%f \n", m.age, m.eyes);

	// ����ü�� �̿��� ���ڿ� ���� �� ���
	strcpy_s(m.name, 10, "ȫ�浿");
	printf("%s \n", m.name);
}


/* ����ü: C����� �⺻ ������ Ÿ������ ���Ӱ� �����ϴ� ����� ������ Ÿ��
�� �κа� ��ҵ��� �� �̷���� ��ü�� ���� */