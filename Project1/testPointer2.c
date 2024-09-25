#include <stdio.h>

/*
문제
5명의 학생이 있다.
국어 수학 영어 3과목의 성적을 입력하고
총점과 평균을 저장하시오.
성적 입력 함수 - input
(5명 학생의 과목점수와 총점, 평균을 저장할 수 있는 2차원 배열 생성)
*/

void input(int (*p)[5]);

void main() {
	int std[5][5] = { 0 };

	input(std);

	// 총점과 평균 출력
	for (int i = 0; i < 5; i++) {
		printf("학생 %d의 총점: %d\n", i + 1, std[i][3]);
		printf("학생 %d의 평균: %d\n", i + 1, std[i][4]);
	}
}

void input(int(*p)[5]) {
	for (int i = 0; i < 5; i++) {
		printf("국어 : ");
		scanf_s("%d", &p[i][0]);
		printf("수학 : ");
		scanf_s("%d", p[i] + 1);
		printf("영어 : ");
		scanf_s("%d", &p[i][2]);
		p[i][3] = p[i][0] + p[i][1] + p[i][2];	// 총점
		p[i][4] = p[i][3] / 3;	// 평균
	}
}
