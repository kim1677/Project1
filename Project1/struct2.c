#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct music {
	char singer[20];	// 가수명
	int release;		// 발매년도
	float playtime;		// 재생시간
}music;

void main() {
	/*music* m1 = (music*)malloc(sizeof(music));
	m1->release = 2019;
	m1->playtime = 4.41;
	strcpy_s(m1->singer, 20, "폴킴");*/

	music** data = (music**)malloc(sizeof(music*));

	for (int i = 1; i <= 5; i++) {
		if (data == NULL)
			data = (music**)malloc(sizeof(music*));
		else
			data = (music**)realloc(data, i * sizeof(music*))

		data[i - 1] = input();
	}

	prinft(data);

	// 할당 메모리 해제
	for (int i = 0; i < 5; i++) {
		free(data[i]);
	}
	free(data);

}

music* input() {
	music* newData = (music*)malloc(sizeof(music));
	printf("가수 : ");
	gets_s(newData->singer, 20);
	printf("발매년도 : ");
	scanf_s("%d", newData->release);
	printf("재생 시간 : ");
	scanf_s("%f", &newData->playtime);
	getchar();
	return newData;
}

void print(music** p) {
	for (int i = 0; i < 5; i++) {
		printf("%s (%d년) - %.2f \n", p[i]->singer, p[i]->release, p[i]->playtime);
	}
}
