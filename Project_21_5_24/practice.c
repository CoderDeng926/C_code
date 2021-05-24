#include <stdio.h>
#include <string.h>

int main()
{
	//牛客网 编程初学者入门训练
	//DAY11

	//BC87
	//int n = 0;
	//float arr[100] = {0};
	//float add = 0, average = 0;
	//scanf_s("%d", &n);
	//for (int i = 0; i < n; i++)
	//{
	//	scanf_s("%f ", &arr[i]);
	//	add += arr[i];
	//}
	//average = add / n;
	//float max = arr[0], min = arr[0];
	//for (int j = 0; j < n; j++)
	//{
	//	if (max < arr[j])
	//	{
	//		max = arr[j];
	//	}
	//	if (min > arr[j])
	//	{
	//		min = arr[j];
	//	}
	//}
	//printf("%.2f %.2f %.2f\n", max, min, average);

	//BC88
	//int N = 0;
	//int arr[100] = { 0 };
	//int add = 0;
	//scanf_s("%d", &N);
	//for (int i = 0; i < N; i++)
	//{
	//	scanf_s("%d ", &arr[i]);
	//}
	//scanf_s("%d", &add);
	//int k = 0;
	//for (int j = 0; j < N; j++)//重点在于插入改变后序元素的位置
	//{
	//	if (add < arr[j])
	//		k++;
	//}
	//for (int l = N; l > k; l--)
	//{
	//	arr[l] = arr[l - 1];
	//}
	//arr[k] = add;
	//for (int h = 0; h < N; h++)
	//{
	//	printf("%d ", arr[h]);
	//}

	//BC89
	//char password[20] = { 0 }, Rpassword[20] = {0};
	//scanf_s("%s %s", password, Rpassword);
	//if (strcmp(password, Rpassword) == 0)
	//{
	//	printf("same\n");
	//}
	//else { printf("different\n"); }

	//BC90
	//int N = 0, M = 0;
	//int i = 0, j = 0;
	//int sum = 0;
	//scanf_s("%d %d", &N, &M);
	//int arr[100][100];
	//for (i = 0; i < N; i++)
	//{
	//	for (j = 0; j < M; j++)
	//	{
	//		scanf_s("%d", &arr[i][j]);
	//		if (arr[i][j] > 0)
	//		{
	//			sum += arr[i][j];
	//		}
	//	}
	//}
	//printf("%d\n", sum);

	//BC92
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf_s("%d", &arr[i]);
	//}
	//for (int j = 9; j >= 0; j--)
	//{
	//	printf("%d ", arr[j]);
	//}
	//printf("\n");

	//BC93
	//int arr[10] = { 0 };
	//int i = 0;
	//int count1 = 0, count2 = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf_s("%d ", &arr[i]);
	//	if (arr[i] > 0)
	//	{
	//		count1++;
	//	}
	//	else if (arr[i] < 0)
	//	{
	//		count2++;
	//	}
	//}
	//printf("positive:%d\nnegative:%d\n", count1, count2);

	//BC94
	//int N = 0;
	//int arr[51] = {0};
	//int sum = 0, i = 0;
	//scanf_s("%d", &N);
	//for (i = 0; i < N; i++)
	//{
	//	scanf_s("%d ", &arr[i]);
	//}
	//int j = 0;
	//for (j = 0; j < N; j++)
	//{
	//	sum += arr[j];
	//}
	//printf("%d", sum);

	//BC95
	int n = 0;
	int arr[10000] = { 0 };
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d ", &arr[i]);
	}
	int min = arr[0], max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("%d\n", max - min);

	return 0;
}