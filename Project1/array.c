#include <stdio.h>
#include <string.h>

#define size 3

void main() {

	// �ڹٹ�� �迭 ����
	// int[] arr = new int[5];

	// C��� �迭 ����
	int arr[5] = { 1, 2, 3, 4, 5 };

	// C��� �迭 ���� 2
	int arr2[] = { 11, 22, 33, 44 }; 

	// const int size = 3;
	// constexpr int a = 10;	// C++ ����11 �̻�

	// C��� �迭 ���� 3
	// ��ܿ� #define size 3 ����
	int arr3[size];

	// C��� �迭 �ʱ�ȭ
	// �迭 �ʱ�ȭ
	// int number[10] = { 0 };

	// �Լ��� �̿��� �迭 �ʱ�ȭ
	int number[5];
	memset(number, 0, 5 * sizeof(int) );		// �迭�� �̸� ��ü�� �޸� �ּ��̱� ������ ������ &�� �� �ᵵ ��
												// sizeof(int) �迭 ũ�⸦ ���
	printf("%d \n", number[2]);

	// �ݺ����� �̿��� �迭 ���
	number[0] = 10;
	number[1] = 20;
	number[2] = 30;
	number[3] = 40;
	number[4] = 50;
	printf("%d \n", number[4]);
	for (int i = 0; i < sizeof(number) / sizeof(int); i++) {
		printf("%d \n", number[i]);
	}



	// ����
	/* ��� ���ڰ� 10�ڽ��� �ִ�.
	�� �ڽ��ȿ� ����ִ� ��� �����̴�.
	���� 50�� �̻� ����ڽ��� �� ��° �ڽ����� ��� */
	int apple[10] = { 45, 34, 67, 23, 12, 69, 51, 89, 99, 28 };

	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		if (apple[i] >= 50) {
			printf("%d��° �ڽ� \n", i+1);
		}
	}



	// ����.2
	/* ���� 5���̰� �ִ�.
	�Ѽ��̿� ������ ��� �޷� �ִ��� �Է��Ͽ�
	grape �迭�� �����ϰ� ��ü ����Ͻÿ� */
	int grape[5];

	// �Ѽ��̿� ������ �� �� �޷� �ִ��� �Է��Ͽ� grape �迭�� ����
	for (int i = 0; i < 5; i++){
		printf("%d��° ������ ���� : ", i + 1);
		// scanf_s("%d", &grape[i]);
		scanf_s("%d", grape + i);
	}

	// grape �迭 ��ü ���
	for (int i = 0; i < 5; i++){
		/*printf("���� %d����: %d��\n", i + 1, grape[i]);*/
		printf("%d \n", grape[i]);
	}

}