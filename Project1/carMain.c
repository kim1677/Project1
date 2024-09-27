#include "autoDriving.h"

void gotoxy(int x, int y) {
	COORD cd;
	cd.X = x;
	cd.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cd);
}
int px = 7, py = 7;
void draw(carStatus* car) {

	px = px + car->x_pos;
	py = py - car->y_pos;
	gotoxy(px, py);
	printf("@");


}


void main() {
	srand(time(NULL));
	carStatus car; // 차 상태 저장할 구조체변수
	//차 상태 초기화
	init(&car);

	print_status(&car); //현재 차 상태 출력

	while (1) {
		//gotoxy(10, 14);
		//센서 값 받기
		int read_left = sensor_left();
		int read_right = sensor_right();

		//센서 값 비교 및 제어
		if (read_left == 0 && read_right == 0) {
			printf("직진\n");
			move_car(&car, 50, 50);
		}
		else if (read_left == 1 && read_right == 0) {
			printf("좌회전\n");
			move_car(&car, 30, 50);
		}
		else if (read_left == 0 && read_right == 1) {
			printf("우회전\n");
			move_car(&car, 50, 30);
		}
		else { // 왼쪽 오른쪽 둘다 1, 검정 , 멈춤
			printf("정지\n");
			move_car(&car, 0, 0);
			break;
		}
		//draw(&car);
		//gotoxy(0, 15);
		print_status(&car);
		Sleep(1000); //usleep(1000000);
		system("cls");
		// 차량 운행 경로 기록 하기
		record_drive(&car);
	}


	for (int i = 0; i < cnt; i++) {
		printf("\n====  %d. ====\n", i + 1);
		print_status(record[i]);
	}



	/*printf("차량을 동쪽으로 속도 20으로 이동한다.\n");
	move_car(&car , 20, 'E');
	print_status(&car);*/
}