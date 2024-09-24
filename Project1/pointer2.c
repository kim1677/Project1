# include <stdio.h>

// 함수의 원형 - 정의구현부는 main 밑에
void add(int*);
int* update();
void show(int*);
int* make();

void add(int* temp) {		// add 함수에서 temp에 num의 값저장,
	
	*temp = *temp + 50;		// temp가 가리키는 값을 수정

}

int* update() {
	
	static int up = 1;		// 정적 변수
	printf("변수 up → %d \n", up);
	return &up;

}

void show(int* parr) {
	for (int i = 0; i < 5; i++) {
		printf("%d \n", parr[i]);
	}
}

int* make() {
	static int arr2[5] = { 100,200,250,350,110 };
	return arr2;

}

void main() {
	
	int num = 10;
	add(&num);				// add 함수에 10을 주고, 결과를 num에 저장
	printf("%d \n", num);

	int* p;
	p = update();
	(*p)++;					// up변수의 주소를 p에 저장했기에 *p++ 는 up++과 같다. 
	update();
	(*p)++;
	update();
	(*p)++;
	update();

	// 배열과 함수
	int arr[5] = { 10,20,30,40,50 };
	show(arr);

	int* p2 = make();
	for (int i = 0; i < 5; i++) {
		printf("%d \n", p2[i]);
	}


}

// C언어 함수는 main 함수 위에 둬야 값이 출력된다.