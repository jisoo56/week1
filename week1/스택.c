//#include <stdio.h>
//
//
//typedef struct 
//{
//	int stack[5];	//���� ������ �ء� �迭
//	int size;	//���ÿ�  ���� ������ ����
//				//���� ���� �ִ� ������ ��ġ: size - 1
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
////push : item�� Stack�� ���� ���� ������
//void push(Stack* S, int item) {
//	//���� ������ true, �������������� false
//	if (isFull(S) == 0) {
//		S->stack[S-> size] = item;
//		S->size++;
//		//size�� ���� �׳� �ٷ� �־ ��
//	}
//	else {
//		printf("������ �� ����, ���� �߰��� �� �����ϴ�");
//	}
//
//
//}
//
//void pop(Stack* S) {
//	if (isEmpty(S) == 0) {
//		S->size--;	//size�� ������ ������ ���� --> �迭�� �� 0���� �����ϴϱ�
//	}
//	else {
//		printf("������ ��, pop�� �� ����");
//	}
//}
//
////peek: ���� �� �׸� ���
//void peek(Stack* S) {
//	if (isEmpty(S) == 0) {
//		printf("TOP ���Ҵ� %d\n", S->stack[S->size - 1]);
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
//	if (isEmpty(S) == 0) {	//������� ������
//		for (int i = 0; i < S->size; i++) {
//			printf("%d ", S->stack[i]);
//		}
//	}else {
//		printf("������ �� ����� �� ����");
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
//	push(&S, 7);	//�� ���� 7�� �߰��ϰ�ʹٴ� �ǹ�
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