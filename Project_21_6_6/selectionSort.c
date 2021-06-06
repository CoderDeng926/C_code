#include <stdio.h>

//ѡ�������ʵ��

void swap(int* num1, int* num2)
{
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void selection_sort(int* arr, int SZ)
{
	int i = 0, j = 0;
	for (i = 0; i < SZ - 1; i++)
	{
		int min = i;//����һ����Сֵ�±�ĸ�ֵ���Ӷ�ʹ��Сֵ�ж��ܹ�������ȥ
		for (j = i + 1; j < SZ; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[min], &arr[i]);
		}
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int SZ = sizeof(arr) / sizeof(arr[0]);
	selection_sort(&arr, SZ);
	int i = 0;
	for (i = 0; i < SZ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}