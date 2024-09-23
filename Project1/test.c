#define _CRT_SECURE_NO_WARNINGS		// scanf타입만 출력시 사용 , 하지만 보안적으로 취약하기 때문에 권장하지 않음 
#include <stdio.h>		// 입력과 출력을 하기 위한 값
#include <stdbool.h>

void main() {

	//char ch = 'b';	// 문자 타입

	//short s = 10;	// 10진수 정수
	//int i = 100;	// 10진수 정수
	//long l = 2323;	// 10진수 정수

	//float f = 2.34;		// 10진수 실수
	//double d = 3142.23;	// 10진수 실수

	//bool b = true;		// C언어 버전 boolean

	//// 서식 문자
	//// %d - 10진수 정수
	//// %c - 문자
	//// %f - 10진수 실수, %lf
	//// %s - 문자열
	//// %p - 포인터값

	//// C언어 기본타입 입력
	//// 입력하기 전 변수 생성
	//int num1, num2;

	//printf("두 정수를 입력하세요 \n");
	///*scanf_s("%d", &num1);
	//scanf_s("%d", &num2);*/

	//// 입력할 때는 변수앞에 &을 써야한다
	//// scanf_s 사용시 숫자만 입력이 가능함

	//scanf_s("%d %d", &num1, &num2);
	//printf("%d %d \n", num1, num2);

	//// C언어 기본타입 출력
	//printf("%d %c", 10, 'a');
	//printf("잘 되고 있는가?");

	

	// 문제
	// 국어, 수학, 영어 점수 입력하고
	// 총점과 평균을 구하여 출력

	// 변수 생성
	int kor, mat, eng;
	int total, avg;

	// 입력 구하기
	printf("국어 점수 : ");
	scanf_s("%d", &kor);
	printf("수학 점수 : ");
	scanf_s("%d", &mat);
	printf("영어 점수 : ");
	scanf_s("%d", &eng);

	// 총점, 평균 구하기
	total = kor + mat + eng;
	avg = total/3;
	printf("총점 : %d, 평균 : %d", total,avg);
}

