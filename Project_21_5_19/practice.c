#include <stdio.h>
#include <math.h>

int main()
{
	//牛客网 编程初学者入门训练
	//DAY6

	//BC53
	//double a, b, c;
	//double x1, x2;
	//double delta;
	//while (scanf_s("%lf %lf %lf", &a, &b, &c) == 3)
	//{
	//	delta = pow(b, 2) - a * c * 4;
	//	if (a == 0)
	//	{
	//		printf("Not quadratic equation\n");
	//		break;
	//	}
	//	if (a != 0)
	//	{
	//		if (delta == 0)
	//		{
	//			x1 = x2 = b / (-2 * a);
	//			printf("x1=x2=%.2lf\n", x1, x2);
	//		}
	//		else if (delta > 0)
	//		{
	//			x1 = (-b - sqrt(delta)) / (2 * a);
	//			x2 = (-b + sqrt(delta)) / (2 * a);
	//			printf("x1=%.2lf;x2=%.2lf\n", x1, x2);
	//		}
	//		else 
	//		{
	//			x1 = -b / (2 * a);
	//			x2 = sqrt(-delta) / (2 * a);
	//			printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x1, x2, x1, x2);
	//		}
	//	}
	//	
	//}

	//BC54
	//int year = 0, month = 0;
	//int arr1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//int arr2[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	//while (scanf_s("%d %d", &year, &month) == 2)
	//{
	//	if (year % 4 == 0 || (year % 100 == 0 && year % 400 ==0))
	//	{
	//		printf("%d\n", arr2[month - 1]);
	//	}
	//	else { printf("%d\n", arr1[month - 1]); }
	//}

	//BC55
	//double num1 = 0, num2 = 0;
	//char sign = 0;
	//double result = 0;
	//while (scanf_s("%lf%c%lf", &num1, &sign, &num2) != EOF)
	//{
	//	if (sign != '+' && sign != '-' && sign != '*' && sign != '/')
	//	{
	//		printf("Invalid operation!\n");
	//		continue;
	//	}
	//	if (sign == '/' && num2 == 0)
	//	{
	//		printf("Wrong!Division by zero!\n");
	//		continue;
	//	}
	//	switch(sign)
	//	{
	//	case '+':
	//		result = num1 + num2;
	//		printf("%.4lf+%.4lf=%.4lf\n", num1, num2, result);
	//		break;
	//	case '-':
	//		result = num1 - num2;
	//		printf("%.4lf-%.4lf=%.4lf\n", num1, num2, result);
	//		break;
	//	case '*':
	//		result = num1 * num2;
	//		printf("%.4lf*%.4lf=%.4lf\n", num1, num2, result);
	//		break;
	//	case '/':
	//		result = num1 / num2;
	//		printf("%.4lf/%.4lf=%.4lf\n", num1, num2, result);
	//		break;
	//	}
	//}

	//BC56
	//int num = 0;
	//while (scanf_s("%d", &num) != EOF)
	//{
	//	int i = 0;
	//	for (i = 0; i < num; i++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//BC57
	//int num = 0;
	//while(scanf_s("%d", &num) != EOF)
	//{
	//	int i = 0, j =0;
	//	for (i = 0; i < num; i++)
	//	{
	//		
	//		printf("* ");
	//		
	//		for (j = 0; j < num - 1; j++)
	//		{
	//			printf("* ");
	//		}
	//		printf("\n");
	//	}
	//}

	//BC58
	int num = 0;
	while (scanf_s("%d", &num) != EOF)
	{
		int i = 0, j = 0;
		for (i = 0; i < num; i++)
		{

			printf("* ");

			for (j = 0; j < i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}


	return 0;
}