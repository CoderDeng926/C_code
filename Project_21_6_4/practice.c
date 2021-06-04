#include <stdio.h>


//√∞≈›≈≈–Úµƒ µœ÷

 void bobble_sort(int* arr, int SZ)
{
	int i, j;
	for (i = 0; i < SZ; i++)
	{
		int jungle = 1;
		for (j = 0; j < SZ - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				jungle = 0;
			}
		}
		if (jungle == 1)
			break;
	}
}

int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int SZ = sizeof(arr) / sizeof(arr[0]);
	bobble_sort(arr, SZ);
	int i = 0;
	for (i = 0; i < SZ; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}