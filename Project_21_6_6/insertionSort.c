#include <stdio.h>

//插入排序简单实现

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
		 arr[j] = temp;//在从后向前扫描过程中，需要反复把已排序元素逐步向后挪位
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