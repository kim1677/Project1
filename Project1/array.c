#include <stdio.h>
#include <string.h>

#define size 3

void main() {

	// 자바방식 배열 지정
	// int[] arr = new int[5];

	// C언어 배열 지정
	int arr[5] = { 1, 2, 3, 4, 5 };

	// C언어 배열 지정 2
	int arr2[] = { 11, 22, 33, 44 }; 

	// const int size = 3;
	// constexpr int a = 10;	// C++ 버전11 이상

	// C언어 배열 지정 3
	// 상단에 #define size 3 지정
	int arr3[size];

	// C언어 배열 초기화
	// 배열 초기화
	// int number[10] = { 0 };

	// 함수를 이용한 배열 초기화
	int number[5];
	memset(number, 0, 5 * sizeof(int) );		// 배열의 이름 자체가 메모리 주소이기 때문에 별도로 &를 안 써도 됌
												// sizeof(int) 배열 크기를 계산
	printf("%d \n", number[2]);

	// 반복문을 이용한 배열 출력
	number[0] = 10;
	number[1] = 20;
	number[2] = 30;
	number[3] = 40;
	number[4] = 50;
	printf("%d \n", number[4]);
	for (int i = 0; i < sizeof(number) / sizeof(int); i++) {
		printf("%d \n", number[i]);
	}



	// 문제
	/* 사과 상자가 10박스가 있다.
	각 박스안에 들어있는 사과 갯수이다.
	이중 50개 이상 사과박스는 몇 번째 박스인지 출력 */
	int apple[10] = { 45, 34, 67, 23, 12, 69, 51, 89, 99, 28 };

	for (int i = 0; i < sizeof(apple) / sizeof(int); i++) {
		if (apple[i] >= 50) {
			printf("%d번째 박스 \n", i+1);
		}
	}



	// 문제.2
	/* 포도 5송이가 있다.
	한송이에 포도가 몇알 달려 있는지 입력하여
	grape 배열에 저장하고 전체 출력하시오 */
	int grape[5];

	// 한송이에 포도가 몇 알 달려 있는지 입력하여 grape 배열에 저장
	for (int i = 0; i < 5; i++){
		printf("%d번째 포도의 갯수 : ", i + 1);
		// scanf_s("%d", &grape[i]);
		scanf_s("%d", grape + i);
	}

	// grape 배열 전체 출력
	for (int i = 0; i < 5; i++){
		/*printf("포도 %d송이: %d알\n", i + 1, grape[i]);*/
		printf("%d \n", grape[i]);
	}

}