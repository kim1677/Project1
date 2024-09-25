#include <stdio.h>

void main() {
	char name[10] = { "홍길동" };

	gets_s(name, 10);

	printf("%s \n", name);
	printf("%s \n", "이순신");

	char a[20] = { "i like banana" };
	char* pstr = "i like banana";
	printf("%s \n", pstr);
	printf("%s \n", a);

	printf("%c %c \n", a[2], pstr[2]);
	a[7] = 'h';
	printf("%s \n", a);
	/*pstr[7] = 'g';
	printf("%s \n", pstr);*/

	char* brand = "삼성전자";	// 변경 되지않을 문자열

	// 고유 문자열 - 국어, 수학, 영어
	char* subject[3] = { "국어","수학","영어" };
	/*gets_s(pstr, 8);
	printf("%s \n", pstr);*/

	char names[4][10] = { "이순신","장보고","장영실","김유신" };
	printf("%s \n", names[2]);

	// 배열 포인터 사용
	/*char(*p)[10] = names;
	printf("%s \n", p[1]);*/

	// 포인터 배열 사용
	char* p = names[3];
	printf("%s \n", p);

}