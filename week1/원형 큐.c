/*
1)초기화: front & rear = 0
2) isEmpty: front == rear
3)isFull:
rear가 front 보다 한 자리 앞에 있음
(rear + 1) % 6 == front

4)enqueue:
isfFull?
rear 위치 값 추가

rear = (rear++) % 6
rear 한 칸 전진


5)dequeue: 
isEmpty?
front 위치 값 제거
front 한 칸 전진

*/

typedef struct {

	int queue[7];
	int cur;

}queue;

#include <stdio.h>

int main() {

	return 0;
}