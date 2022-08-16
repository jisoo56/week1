//#include <stdio.h>
//
///*
//divide and conquer
//분할	   정복		 결합
//low와 high는 index의 관점에서 생각하면 될듯
//
//*/
//
////4 2 8 3 9 0 5 1 7
//
//int arr[] = { 5,3,8,4,9,1,6,2,7 };
//int arr_size = sizeof(arr) / sizeof(int);
//
////두 수의 값을 바꾸는 함수
//void swap(int* a, int* b) {
//	int tmp = *b;
//	*b = *a;
//	*a = tmp;
//}
//
////퀵정렬
//void quickSort(int start, int finish) {
//
//	if (start >= finish) {
//		//밑에 진행시키지마!!!
//		return;
//		//void함수가 나가는 방법은 return이다
//
//	}
//
//	int pivot = start;
//	int left = start + 1;
//	int right = finish;
//
//	while (left <= right) {
//
//
//		while (arr[left] < arr[pivot]) {	//left가 가리키는 값이
//											//left에 걸맞게
//											//pivot보다 작으면 통과
//			left++;
//		}
//
//		while (arr[right] > arr[pivot]) {
//			right--;
//		}
//
//		if (left <= right) {
//			swap(&arr[left], &arr[right]);
//
//			left++;
//			right--;
//		}
//
//	}//전체 while문
//	swap(&arr[right], &arr[pivot]);
//	pivot = right;
//
//	//pivot기준으로 분할된 아이들을 또 quickSort()해줌
//	//재귀함수를 쓰는 것임
//	quickSort(start, pivot-1);
//	quickSort(pivot + 1, finish);
//
//	//조건이 언제 끝나는지 걸어주지 않으면 무한루프가 됨
//
//
//}//quickSort f
//
//
//
//
//
//
//
//int main() {
//	quickSort(0, arr_size - 1);
//	//arr[0] ~ arr[8]
//
//
//
//	//배열 출력
//	for (int i = 0; i < arr_size; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}