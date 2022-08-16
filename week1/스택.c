//#include <stdio.h>
//
//
//typedef struct 
//{
//	int stack[5];	//스택 역할을 해줃 배열
//	int size;	//스택에  쌓인 원소의 개수
//				//제일 위에 있는 원소의 위치: size - 1
//
//}Stack;
//
//
//void init(Stack* S) {
//	S -> size = 0;
//}
//
//
//
////push : item을 Stack의 제일 위에 삽입함
//void push(Stack* S, int item) {
//	//꽉차 있으면 true, 꽉차있지않으면 false
//	if (isFull(S) == 0) {
//		S->stack[S-> size] = item;
//		S->size++;
//		//size의 값에 그냥 바로 넣어도 됨
//	}
//	else {
//		printf("스택이 꽉 차서, 값을 추가할 수 없습니다");
//	}
//
//
//}
//
//void pop(Stack* S) {
//	if (isEmpty(S) == 0) {
//		S->size--;	//size로 스택의 범위를 조절 --> 배열은 늘 0으로 시작하니까
//	}
//	else {
//		printf("스택이 비어서, pop할 게 없음");
//	}
//}
//
////peek: 가장 위 항목 출력
//void peek(Stack* S) {
//	if (isEmpty(S) == 0) {
//		printf("TOP 원소는 %d\n", S->stack[S->size - 1]);
//	}
//}
//
//
//
//
//
//
////isFull
//int isFull(Stack* S) {
//	if (S->size == 5) {
//		return 1;
//	}else {
//		return 0;
//	}
//}
////isEmpty
//int isEmpty(Stack* S) {
//	if (S->size == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//
//}
//
//
//
////display
//void display(Stack* S) {
//	if (isEmpty(S) == 0) {	//비어있지 않으면
//		for (int i = 0; i < S->size; i++) {
//			printf("%d ", S->stack[i]);
//		}
//	}else {
//		printf("스택이 비어서 출력할 게 없음");
//	}
//
//}
//
//
//
//int main() {
//	Stack S;
//	init(&S);
//
//	push(&S, 7);	//맨 위에 7을 추가하고싶다는 의미
//	push(&S, 8);
//	push(&S, 9);	//7 8 9
//
//	display(&S);
//
//	pop(&S);
//	pop(&S);
//
//	display(&S);	//7
//
//
//
//
//
//	return 0;
//}