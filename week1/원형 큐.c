/*
1)�ʱ�ȭ: front & rear = 0
2) isEmpty: front == rear
3)isFull:
rear�� front ���� �� �ڸ� �տ� ����
(rear + 1) % 6 == front

4)enqueue:
isfFull?
rear ��ġ �� �߰�

rear = (rear++) % 6
rear �� ĭ ����


5)dequeue: 
isEmpty?
front ��ġ �� ����
front �� ĭ ����

*/

typedef struct {

	int queue[7];
	int cur;

}queue;

#include <stdio.h>

int main() {

	return 0;
}