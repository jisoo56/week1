#include <stdio.h>

typedef struct {

	char tree[8];	//Tree 1~7�� (0���� �� ��)
	int cur;	//add, delete���� ����� ����

}Tree;

//cur �� ������ ��������?
void init(Tree* T) {
	T->cur = 1;
}

void addNode(Tree* T, char data) {
	if (T->cur == 8) {	//�� á����
		printf("Tree is full");
	}
	else {
		T->tree[T->cur] = data;
		T->cur++;
	}
}

void deleteNode(Tree* T) {
	if (T->cur == 1) {
		printf("Tree is Empty");
	}else{
		T->cur = T->cur - 1;
	}
}

void show_parent(Tree* T, int position) {
	//������� �ҿ� ������
	//position�� ��Ʈ�� �ƴ���?
	//1 < position && position < cur
	if (T->cur == 1) {
		printf("Tree is empty");
	}
	else if(position == 1) {	//��Ʈ  ��s��?
		printf("position == root�� �θ� ��尡 ����");
	}
	else if (position >= T->cur) {
		printf("position�� Tree�� �����");
	}
	else {
		printf("parents node�� �ڸ�: %d, ��: %d\n",
			position/2, T->tree[position/2]);
	}

}

void show_left_child(Tree* T, int position) {
	int left_child_position = position * 2;
	//����: ��������� �ȵǰ�
	if (T->cur == 1) {
		printf("Tree is empty");
	}
	else if() {

	}
	printf("left child node�� �ڸ��� %d, ���� %d�̴�\n",
		left_child_position, T->tree[left_child_position]);




}

void show_right_child(Tree* T, int position) {



}
	



int main() {
	Tree T;

	init(&T);
	addNode(&T, 'A');
	addNode(&T, 'B');
	addNode(&T, 'C');
	addNode(&T, 'D');
	addNode(&T, 'E');
	addNode(&T, 'F');


	display(&T);	//A B C D E F G

	show_parent(&T, 3);	//A
	show_left_child(&T, 2);	//D	
	show_right_child(&T, 2);	//E

	deleteNode(&T);
	display(&T);	//A B C D E F






	return 0;
}






