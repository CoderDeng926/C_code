#include <stdio.h>
#include <math.h>
#define TURE 1
#define FALSE 0

int main()
{
	//ţ���� ��̳�ѧ������ѵ��
	//DAY3

	//BC32
	//printf("Name\tAge\tGender\n");
	//printf("---------------------\n");
	//printf("Jack\t18\tman\n");

	//BC33
	//int num_1, num_2, num_3, num_4, num_5;
	//float avergeNum;
	//scanf_s("%d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5);
	//if (num_1 < 100 && num_2 < 100 && num_3 < 100 && num_4 < 100 && num_5 < 100)
	//{
	//	avergeNum = (num_1 + num_2 + num_3 + num_4 + num_5) / 5.0;//ע������Ҫ��5.0��������%.1f��ʾ��ȷ�����С��λ����
	//	printf("%.1f\n", avergeNum);
	//}
	//else { printf("ERROR!\n"); }

	//BC34
	//int BC34_num1, BC34_num2;
	//int BC34_add;
	//scanf_s("0x%x 0%o", &BC34_num1, &BC34_num2);//�����������0x%x�Լ�0%o��'x'��'o'�Ĵ�Сд����
	//BC34_add = BC34_num1 + BC34_num2;
	//printf("%d\n", BC34_add);

	//BC35
	//char BC35_character;
	//while (scanf_s("%c", &BC35_character) != EOF)
	//{
	//	getchar();//����������getchar()������ԭ��
	//	if ((BC35_character >= 65 && BC35_character <= 90) || (BC35_character >=97 && BC35_character <= 122 ))
	//	{
	//		printf("YES\n");
	//	}
	//	else { printf("NO\n"); }
	//}

	//BC36(��ҳ��ʾ�����ڴ���,�ֻ�app�鿴��������BC25�ظ�)

	//BC37
	//int BC37_month, BC37_date, judge;
	//double beforePrice, afterPrice;
	//scanf_s("%lf %d %d %d", &beforePrice, &BC37_month, &BC37_date, &judge);
	//if(BC37_month == 11 && BC37_date == 11)
	//{
	//	switch (judge)
	//	{
	//	case TURE:
	//		afterPrice = beforePrice * 0.7 - 50;
	//		break;
	//	case FALSE:
	//		afterPrice = beforePrice * 0.7;
	//		break;
	//	}
	//	if (afterPrice >= 0)
	//	{
	//		printf("%.2lf\n", afterPrice);
	//	}
	//	else
	//	{
	//		printf("0.00\n");
	//	}
	//}
	//else if(BC37_month == 12 && BC37_date == 12)
	//{
	//	switch (judge)
	//	{
	//	case TURE:
	//		afterPrice = beforePrice * 0.8 - 50;
	//		break;
	//	case FALSE:
	//		afterPrice = beforePrice * 0.8;
	//		break;
	//	}
	//	if (afterPrice >= 0)
	//	{
	//		printf("%.2lf\n", afterPrice);
	//	}
	//	else
	//	{
	//		printf("0.00\n");
	//	}
	//}
	//else 
	//{ 
	//	afterPrice = beforePrice; 
	//	if (afterPrice >= 0)
	//	{
	//		printf("%.2lf\n", afterPrice);
	//	}
	//	else
	//	{
	//		printf("0.00\n");
	//	}
	//}

	//BC38
	int BC38_num1;
	//while (BC38_num >= 10000 && BC38_num <= 100000)
	//{

		/*for (BC38_num = 10000; BC38_num < 100000; BC38_num++)
		{
			if (BC38_num = (BC38_num / 10) * (BC38_num % 10) + (BC38_num / 100) * (BC38_num % 100) + (BC38_num / 1000) * (BC38_num % 1000) + (BC38_num / 10000) * (BC38_num % 10000))
			{
				printf("%d ", BC38_num);
			}
		}*/
	//�˷������У�����ʱ�临�Ӷȹ���

	//}
	int sum;
	int divisor, quotient, residue;
	for (BC38_num1 = 10000; BC38_num1 < 100000; BC38_num1++)
	{
		sum = 0;
		for (divisor = 10; divisor <= 10000; divisor *= 10)
		{
			quotient = BC38_num1 / divisor;
			residue = BC38_num1 % divisor;
			sum += quotient * residue;
		}
		if (sum == BC38_num1)
		{
			printf("%d ", BC38_num1);
		}
	}
	
	return 0;
}