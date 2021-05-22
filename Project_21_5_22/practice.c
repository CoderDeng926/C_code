#include <stdio.h>


void find_max_min(double a[], int len, double* min, double* max)
{
	int i = 0;
	
	for (i = 0; i < len; i++)
	{
		if (*max < a[i])
		{
			*max = a[i];
		}
	}

	for (i = 0; i < len; i++)//搞不清楚为什么取最小值不起作用
	{
		if (*min > a[i])
		{
			*min = a[i];
		}
	}
}
int main()
{
	//牛客网 编程初学者入门训练
	//DAY9

	//BC71
	//printf("Happy New Year*2019*");

	//BC72
	//float num1, num2, num3, num4, num5;
	//float add, average;
	//scanf_s("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);
	//add = num1 + num2 + num3 + num4 + num5;
	//average = add / 5;
	//printf("%.2f\n", average);

	//BC73
	//int score = 0;
	//scanf_s("%d", &score);
	//while (score >= 10)
	//{
	//	printf("Danger++\n");
	//	break;
	//}
	//while (score <= 9 && score >= 4)
	//{
	//	printf("Danger\n");
	//	break;
	//}
	//while (score <= 3 && score >= 0)
	//{
	//	printf("Good\n");
	//	break;
	//}

	//BC74
	//int HTTP = 0;
	//while (scanf_s("%d", &HTTP) != EOF)
	//{
	//	switch (HTTP)
	//	{
	//	case 200:
	//		printf("OK\n");
	//		break;
	//	case 202:
	//		printf("Accepted\n");
	//		break;
	//	case 400:
	//		printf("Bad Request\n");
	//		break;
	//	case 403:
	//		printf("Forbidden\n");
	//		break;
	//	case 404:
	//		printf("Not Found\n");
	//		break;
	//	case 500:
	//		printf("Internal Server Error\n");
	//		break;
	//	case 502:
	//		printf("Bad Gateway\n");
	//		break;
	//	}
	//}

	//BC75
	//int num = 0;
	//int i = 0, j = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		
	//		for (j = 0; j < i; j++)
	//		{
	//			printf("%d ", j + 1);
	//		}
	//		printf("\n");
	//	}
	//}

	//BC76
	//int i = 0;
	//double add = 0, average = 0;
	//double arr[7] = { 0 };
	//scanf_s("%lf %lf %lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]);
	//double min = arr[0], max = 0;
	//for (i = 0; i < 7; i++)
	//{
	//	if (max < arr[i])
	//	{
	//		max = arr[i];
	//	}
	//}

	//for (i = 0; i < 7; i++)
	//{
	//	if (min > arr[i])
	//	{
	//		min = arr[i];
	//	}
	//}
	//for (i = 0; i < 7; i++)
	//{
	//	add += arr[i];
	//}
	///*find_max_min(arr, sizeof(arr[7])/sizeof(double), &min, &max);*/
	///*printf("%.2lf\n%.2lf\n", min, max);*/
	//add = add - min - max;
	//average = add / 5;
	//printf("%.2lf\n", average);

	//BC77
	//int N = 0;
	//int add = 0;
	//scanf_s("%d", &N);
	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < N; i++)
	//{
	//	scanf_s("%d ", &arr[i]);
	//}
	//scanf_s("%d", &add);
	//for (i = N; i > 0; i--)
	//{
	//	if (arr[i - 1] >= add)
	//	{
	//		arr[i] = arr[i - 1];
	//	}
	//	else 
	//	{ 
	//		arr[i] = add;
	//		break;
	//	}
	//}
	//if (i == 0) arr[i] = add;
	//for (i = 0; i <= N; i++)
	//{
	//	if (i == N)printf("%d\n", arr[i]);
	//	else printf("%d ", arr[i]);
	//}

	

	return 0;
}

