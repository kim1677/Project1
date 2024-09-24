#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define arr_size 10
#define RAND_SIZE 100

void main() {

	// 10ũ�� �迭 arr�� ������ ����
	srand(time (NULL));				// ���� �õ� ����

	int arr[arr_size];
	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10+1;		// C���� �������� %�� ���
	}

	for (int i = 0; i < arr_size; i++) {
		printf("%d \n", arr[i]);
	}



	// ����
	// ������(5~17)
	// 7,8,9 ���� ������ plus �̴�. ���
	// 10,11�� minus �̴�. ���
	// 100���� �ݺ��Ͽ� plus �̴�. ����Ҷ����� �迭�� ���� �����ϱ�
	// 100�� �ݺ��� ������ �迭 ���
	// * �迭�� ũ��� 100���� �ϰ� 0���� �ʱ�ȭ �ϱ�

    // �迭�� 0���� �ʱ�ȭ
    int num[RAND_SIZE] = { 0 };

    // �迭�� "plus"�� ���� ������ �ε���
    int k = 0;

    // 100�� �ݺ�
    for (int i = 0; i < RAND_SIZE; i++) {
        // 5���� 17 ������ ���� ����
        int temp = rand() % 13 + 5; // (0~12) + 5 => 5~17

        // ���ǿ� ���� ��� �� �迭 ����
        if (temp >= 7 && temp <= 9) {           // �� ������_7 �̻� 9 ������ ���
            printf("%d �� �÷���\n", temp);
            num[k++] = temp;
        }else if (temp == 10 || temp == 11) {   // �� ������_10�� 11 �߿� �ϳ��� ���� ���
            printf("%d �� ���̳ʽ�\n", temp);
        }

    }

    // �迭�� ����� �÷��� ���
    printf("\n����� �÷��� �� :\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", num[i]);
    }



    // �ڹٽ�ũ��Ʈ ������ �迭
    // var arr = new Array();
    // arr.push(new Array());
    // bar arr2 = [ [1,2,3], [4,5,6] ];

    // �ڹٽ� ������ �迭 ����
    // int[][] arr = new int[3][4];

    // C���� �������迭 ����
    int arr2[3][4];

    arr2[0][0] = 10;
    arr2[0][1] = 20;
    arr2[0][2] = 30;
    arr2[0][3] = 40;
    arr2[1][0] = 50;
    arr2[1][1] = 60;
    arr2[1][2] = 70;

    printf("\narr2 �ּ� �� %p", arr2);
    printf("\narr2+1 �ּ� �� %p", arr2+1);
    printf("\narr2[0] �ּ� �� %p", arr2[0]);
    printf("\narr2[0]+1 �ּ� �� %p", arr2[0]+1);

    printf("arr2[1], arr2+1 �ּ� �� %p, %p\n", arr2[1], arr2+1);
    printf("arr2[1]+1, (arr2+1)+1 �ּ� �� %p, %p\n", arr2[1] + 1, (arr2 + 1) + 1);

    printf("\narr2[1] �ּ� �� %p", arr2[1]);
    printf("\narr2[1][0] �ּ� �� %p", &arr2[1][0]);

    printf("\narr2[1][0] �ּ� �� %d", arr2[1][0]);
    printf("\n*arr2[1] �ּ� �� %d", *arr2[1]);

    printf("\n*arr2[1][0] �ּ� �� %d", *&arr2[1][0]);

}