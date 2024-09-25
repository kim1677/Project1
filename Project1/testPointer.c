#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 문제
// main 함수에서 1차원 배열 numbers를 생성
// numbers 크기는 15
// input 이라는 함수를 통해 numbers 배열에 랜덤값 저장하기 랜덤범위(1~50)
// print 함수를 통해 numbers 값 출력하기

// 함수의 원형
void input(int*, int);  // 데이터 입력 함수 선언
void print(int* n);     // 데이터 출력 함수 선언

void main() {
    int numbers[15];  // 크기가 15인 배열 생성

    // 배열에 값 입력
    input(numbers, sizeof(numbers)/sizeof(int) );

    // 배열 값 출력
    print(numbers);

}

// 배열에 랜덤 값을 저장하는 함수
void input(int* n, int size) {

    // 랜덤 시드 설정
    srand(time(0));

    // 반복문 및 랜덤값 생성
    for (int i = 0; i < size; i++) {
        n[i] = rand() % 50 + 1;  // 1~50 사이의 랜덤값 저장
    }
}

// 배열 값을 출력하는 함수
void print(int* n) {
    for (int i = 0; i < 15; i++) {
        printf("%d ", n[i]);
    }
}