#include <stdio.h>

//void change(int* a, int* b) {
//	if (*b - 45 >= 0) {
//		*b -= 45;
//	}
//	else if (a - 1 >= 0) {
//		*b += 15;
//		*a -= 1;
//	}
//	else if (a - 1 == -1) {
//		*b += 15;
//		*a = 23;
//	}
//}


void change(int* a, int* b) {
	if (*b  >= 45) {
		*b -= 45;
	}
	else if (*b < 45) {
		*b += 15;
		if (*a == 0) {
			*a = 23;
		}
		else{
			*a -= 1;
		}
	}
	
}//change




int main() {
	int h, m;

	printf("H 를 입력하세요\n");
	scanf_s("%d", &h);

	printf("M 을 입력하세요\n");
	scanf_s("%d", &m);

	printf("상근이의 원래 알람 시계의 시간은 %d : %d\n",
		h, m);

	change(&h, &m);

	printf("상근이의 바뀐 알람 시계의 시간은 %d : %d\n",
		h, m);



	return 0;
}
