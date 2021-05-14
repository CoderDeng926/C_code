#include <stdio.h>

int main()
{
	//牛客网_在线编程_编程初学者试题
	//DAY 1 
	
	//BC1:
	//printf("Practice makes perfect!\n");//直接打印

	//BC2:
	//printf("v   v\n v v\n  v\n");//直接打印

	//BC3:
	//printf("The size of short is %d bytes.\n", sizeof(short));//利用sizeof函数，可直接打印
	//printf("The size of int is %d bytes.\n", sizeof(int));//sizeof函数的用法是int 变量 = sizeof(类型)
	//printf("The size of long is %d bytes.\n", sizeof(long));
	//printf("The size of long long is %d bytes.\n", sizeof(long long));

	//BC6:
	//printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");//直接打印，注意空格即可
	
	//BC7:
	//printf("0%o\n0X%X\n", 1234, 1234);//利用0%o和0X%X进行十进制整数分别转换为八进制和十六进制数
	
	//BC8:
	//printf("%15d",0XABCDEF);//利用0X转化十六进制数为十进制数，再用%长度d来输入正确要求格式，这里的长度会使没有数字的位置用空格占住数字左侧
	
	//BC9:
	//int num_1 = printf("Hello world!");//printf函数的返回值是打印字符的整型数
	//printf("\n%d\n", num_1);
	
	//BC10:
	//int score1, score2, score3;//直接scanf和printf两个函数即可
	//scanf_s("%d %d %d", &score1, &score2, &score3);
	//printf("score1 = %d,score2 = %d,score3 = %d\n", score1, score2, score3);
	
	//BC11:
	//int student_number;//先声明各变量，尤其注意题目要求的C语言成绩输入为80.845，但是打印出来的是80.85，要用%.2f
	//float Clanguage_achievement;
	//float math_achievement;
	//float english_achievement;
	//scanf_s("%d;%f,%f,%f", &student_number, &Clanguage_achievement, &math_achievement, &english_achievement);//直接scanf和printf即可
	//printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n", student_number, Clanguage_achievement, math_achievement, english_achievement);
	
	//BC12:
	//char any_character;//声明一个任意字符，使金字塔由此字符构成
	//int i = 0, j = 0, m = 0;//声明几个循环计数整型变量
	//scanf_s("%c",&any_character);//输入一个想要金字塔构成的任意字符

	//for (i = 0; i < 5; i++)//外层循环控制行
	//{
	//	for (j = 0; j <= 3 - i; j++)//内层循环控制列
	//	{
	//		printf(" ");//打印金字塔字符前的空格
	//	}
	//	for (j = 0; j <= i * 2; j++)
	//	{
	//		if (j % 2 == 1)//题目要求的金字塔字符与字符之间有空格，与之前的打星星题目不同
	//		{
	//			printf(" ");//需要添加一个判断条件，进行插入空格
	//		}
	//		else
	//		{
	//			printf("%c", any_character);//打印金字塔字符
	//		}
	//	}
	//	printf("\n");
	//}

	//for (i = 0; i < 5; i++)//外层循环控制行
	//{
	//	for (j = 0; j < 4 - i; j++)//内层循环控制列
	//	{
	//		printf(" ");
	//	}
	//	
	//	for (j = 0; j <= i * 2; j++)
	//	{
	//		if (j % 2 == 1)//题目要求的金字塔字符与字符之间有空格，与之前的打星星题目不同
	//		{
	//			printf(" ");//需要添加一个判断条件，进行插入空格
	//		}
	//		else
	//		{
	//			printf("%c", any_character);//打印金字塔字符
	//		}
	//	}
	//	printf("\n");
	//}

	//BC13
	
	//补充笔记： ACSII编码记忆：
	//			48～57为0到9十个阿拉伯数字；
	//			65～90为26个大写英文字母；
	//			97～122号为26个小写英文字母。

	//int i = 0;
	//int BC13_testarray[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};//先创建数组
	//for (i = 0; i < 15; i++)//利用变量循环，进行打印%c转化为ASCII字符的int整数
	//{
	//	printf("%c",BC13_testarray[i]);
	//}

	//BC14
	//int year, month , date;//声明变量
	//scanf_s("%4d%2d%2d",&year, &month, &date);//利用scanf的%后跟数字，来截取输入信息，存放在‘，’后的地址
	//printf("year = %d\nmonth = %02d\ndate = %02d\n", year, month, date);//利用printf函数%后加数字占位数，数字前加0进行补位
	
	//BC15
	//int num_1, num_2;//声明两数字
	//int changenum;//声明用于交换变量
	//scanf_s("%d,%d", &num_1, &num_2);
	//changenum = num_1;//借助交换变量，实际进行交换
	//num_1 = num_2;
	//num_2 = changenum;
	//printf("a = %d, b = %d\n", num_1, num_2);

	//BC16
	//char BC16_variable;//声明一个字符变量
	//scanf_s("%c",&BC16_variable);
	//printf("%d",BC16_variable);//直接%d转化

	//BC17
	//int a = 40, c = 212;//直接计算
	//printf("%d\n", (-8 + 22)* a - 10 + c /2);
	
	//BC18
	//int BC18_num1, BC18_num2;//声明两个变量
	//scanf_s("%d %d", &BC18_num1, &BC18_num2);
	//printf("%d %d\n",BC18_num1 / BC18_num2, BC18_num1 % BC18_num2);//前者为除法/，后者为模%
		
	//BC20
	int BC20_num1, BC20_num2;
	scanf_s("%d %d", &BC20_num1, &BC20_num2);
	printf("%d\n", (BC20_num1 % 100 + BC20_num2 % 100) % 100);
	
	return 0;
}