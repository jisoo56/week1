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
//	//int�� �迭 2��?
//	int time[2];
//
//	printf("H �� �Է��ϼ���\n");
//	scanf_s("%d", &time[0]);
//
//	printf("M �� �Է��ϼ���\n");
//	scanf_s("%d", &time[1]);
//
//	printf("������� ���� �˶� �ð��� �ð��� %d : %d\n",
//		time[0], time[1]);
//
//	change(&time[0], &time[1]);
//
//	printf("������� �ٲ� �˶� �ð��� �ð��� %d : %d\n",
//		time[0], time[1]);
//
//
//
//	return 0;
//}