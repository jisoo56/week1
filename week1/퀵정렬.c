//#include <stdio.h>
//
///*
//divide and conquer
//����	   ����		 ����
//low�� high�� index�� �������� �����ϸ� �ɵ�
//
//*/
//
////4 2 8 3 9 0 5 1 7
//
//int arr[] = { 5,3,8,4,9,1,6,2,7 };
//int arr_size = sizeof(arr) / sizeof(int);
//
////�� ���� ���� �ٲٴ� �Լ�
//void swap(int* a, int* b) {
//	int tmp = *b;
//	*b = *a;
//	*a = tmp;
//}
//
////������
//void quickSort(int start, int finish) {
//
//	if (start >= finish) {
//		//�ؿ� �����Ű����!!!
//		return;
//		//void�Լ��� ������ ����� return�̴�
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
//		while (arr[left] < arr[pivot]) {	//left�� ����Ű�� ����
//											//left�� �ɸ°�
//											//pivot���� ������ ���
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
//	}//��ü while��
//	swap(&arr[right], &arr[pivot]);
//	pivot = right;
//
//	//pivot�������� ���ҵ� ���̵��� �� quickSort()����
//	//����Լ��� ���� ����
//	quickSort(start, pivot-1);
//	quickSort(pivot + 1, finish);
//
//	//������ ���� �������� �ɾ����� ������ ���ѷ����� ��
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
//	//�迭 ���
//	for (int i = 0; i < arr_size; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//
//	return 0;
//}