//#include <stdio.h>
//
////74513
//
////�ڿ������� ������ �ȴٴ� ���� �ٽ�
//
//
//
//
//int main() {
//	int arr[] = {7,4,5,1,3,9,2};
//	int size = sizeof(arr) / sizeof(int);
//
//	//for (int i = size-2; i >= 0; i--) {
//	//	for (int j = 0; j < size-1; j++) {
//	//		if (arr[j] > arr[j + 1]) {
//	//			int tmp;
//	//			tmp = arr[j + 1];
//	//			arr[j + 1] = arr[j];
//	//			arr[j] = tmp;
//	//		}
//	//	}//innner
//	//}//outer
//
//
//	//������� ���踦 �̿��ؼ� �ڵ带 © ���� ���� 
//
//	
//	for (int i = 1; i < size; i++) {	//just ȸ����
//		for (int j = 0; j <= size - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp;
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}//inner
//	}//outer
//	
//
//
//
//
//	for (int i = 0; i < size;i++) {
//		printf("%d ", arr[i]);
//	}
//
//
//
//	return 0;
//}