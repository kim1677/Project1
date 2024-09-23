#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	//int a[3];	// 10진수 정수의 3크기 배열

	//char word[6] = {'t', 'a', 'd', 'l', 'e'};	// 문자 5개 배열 저장

	//for (int i = 0; i < 5; i++) {
	//	printf("%c", word[i]);
	//}

	//// 문자열로 출력
	//// NULL 방식으로 출력
	//word[5] = NULL;		// 5다음 문자열 배열부터는 NULL 사용하여 문자열을 종료시킨다.
	//					// 문자열 최대 5글자를 나타내려면 배열공간을 [6]으로 늘려야 한다.
	//printf(" \n %s \n", word);

	//char like[10] = { "banana" };
	//printf("%s \n", like);

	//// 문자열 입력하기 위한 방법
	//// 문자 입력 함수
	//char ch2 = getch();
	//printf("getch 입력 : %c", ch2);				// 콘솔 창에서 화면에 보이지 않음, 원하는 문자를 입력해야 출력됨

	//char ch3 = getchar();
	//printf("\n getchar 입력 : %c \n", ch3);
	//putchar(ch3); // 문자 출력 함수

	//getch();	// 문자열 입력 전에 숫자나 문자입력시 버퍼에 남아 있는 엔터를 제거하기 위함

	//// 문자열 함수
	//char str[50];
	//puts("문자열 입력 : ");
	//gets_s(str, sizeof(str) );

	//puts(str);



	// 문제
	//char info[100] = {"나는 프로그래밍이 참 재미있다"}
	///* 참 재미있다. 만 출력하고
	//나는 프로그래밍 이라고만 출력되기 위해 수정하여 출력
	//참고사항 - 한글1자는 알파벳2자에 해당된다. */

	//// 각 문자의 인덱스 확인
	//printf("%s \n", info+18);

	//info[15] = NULL;
	//// 12번이 아닌 다른 위치를 지정해야 할 수도 있습니다
	//printf("%s \n", info);  // 17번째 인덱스가 "참 재미있다"일 가능성이 큼


	// 문제.2
	// 나의 이름과 나이, 전화번호를 입력하고 출력하기
	// 출력 예시
	// 이름 : 홍길동
	// 나이 : 24세
	// 전화번호 : 010-1234-9876

	// 변수 선언
	char name[50];
	int age;
	char phone[20];

	// 사용자로부터 입력 받기
	printf("이름을 입력하세요: ");
	scanf("%s", name);

	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);  // 정수 입력

	printf("전화번호를 입력하세요: ");


	// 입력 받은 내용 출력하기
	printf("\n이름 : %s\n", name);
	printf("나이 : %d세\n", age);
	printf("전화번호 : %s\n", phone);
	

}