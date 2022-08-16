//#include <stdio.h>
//
// 
// 선택정렬: 정렬이 안 된 값들 중 가장 왼쪽 값을 선택값으로 잡고,
// 정렬이 안 된 값들(선택값 포함) 중 최소값을 찾아서 최소값과 선택값의 자리를 바꿔주는 것
//int main() {
//	int arr[] = { 2,3,9,6,7 };	//5칸
//
//	int selection;	//선택값
//	for (int i = 0; i < 4; i ++ ) {
//		selection = arr[i];
//		int minIndex = i;	//최소값 가정
//		for (int j = i + 1; j < 5; j++) {
//			if (arr[j] < arr[minIndex]) {
//				minIndex = j;
//			}
//
//		}
//		//2줄만 
//
//
//	}
//
//
//	return 0;
//}