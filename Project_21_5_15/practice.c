#include <stdio.h>
#include <math.h>
#define π 3.1415926
int main()
{
	//牛客网 编程初学者入门训练
	//DAY2

	//BC21
	//float BC21_num;//声明浮点型变量
	//scanf_s("%f", &BC21_num);
	//printf("%d\n", (int)BC21_num % 10);//利用(int)float_variable进行强制转换，然后%10即可

	//BC22
	//int BC22_age = 0;//声明变量年龄
	//long int age_second = 0;//声明long型变量秒
	//scanf_s("%d", &BC22_age);
	//age_second = BC22_age * 31560000;
	//printf("%ld\n", age_second);//打印秒，注意这里要用%ld(VS2019可以通过%d,但是牛客网网页答题必须用%ld才可以通过)

	//BC23
	//long BC23_second1 = 0;
	//int BC23_hour = 0, BC23_minute = 0, BC23_second2 = 0;
	//scanf_s("%ld", &BC23_second1);
	//BC23_hour = BC23_second1 / 3600;//除3600即可得到整小时数
	//BC23_minute = BC23_second1 % 3600 / 60;//先模3600得除整小时以外的秒数，再除60即可得到整分钟数
	//BC23_second2 = BC23_second1 % 60;//直接模分钟后，剩下单独剩余的秒数
	//printf("%d %d %d\n", BC23_hour, BC23_minute, BC23_second2);

	//BC24
	//float subjectScore1 = 0, subjectScore2 = 0, subjectScore3 = 0;//声明一系列浮点型变量
	//float averageScore = 0, addScore = 0;
	//scanf_s("%f %f %f", &subjectScore1, &subjectScore2, &subjectScore3);
	//addScore = (subjectScore1 + subjectScore2 + subjectScore3);//直接相加
	//averageScore = addScore / 3;//直接总成绩除以科目数
	//printf("%.2f %.2f\n", addScore, averageScore);

	//BC25
	//float weight = 0, height = 0;
	//float BMI = 0;
	//scanf_s("%f %f", &weight, &height);
	//height = height / 100;
	//BMI = (float) weight / (height * height);//难点在于BMI表达式
	//printf("%.2f\n", BMI);

	//BC26
	//float a, b, c, p;
	//float circumFerence;
	//double area;
	//scanf_s("%f %f %f", &a, &b, &c);
	//if (a + b > c || b + c > a || a + c > b)
	//{
	//	circumFerence = a + b + c;
	//	p = circumFerence / 2;
	//	area = sqrt(p * (p - a) * (p - b) * (p - c));
	//	printf("circumference=%.2f area=%.2f\n", circumFerence, area);
	//}
	//else
	//{
	//	printf("error!\n");
	//}

	//BC27
	//float r = 0, V = 0;
	//scanf_s("%f", &r);
	//V = (4.f / 3.f) * π * r * r * r;
	//printf("%.3f\n", V);

	//BC28
	//char letter = NULL;
	//while (scanf_s("%c", &letter) != EOF)
	//{
	//	getchar();
	//	printf("%c\n", letter + 32);
	//}

	//BC29
	//double num = 0;
	//while (scanf_s("%lf", &num) != EOF)
	//{
	//	printf("%.lf\n", pow(2 , num));
	//}

	//BC30
	//int n, h, m;
	//while(scanf_s("%d %d %d", &n, &h, &m) != EOF);
	//{
	//	if (m % h == 0)
	//		printf("%d\n", n - (m / h));
	//	else
	//		printf("%d\n", n - (m / h) - 1);
	//}

	//BC31
	printf("I lost my cellphone!");
	
	return 0;
}