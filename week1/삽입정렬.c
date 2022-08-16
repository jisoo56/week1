//#include <stdio.h>
//
//int main() {
//	int arr[5] = { 8,5,6,2,4 };	//초기배열
//
//
//	int key;	//5,6,2,4
//				//arr[1] ~ arr[size-1]
//
//	for (int i = 1; i < 5; i++) {
//		key = arr[i];
//		int j;
//		for (int j = i - 1; j >= 0; j--) {
//			if (arr[i] > key) {
//				arr[j + 1] = arr[j];
//			}
//			else {
//				//arr[i]가 key보다 작거나 같을 때
//				break;
//			}
//		}//inner
//		arr[j + 1] = key; 
//
//	}//outer
//
//	
//
//
//
//
//
//	return 0;
//}