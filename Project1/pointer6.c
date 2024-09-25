#include <stdio.h>

typedef (*func)(int, int);

void sum(int a, int b) {
	printf("두 정수 합 : %d \n", a + b);
}

int plus(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

int times(int a, int b) {
	return a * b;
}

void caculation( func fc, int num1, int num2 ) {
	int result = fc(num1, num2);
	printf("결과 값 : %d \n", result);
}

void main() {

	caculation(plus, 10, 20);
	caculation(minus, 50, 30);
	caculation(times, 6, 7);

	//sum(10, 20);

	//printf("%p \n", sum);

	//// 함수 포인터
	//void (* psum)(int,int);
	//psum = sum;

	//psum(40, 50);

}

// 함수 포인터 : 함수의 이름 주소다.