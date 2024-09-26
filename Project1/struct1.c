#include <stdio.h>

// 나이(정수)와 몸무게(실수)를 저장할 수 있는 구조체 정의
typedef struct info {
    int age;        // 나이 (정수형 변수)
    float wg;       // 몸무게 (실수형 변수)
}info;

// 사용자 정보를 담는 구조체 User
typedef struct User {
    char name[10];
    // info i;              // 포함
    info *data;             // 외부참조
    struct User *next;      // 내부참조
}User;

// 입력 함수: 키보드로부터 3명의 정보를 입력받음
void input(info * p) {
    for (int i = 0; i < 3; i++) {
        printf("나이를 입력하세요 : ");
        scanf_s("%d", &p[i].age);
        printf("몸무게를 입력하세요 : ");
        scanf_s("%f", &p[i].wg);
    }
}

// 출력 함수: 3명의 정보를 출력함
void print(info * p) {
    for (int i = 0; i < 3; i++) {
        printf("맴버%d : 나이 = %d, 몸무게 = %.1fkg \n", i + 1, p[i].age, p[i].wg);
    }
}

void main() {

    User u;             // User 구조체 변수 u 선언
    info i;             // info 구조체 변수 i 선언
    u.data = &i;        // u의 data 필드에 i의 주소를 저장 (info 포인터 초기화)
    u.data->age = 10;   // u의 data가 가리키는 info 구조체의 age 필드에 10을 저장
    u.data->wg = 75.1;  // u의 data가 가리키는 info 구조체의 wg 필드에 75.1을 저장

    info i2;            // 새로운 info 구조체 변수 i2 선언
    User daum = { "김유신", &i2 };     // "김유신", data는 i2의 주소를 가지는 User 구조체 daum 초기화
    daum.data->age = 24;               // daum의 data가 가리키는 info 구조체의 age 필드에 24를 저장
    daum.data->wg = 65.8;              // daum의 data가 가리키는 info 구조체의 wg 필드에 65.8을 저장

    u.next = &daum;     // u의 next 필드에 daum 구조체의 주소를 저장 (다음 User 연결)

    printf("%s %d \n", u.next->name, u.next->data->age);    // "김유신"과 age 결과값 출력


    // 3명의 정보를 저장할 구조체 배열 선언
    info member[3];

    // 정보 입력
    input(member);

    // 정보 출력
    print(member);

}

// 나이(정수)와 몸무게(실수)를 저장할 수 있는 구조체 3명의 정보를 입력하고 출력하시오.(구조체 배열)
// input - 입력 함수 : 키보드 입력
// print - 출력 함수