#include <stdio.h>

int main()
{
	//牛客网 编程初学者入门训练
	//DAY 4

	//BC39
	//int studentNum, i;
	//int achievement[40] = { 0 };
	//scanf_s("%d", &studentNum);
	//for (i = 0; i <= studentNum; i++)
	//{
	//	scanf_s("%d", &achievement[i]);
	//}
	//for (i = 0; i < studentNum - 1; i++)
	//{
	//	int compare = 0;
	//	for (compare = 0; compare < studentNum - 1 - i; compare++)//冒泡排序法，重点理解清楚思路
	//	{
	//		if (achievement[compare] < achievement[compare + 1])
	//		{
	//			int change = 0;
	//			change = achievement[compare];
	//			achievement[compare] = achievement[compare + 1];
	//			achievement[compare + 1] = change;
	//		}

	//	}
	//}
	//for (i = 0; i <= 4; i++)
	//{
	//	printf("%d ", achievement[i]);
	//}

	//int n, i;
	//int arr[40] = { 0 };
	//scanf_s("%d", &n);
	//for (i = 0; i < n; i++)
	//{
	//	scanf_s("%d", &arr[i]);
	//}
	//for (i = 0; i < n - 1; i++)//冒泡排序，重点理解思路
	//{
	//	for (int j = 0; j < n - 1 - i; j++)
	//	{
	//		if (arr[j] < arr[j + 1])
	//		{
	//			int tmp;
	//			tmp = arr[j];
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = tmp;
	//		}
	//	}
	//}
	//for (i = 0; i <= 4; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//BC40
	//鹏哥的写法
	//int ch = 0;
	//int count_a = 0, count_b = 0;
	//while (((ch = getchar()) != '0') && ch != EOF)//重点理解这行代码的意义
	//{
	//	if (ch == 'A')
	//	{
	//		count_a++;
	//	}
	//	if (ch == 'B')
	//	{
	//		count_b++;
	//	}
	//}
	//if (count_a > count_b)
	//{
	//	printf("A\n");
	//}
	//else if (count_a < count_b)
	//{
	//	printf("B\n");
	//}
	//else
	//{
	//	printf("E\n");
	//}

	//char arr[] = {NULL};//自己的做法，有问题
	//int i;
	//scanf_s("%c", arr);
	//int count1 = 0, count2 = 0;
	//for (i = 0;; i++)
	//{
	//	while (arr[i] == 'A')
	//	{
	//		count1++;
	//	}
	//	while (arr[i] == 'B')
	//	{
	//		count2++;
	//	}
	//	while (arr[i] == 0)
	//	{
	//		break;
	//	}
	//}
	//if (count1 > count2)
	//{
	//	printf("A\n");
	//}
	//else if (count1 < count2)
	//{
	//	printf("B\n");
	//}
	//else
	//{
	//	printf("E");
	//}

	//BC41
	//int num = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	if (num >= 140)
	//	{
	//		printf("Genius\n");
	//	}
	//	else
	//	{
	//		printf("general\n");
	//	}
	//}
	
	//BC42
	//int score = 0;
	//while (scanf_s("%d", &score) != EOF)
	//{
	//	if (score >= 90 && score <=100)
	//	{
	//		printf("Perfect\n");
	//	}
	//	else
	//	{
	//		printf("Good\n");
	//	}
	//}

	//BC43
	//int score = 0;
	//while (scanf_s("%d", &score) != EOF)
	//{
	//	/*while (score >= 0 || score <= 100)//这里不能加这个while循环，原因未知
	//	{*/
	//		if (score >= 60)
	//		{
	//			printf("Pass\n");
	//		}
	//		else
	//		{
	//			printf("Fail\n");
	//		}
	//	/*}*/
	//}

	//BC44
	//int num = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	if ((num % 2) == 0)
	//	{
	//		printf("Even\n");
	//	}
	//	else
	//	{
	//		printf("Odd\n");
	//	}
	//}

	//BC45
	//int num1 = 0, num2 = 0, num3 = 0;
	//while (scanf_s("%d %d %d", &num1, &num2, &num3) != EOF)
	//{
	//	if ((num1 >= num2 && num1 >= num3) || num1 == num2 == num3)
	//	{
	//		printf("%d\n", num1);
	//	}
	//	else if ((num2 >= num1 && num2 >= num3) || num1 == num2 == num3)
	//	{
	//		printf("%d\n", num2);
	//	}
	//	else
	//	{
	//		printf("%d\n", num3);
	//	}
	//}
	//看到此题有人这种写法
	//int a, b, c, t;
	//t = a > b ? a : b;
	//t = t > c ? t : c;
	//printf("%d\n", t);



	return 0;
}