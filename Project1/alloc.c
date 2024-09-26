#include <stdio.h>
#include <stdlib.h>

void main() {
	// int *parr[17];
	int* std1 = (int*)malloc(12);
	std1[0] = 90; 
	std1[1] = 88;
	std1[2] = 76;

	int* std2 = (int*)malloc(12);
	std2[0] = 79;
	std2[1] = 57;
	std2[2] = 90;

	int** parr = (int**)malloc(12 * sizeof(int*));
	parr[0] = std1;
	parr[1] = std2;
	parr[2] = (int*)malloc(12);
	parr[3] = (int*)malloc(12);

	printf("%d \n", parr[0][1]);	// 첫번째 학생의 88점 출력

	// 여러명의 이름을 저장하기 위한 동적할당
	// char name[10];

	char* name = (char*)malloc(sizeof(char*));
	int cnt = 1;
	while (1) {
		name[cnt - 1] = (char*)malloc(10);
		printf("이름 : ");
		gets_s(name[cnt - 1], 10);
		cnt++;
		name = (char**)realloc(name, cnt * sizeof(char*));
	}


	/*int num = 10;
	short s = 20;
	double d = 3.14;

	int arr[20];

	int size;
	printf("데이터 몇개 : ");
	scanf_s("%d", &size);

	int* p = (int*)malloc(size * sizeof(int));
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;
	printf("malloc -> %d %d \n", p[2], p[4]);

	int* pc = (int*)calloc( 4, sizeof(int) );
	pc[0] = 100;
	pc[1] = 200;
	pc[2] = 22;
	pc[3] = 500;
	printf("%d %d %d \n", pc[0], pc[1], pc[2]);

	printf("재할당 전 : %p \n", p);

	p = (int*)realloc(p, 16);
	printf("p -> %d %d \n", p[2], p[4]);
	printf("재할당 후 : %p \n", p);

	pc = (int*)realloc(pc, 40);
	pc[4] = 600;
	pc[5] = 1000;
	printf("%d %d \n", pc[4], pc[5]);

	free(pc);
	printf("free 이후 -> %d %d \n", pc[4], pc[5]);*/

}

// 동적할당 함수 목록
// malloc, calloc, realloc, fee