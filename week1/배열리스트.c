//#include <stdio.h>
//
//
////typedef int Num;	//int �ڸ��� Num���� �ᵵ �Ǵ� ��
//
//
//
//typedef struct {	//�ڷ� ���� ����� ��	: �迭����Ʈ
//	int list[5];	//5ĭ ����Ʈ ����
//	int size;	//���� ����
//} ArrayList;
////���� ���� struct�� ���� ���� �� ������ ����ü ������ ���� �ʾƵ� ��
////ArrayLIst ��ü�� �ڷ����� �� ��!
//
//
//
////���⼭ �ݹ��̷��۷����� ������ ��
//
//void init(ArrayList* L) {	//������ ������ 0���� ����
//	L->size = 0;	//���� ���� 0���� ����,
//	//�ּҰ��� �޾Ƽ�, �� ���� ���� �ٲٷ��� *L�� ���� �ߴµ� ȭ��ǥ�� ����
//	//�̷��� ���ڰ� ���
//}
//
//
//
////������� true/false�� �ϱ� ���� ��ȯ���� 1,0���� ��
////������ �� �� ���ϰ��� �ִ� ���� �߿�
////�ּҰ��� �ֳ� ���� �ʴ��� �����̱� ������ �����ϸ� ���Ͻ�Ű��
//
//int isEmpty(ArrayList* L) {
//	if (L->size == 0) {
//		return 1;	//true
//	}else {
//		return 0;	//false
//	}
//}	//isEmpty �Լ�
//
//int isFull(ArrayList* L) {
//	if (L->size == 5) {
//		return 1;	//true
//	}else {
//		return 0;	//false
//	}	//isFull �Լ�
//}
//
//	//add
//	//����Ʈ�� Ư¡�� �� �ڸ��� ���ٴ� ��
//	//add�� ���� �߰�: 
//	//����Ʈ�� �� ���� �ʾҴ���?, position�� ���� �־��� �� �ִ� �ڸ��ΰ���
//
//
//void add(ArrayList * L, int position, int item)
//{
//	if (isFull(L) == 0 && position >= 0 && position <= L->size) {
//
//		for (int i = L->size - 1; i >= position; i--) {
//			//���� �� ���Һ��� position����
//			L->list[i + 1] = L->list[i];	//�� ĭ �̷�
//			//position �ڸ��� ����ַ��� ����
//		}
//
//
//		//�ڿ������� �� ĭ�� �ڷ� �о
//		//position �ڸ��� �� �� �ְ� �����
//
//		//position�ڸ��� item
//		L->list[position] = item;
//		L->size++;	//������ ���� + 1
//	}//if
//	else {
//		printf("����Ʈ�� �� ���� ������ �Ұ��մϴ�");
//	}
//}
//
//
//
//
//
////delete
//void delete(ArrayList* L, int position) {
//	//����Ʈ�� ��������� �ȵ� && position�� ���Ұ� ����ִ���
//	if (isEmpty(L) == 0 && position >= 0 && position < L->size) {	//position�� ���� size�� �����ٴ� �۾ƾ��ϴϱ�
//		for (int i = position; i < L->size; i++) {
//			L->list[i] = L->list[i + 1];
//		}//���� ������ ��ģ ��
//		L->size--;
//	}
//}
//		
//
////display: ��ü ���Ҹ� ����ϱ�
//void display(ArrayList* L) {
//	if (isEmpty(L) == 0) {//����� �� �ִٴ� �Ҹ�
//		for (int i = 0; i < L->size; i++) {
//			printf("%d ", L->list[i]);
//		}//for
//	}
//}
//
//
//
//
//
//int main() {
//	ArrayList arrlist;
//	init(&arrlist);	//�ʱ�ȭ
//	/* �׽�Ʈ�� ������ 3�� �����ϱ� */
//
//	add(&arrlist, 0, 7);
//	add(&arrlist, 1, 8);
//	add(&arrlist, 2, 10);
//
//	delete(&arrlist, 1);
//
//
//	display(&arrlist);
//
//	return 0;
//}