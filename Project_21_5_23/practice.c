#include <stdio.h>
#include <string.h>

int main()
{
	//牛客网 编程初学者入门训练
	//DAY10

	//BC80
	//char name[] = "admin";
	//char password[] = "admin";
	//char name1[] = { 0 }, password1[] = { 0 };
	//while (scanf_s("&s &s", name1, password1) != EOF)
	//{
	//	if (name1 == name && password1 == password)
	//	
	//		printf("Login Success!\n");
	//	
	//	else { printf("Login Fail!\n"); break; }
	//}

	//char name[6] = "admin";
	//char secret[6] = "admin";
	//char input1[100], input2[100];
	//while (scanf_s("%s %s", input1, input2) == 2)
	//{
	//	if (strcmp(input1, name) == 0 && strcmp(input2, secret) == 0)
	//		printf("Login Success!\n");
	//	else printf("Login Fail!\n");
	//}

	//BC81
	//printf("I will learn C++ well!\n");

	//BC82
	//int count = 0;
	//int a = 0, b = 0, c = 0, d = 0;
	//scanf_s("%d %d %d %d", &a, &b, &c, &d);
	//count = (a + b - c) * d;
	//printf("%d\n", count);

	//BC83
	//int num = 0;
	//scanf_s("%d", &num);
	//if (num % 5 == 0)
	//{
	//	printf("YES\n");
	//}
	//else
	//{
	//	printf("NO\n");
	//}

	//BC84
	//int num = 0;
	//scanf_s("%d", &num);
	//if (num == 0)
	//{
	//	printf("0\n");
	//}
	//else if (num > 0)
	//{
	//	printf("-1\n");
	//}
	//else
	//{
	//	printf("1\n");
	//}

	//BC85
	//int i = 0;
	//int count = 0;
	//for (i = 0; i <= 2019; i++)
	//{
	//	int j = i;
	//	while (j > 0)
	//	{
	//		if (j % 10 == 9)
	//		{
	//			count++;
	//			break;
	//		}
	//		j /= 10;
	//	}
	//}
	//printf("%d\n", count);

	//BC86
	int N = 0;
	int count = 0;
	int i = 0, j = 0;
	scanf_s("%d", &N);
	for (i = 0; i < N; i++)
	{
		j = i;
		if (j % 2 == 1)
		{
			count++;
		}
	}
	printf("%d %d\n", count, N - count);

	return 0;
}