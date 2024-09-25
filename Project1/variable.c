#include <stdio.h>
#include <time.h>

extern int result;				// 다른 곳에 있는 전역변수 똑같이 선언
extern void sum(int, int);

int size = 100;					// 전역변수

void test();

int len = 50;					// 전역변수

void main() {
	//sum(30, 40);
	//printf("외부 변수 %d \n", result);

	//// 변수, 배열 선언은 맨위에
	//int num = 10;				// 지역변수
	//printf("%d \n", size);
	//test();
	//size = 1500;
	//test();

	int num = 0, i = 0, k = 0;	// 지역변수
	register int reg = 0, reg_i = 0, reg_k = 0;	// 레지스터 변수

	clock_t time1 = clock(), time2;
	for (i = 0; i < 10000; i++) {
		for (k = 0; k < 10000; k++) {
			num += i;
		}
	}
	printf("지역변수 : %d \n", clock() - time1);
	time2 = clock();
	for (reg_i = 0; reg_i < 1000; reg_k++) {
		for (reg_k = 0; reg_k < 1000; reg_k++) {
			reg += reg_i;
		}
	}
}

void test() {
	int a = 10;			// 지역변수
	static int b = 10;	// 정적변수 - 최초한번 할당, 초기화
	printf("%d %d %d %d\n", a, b, size, len);
	a++;
	b++;
}

// 지역변수 : 함수 호출 시 할당, 함수 종료시 해제
// 정적 변수 : 함수호출 시 할당, 프로그램 종료시 해제
// 전역 변수 : 프로그램 시작 할당 프로그램 종료시 해제
// 외부 변수 : 다른 곳(파일)에 있는 전역변수를 사용할 수 있는 변수
// 레지스터 변수 : cpu에 변수 할당