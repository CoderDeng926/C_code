#include <stdio.h>

//���������ʵ��

 void insertion_sort(int* arr, int SZ)
{
	 int i = 0, j = 0;
	 int temp = 0;
	 for (i = 1; i < SZ; i++)
	 {
		 temp = arr[i];
		 for (j = i; j > 0 && arr[j - 1] > temp; j++)
		 {
			 arr[j] = arr[j - 1];
		 }
		 arr[j] = temp;//�ڴӺ���ǰɨ������У���Ҫ������������Ԫ�������Ųλ
	 }
}

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int SZ = sizeof(arr) / sizeof(arr[0]);
//	insertion_sort(&arr, SZ);
//	int i = 0;
//	for (i = 0; i < SZ; i++)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//	return 0;
//}