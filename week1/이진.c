#include <stdio.h>

typedef struct {

	char tree[8];	//Tree 1~7번 (0번은 못 씀)
	int cur;	//add, delete에서 사용할 예정

}Tree;

//cur 의 역할이 무엇인지?
void init(Tree* T) {
	T->cur = 1;
}

void addNode(Tree* T, char data) {
	if (T->cur == 8) {	//꽉 찼으면
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
	//비었으면 소용 없으니
	//position이 루트는 아닌지?
	//1 < position && position < cur
	if (T->cur == 1) {
		printf("Tree is empty");
	}
	else if(position == 1) {	//루트  노s드?
		printf("position == root라서 부모 노드가 없음");
	}
	else if (position >= T->cur) {
		printf("position이 Tree를 벗어났어");
	}
	else {
		printf("parents node의 자리: %d, 값: %d\n",
			position/2, T->tree[position/2]);
	}

}

void show_left_child(Tree* T, int position) {
	int left_child_position = position * 2;
	//조건: 비어있으면 안되고
	if (T->cur == 1) {
		printf("Tree is empty");
	}
	else if() {

	}
	printf("left child node의 자리는 %d, 값은 %d이다\n",
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






