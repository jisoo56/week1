//#include <stdio.h>
//
//void change(int* a, int* b) {
//	if (*b - 45 >= 0) {
//		*b -= 45;
//	}else if(a - 1 >= 0) {
//		*b += 15;
//		*a -= 1;
//	}else if(a - 1 < 0) {
//		*b += 15;
//		*a +=  23;
//	}
//
//
//}
//
//
//int main() {
//	//int형 배열 2개?
//	int time[2];
//
//	printf("H 를 입력하세요\n");
//	scanf_s("%d", &time[0]);
//
//	printf("M 을 입력하세요\n");
//	scanf_s("%d", &time[1]);
//
//	printf("상근이의 원래 알람 시계의 시간은 %d : %d\n",
//		time[0], time[1]);
//
//	change(&time[0], &time[1]);
//
//	printf("상근이의 바뀐 알람 시계의 시간은 %d : %d\n",
//		time[0], time[1]);
//
//
//
//	return 0;
//}