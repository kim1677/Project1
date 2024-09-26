#include <stdio.h>
#include <string.h>

// 구조체(C언어식 클래스) 생성
struct member {
	int age;		// 정수타입 변수
	float eyes;		// 실수타입 변수
	char name[10];	// 문자타입 배열 (최대 9글자, 마지막은 Null 문자)
};

typedef struct grade {	
	int kor;
	int mat;
	int eng;
	int total;
	int avg;
}grade;

void tot_avg(grade * p) {
	// 반복문 생성
	for (int i = 0; i < 5; i++) {
		p[i].total = p[i].kor + p[i].mat + p[i].eng;	// 각 학생의 총점 계산 (국어 + 수학 + 영어)
		p[i].avg = p[i].total / 3.0;					// 평균 계산 (총점 / 3.0)
	}
}

void main() {
	grade std1 = { 88,99,75 };			// grade 구조체에 std1 변수 선언

	// 성적 데이터 입력
	std1.kor = 88; 
	std1.mat = 99;
	std1.eng = 75;

	// 총점 및 평균 계산
	std1.total = std1.kor + std1.mat + std1.eng;
	std1.avg = std1.total / 3.0;

	// std 변수에 배열로 지정 및 성적 데이터를 구조체 배열로 초기화
	grade std[5] = { {88,94,34}, {66,45,61}, {90,11,45}, {87,34,91}, {84,72,89} };
	// 총점과 평균을 계산하는 함수 호출
	tot_avg(std);

	// 각 학생의 성적 정보를 출력
	for (int i = 0; i < 5; i++) {
		printf("%d %d %d %d %.2f \n", 
			std[i].kor, 
			std[i].mat, 
			std[i].eng, 
			std[i].total, 
			std[i].avg);
	}


	struct member m;	// member 구조체 변수 m 선언

	// 구조체 member 변수에 값 할당 및 출력
	m.age = 24;
	m.eyes = 1.2;
	printf("%d \n%f \n", m.age, m.eyes);

	// 구조체를 이용한 문자열 생성 및 출력
	strcpy_s(m.name, 10, "홍길동");
	printf("%s \n", m.name);
}


/* 구조체: C언어의 기본 데이터 타입으로 새롭게 정의하는 사용자 데이터 타입
각 부분과 요소들이 모여 이루어진 물체나 형태 */