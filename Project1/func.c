#include "struct_file.h"

void print(led* rgb) {
	printf("핀번호 : %d \n", rgb->pinNum);
	printf("컬러 : %s \n", rgb->color);
}

void init(led* rgb) {
	rgb->pinNum = 10;
	rgb->onoff = 0;
	strcpy_s(rgb->color, sizeof(rgb->color), "빨강");
}

void power(led* rgb) {
	rgb->onoff = 1 - rgb->onoff;	// 산술 연산자 : 0을 1로 1에서 0으로 바꾸게 함
	printf("%s \n", rgb->onoff ? "켜짐" : "꺼짐");
}