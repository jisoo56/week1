//#include <stdio.h>
//
//
////typedef int Num;	//int 자리에 Num으로 써도 되는 거
//
//
//
//typedef struct {	//자료 구조 만드는 중	: 배열리스트
//	int list[5];	//5칸 리스트 역할
//	int size;	//원소 개수
//} ArrayList;
////이제 위의 struct를 쓰고 싶을 때 귀찮게 구조체 선언을 하지 않아도 됨
////ArrayLIst 자체가 자료형이 된 것!
//
//
//
////여기서 콜바이레퍼런스의 개념이 들어감
//
//void init(ArrayList* L) {	//원소의 개수를 0으로 세팅
//	L->size = 0;	//원소 개수 0으로 셋팅,
//	//주소값을 받아서, 그 안의 값을 바꾸려면 *L을 썼어야 했는데 화살표를 통해
//	//이렇게 쓰자고 약속
//}
//
//
//
////결과값을 true/false로 하기 위해 반환값을 1,0으로 함
////개발을 할 때 통일감을 주는 것은 중요
////주소값을 주냐 주지 않느냐 차이이긴 하지만 웬만하면 통일시키기
//
//int isEmpty(ArrayList* L) {
//	if (L->size == 0) {
//		return 1;	//true
//	}else {
//		return 0;	//false
//	}
//}	//isEmpty 함수
//
//int isFull(ArrayList* L) {
//	if (L->size == 5) {
//		return 1;	//true
//	}else {
//		return 0;	//false
//	}	//isFull 함수
//}
//
//	//add
//	//리스트의 특징은 빈 자리가 없다는 것
//	//add의 조건 추가: 
//	//리스트가 꽉 차진 않았는지?, position이 내가 넣어줄 수 있는 자리인건지
//
//
//void add(ArrayList * L, int position, int item)
//{
//	if (isFull(L) == 0 && position >= 0 && position <= L->size) {
//
//		for (int i = L->size - 1; i >= position; i--) {
//			//제일 끝 원소부터 position까지
//			L->list[i + 1] = L->list[i];	//한 칸 미룸
//			//position 자리를 비워주려는 과정
//		}
//
//
//		//뒤에서부터 한 칸씩 뒤로 밀어서
//		//position 자리에 들어갈 수 있게 만들기
//
//		//position자리에 item
//		L->list[position] = item;
//		L->size++;	//원소의 개수 + 1
//	}//if
//	else {
//		printf("리스트가 꽉 차서 삽입이 불가합니다");
//	}
//}
//
//
//
//
//
////delete
//void delete(ArrayList* L, int position) {
//	//리스트가 비어있으면 안됨 && position에 원소가 들어있는지
//	if (isEmpty(L) == 0 && position >= 0 && position < L->size) {	//position의 값은 size의 값보다는 작아야하니까
//		for (int i = position; i < L->size; i++) {
//			L->list[i] = L->list[i + 1];
//		}//위의 과정을 거친 후
//		L->size--;
//	}
//}
//		
//
////display: 전체 원소를 출력하기
//void display(ArrayList* L) {
//	if (isEmpty(L) == 0) {//출력할 게 있다는 소리
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
//	init(&arrlist);	//초기화
//	/* 테스트용 데이터 3개 삽입하기 */
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