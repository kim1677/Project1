#pragma once
#ifndef STRUCTFILE
#define STRUCTFILE

// #ifdef : 만약 정의가 되어 있다면
// #define 으로 이름을 정의하고 정의된 이름이 참조 되었다면
// #ifdef 부터 #else까지를 실행하고
// #define으로 이름이 정의되지 않았으면 #else부터 #endif까지 실행

// #ifndef : 만약 컴파일이 되어 있지 않다면
// #define 으로 이름을 정의하고 정의된 이름이 컴파일 되지 않았으면
// #ifndef부터 #else까지 실행
// 정의 되었으면 #else 부터 #endif까지 실행
// 헤더 파일을 한번만 참조하여 실행하려면
// #ifndef가 적절하다.

#include <stdio.h>
#include <string.h>

typedef struct LED {
	int pinNum;
	int onoff;
	char color[10];
}led;

void init(led*);	// func.c 파일 정의 함수
void print(led*);	// func.c 파일 정의 함수

void power(led* rgb);

#endif