#include <stdio.h>

int main()
{
	//ţ���� ��̳�ѧ������ѵ��
	//DAY8

	//BC64
	//int num = 0;
	//int i = 0, j = 0, k = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		for (j = 0; j < num - i; j++)
	//		{
	//			printf("* ");
	//		}
	//		printf("* ");
	//		for (k = 0;k < i; k++)//����һ���� ��Ҫ����ո�
	//			printf(" ");
	//		printf("\n");
	//	}
	//	for (i = 0; i < num + 1; i++)
	//	{
	//		for (j = 0; j < i; j++)
	//		{
	//			printf("* ");
	//		}
	//		printf("* ");
	//		for (k = 0;k < num - i; k++)//����һ���� ��Ҫ����ո�
	//			printf(" ");
	//		printf("\n");
	//	}
	//}

	//BC65
	//int num = 0;
	//int i = 0, j = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num + 1; i++)//�ϰ벿�֣������¶Գ��ᣬ���м�һ��
	//	{
	//		for (j = 0; j < num - i; j++)
	//		{
	//			printf("  ");
	//		}
	//		for (j = 0; j < i; j++)
	//		{
	//			printf("*");
	//		}
	//		printf("*");
	//		printf("\n");
	//	}
	//	for (i = 0; i < num; i++)//�°벿��
	//	{
	//		for (j = 0; j < i * 2 + 2; j++)
	//		{
	//			printf(" ");
	//		}
	//		for (j = 0; j < num - 1 - i; j++)
	//		{
	//			printf("*");
	//		}
	//		printf("*");
	//		printf("\n");
	//	}
	//}

	//BC66
	//int num = 0;
	//int i = 0, j = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		for (j = 0; j < i; j++)
	//		{
	//			printf(" ");
	//		}
	//		printf("*");
	//		for (j = 0; j < num - 1 - i; j++)
	//		{
	//			printf(" ");
	//		}
	//		printf("\n");
	//	}
	//}

	//BC67
	//int num = 0;
	//int i = 0, j = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		for (j = 0; j < num - 1 - i; j++)
	//		{
	//			printf(" ");
	//		}
	//		printf("*");
	//		for (j = 0; j < i; j++)
	//		{
	//			printf(" ");
	//		}
	//		printf("\n");
	//	}
	//}

	//BC68
	//int num = 0;
	//int i = 0, j = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		for (j = 0; j < num; j++)
	//		{
	//			if (i == j)
	//			{
	//				printf("*");
	//			}
	//			else if (j == num - i - 1)
	//			{
	//				printf("*");
	//			}
	//			else
	//			{
	//				printf(" ");
	//			}
	//		}
	//		printf("\n");
	//	}
	//}
	

	//BC69
	//int num = 0;
	//int i = 0, j = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	for (i = 0; i < num; i++)
	//	{
	//		printf("* ");
	//	}printf("\n");
	//	for (i = 0; i < num - 2; i++)
	//	{
	//		printf("* ");
	//		for (j = 0; j < (num - 2) * 2; j++)
	//		{
	//			printf(" ");
	//		}printf("* \n");
	//	}
	//	for (i = 0; i < num; i++)
	//	{
	//		printf("* ");
	//	}printf("\n");
	//}

	//BC70
	int num = 0;
	int i = 0, j = 0;
	while (scanf_s("%d", &num) != EOF)
	{
		for (i = 0; i < num - 1; i++)
		{
			for (j = 0; j < num - 1; j++)
			{				
				if (i == num || j == 0 || j == i)				
					printf("* ");				
				else			
					printf("  ");	
			}
			printf("\n");
		}
		for (i = 0; i < num - 1; i++)
		{
			printf("* ");
		}printf("*\n");
	}

	/*int n, i, j;
	while (scanf_s("%d", &n) != EOF)
	{
		for (i = 1;i <= n;i++)
		{
			for (j = 1;j <= n;j++)
			{
				if (i == n || j == 1 || j == i)
					printf("* ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}*/

	return 0;
}