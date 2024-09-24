#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define arr_size 10
#define RAND_SIZE 100

void main() {

	// 10크기 배열 arr에 랜덤값 생성
	srand(time (NULL));				// 랜덤 시드 설정

	int arr[arr_size];
	for (int i = 0; i < arr_size; i++) {
		arr[i] = rand() % 10+1;		// C언어는 랜덤값을 %로 계산
	}

	for (int i = 0; i < arr_size; i++) {
		printf("%d \n", arr[i]);
	}



	// 문제
	// 랜덤값(5~17)
	// 7,8,9 값이 나오면 plus 이다. 출력
	// 10,11은 minus 이다. 출력
	// 100번을 반복하여 plus 이다. 출력할때마다 배열에 숫자 저장하기
	// 100번 반복이 끝나면 배열 출력
	// * 배열의 크기는 100으로 하고 0으로 초기화 하기

    // 배열을 0으로 초기화
    int num[RAND_SIZE] = { 0 };

    // 배열에 "plus"인 값을 저장할 인덱스
    int k = 0;

    // 100번 반복
    for (int i = 0; i < RAND_SIZE; i++) {
        // 5에서 17 사이의 난수 생성
        int temp = rand() % 13 + 5; // (0~12) + 5 => 5~17

        // 조건에 따라 출력 및 배열 저장
        if (temp >= 7 && temp <= 9) {           // 논리 연산자_7 이상 9 이하일 경우
            printf("%d → 플러스\n", temp);
            num[k++] = temp;
        }else if (temp == 10 || temp == 11) {   // 논리 연산자_10과 11 중에 하나라도 참일 경우
            printf("%d → 마이너스\n", temp);
        }

    }

    // 배열에 저장된 플러스 출력
    printf("\n저장된 플러스 값 :\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", num[i]);
    }



    // 자바스크립트 다차원 배열
    // var arr = new Array();
    // arr.push(new Array());
    // bar arr2 = [ [1,2,3], [4,5,6] ];

    // 자바식 다차원 배열 예시
    // int[][] arr = new int[3][4];

    // C언어식 다차원배열 예시
    int arr2[3][4];

    arr2[0][0] = 10;
    arr2[0][1] = 20;
    arr2[0][2] = 30;
    arr2[0][3] = 40;
    arr2[1][0] = 50;
    arr2[1][1] = 60;
    arr2[1][2] = 70;

    printf("\narr2 주소 → %p", arr2);
    printf("\narr2+1 주소 → %p", arr2+1);
    printf("\narr2[0] 주소 → %p", arr2[0]);
    printf("\narr2[0]+1 주소 → %p", arr2[0]+1);

    printf("arr2[1], arr2+1 주소 → %p, %p\n", arr2[1], arr2+1);
    printf("arr2[1]+1, (arr2+1)+1 주소 → %p, %p\n", arr2[1] + 1, (arr2 + 1) + 1);

    printf("\narr2[1] 주소 → %p", arr2[1]);
    printf("\narr2[1][0] 주소 → %p", &arr2[1][0]);

    printf("\narr2[1][0] 주소 → %d", arr2[1][0]);
    printf("\n*arr2[1] 주소 → %d", *arr2[1]);

    printf("\n*arr2[1][0] 주소 → %d", *&arr2[1][0]);

}