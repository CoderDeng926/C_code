#include <stdio.h>

int main()
{
	//ţ����_���߱��_��̳�ѧ������
	//DAY 1 
	
	//BC1:
	//printf("Practice makes perfect!\n");//ֱ�Ӵ�ӡ

	//BC2:
	//printf("v   v\n v v\n  v\n");//ֱ�Ӵ�ӡ

	//BC3:
	//printf("The size of short is %d bytes.\n", sizeof(short));//����sizeof��������ֱ�Ӵ�ӡ
	//printf("The size of int is %d bytes.\n", sizeof(int));//sizeof�������÷���int ���� = sizeof(����)
	//printf("The size of long is %d bytes.\n", sizeof(long));
	//printf("The size of long long is %d bytes.\n", sizeof(long long));

	//BC6:
	//printf("     **\n     **\n************\n************\n    *  *\n    *  *\n");//ֱ�Ӵ�ӡ��ע��ո񼴿�
	
	//BC7:
	//printf("0%o\n0X%X\n", 1234, 1234);//����0%o��0X%X����ʮ���������ֱ�ת��Ϊ�˽��ƺ�ʮ��������
	
	//BC8:
	//printf("%15d",0XABCDEF);//����0Xת��ʮ��������Ϊʮ������������%����d��������ȷҪ���ʽ������ĳ��Ȼ�ʹû�����ֵ�λ���ÿո�ռס�������
	
	//BC9:
	//int num_1 = printf("Hello world!");//printf�����ķ���ֵ�Ǵ�ӡ�ַ���������
	//printf("\n%d\n", num_1);
	
	//BC10:
	//int score1, score2, score3;//ֱ��scanf��printf������������
	//scanf_s("%d %d %d", &score1, &score2, &score3);
	//printf("score1 = %d,score2 = %d,score3 = %d\n", score1, score2, score3);
	
	//BC11:
	//int student_number;//������������������ע����ĿҪ���C���Գɼ�����Ϊ80.845�����Ǵ�ӡ��������80.85��Ҫ��%.2f
	//float Clanguage_achievement;
	//float math_achievement;
	//float english_achievement;
	//scanf_s("%d;%f,%f,%f", &student_number, &Clanguage_achievement, &math_achievement, &english_achievement);//ֱ��scanf��printf����
	//printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n", student_number, Clanguage_achievement, math_achievement, english_achievement);
	
	//BC12:
	//char any_character;//����һ�������ַ���ʹ�������ɴ��ַ�����
	//int i = 0, j = 0, m = 0;//��������ѭ���������ͱ���
	//scanf_s("%c",&any_character);//����һ����Ҫ���������ɵ������ַ�

	//for (i = 0; i < 5; i++)//���ѭ��������
	//{
	//	for (j = 0; j <= 3 - i; j++)//�ڲ�ѭ��������
	//	{
	//		printf(" ");//��ӡ�������ַ�ǰ�Ŀո�
	//	}
	//	for (j = 0; j <= i * 2; j++)
	//	{
	//		if (j % 2 == 1)//��ĿҪ��Ľ������ַ����ַ�֮���пո���֮ǰ�Ĵ�������Ŀ��ͬ
	//		{
	//			printf(" ");//��Ҫ���һ���ж����������в���ո�
	//		}
	//		else
	//		{
	//			printf("%c", any_character);//��ӡ�������ַ�
	//		}
	//	}
	//	printf("\n");
	//}

	//for (i = 0; i < 5; i++)//���ѭ��������
	//{
	//	for (j = 0; j < 4 - i; j++)//�ڲ�ѭ��������
	//	{
	//		printf(" ");
	//	}
	//	
	//	for (j = 0; j <= i * 2; j++)
	//	{
	//		if (j % 2 == 1)//��ĿҪ��Ľ������ַ����ַ�֮���пո���֮ǰ�Ĵ�������Ŀ��ͬ
	//		{
	//			printf(" ");//��Ҫ���һ���ж����������в���ո�
	//		}
	//		else
	//		{
	//			printf("%c", any_character);//��ӡ�������ַ�
	//		}
	//	}
	//	printf("\n");
	//}

	//BC13
	
	//����ʼǣ� ACSII������䣺
	//			48��57Ϊ0��9ʮ�����������֣�
	//			65��90Ϊ26����дӢ����ĸ��
	//			97��122��Ϊ26��СдӢ����ĸ��

	//int i = 0;
	//int BC13_testarray[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33};//�ȴ�������
	//for (i = 0; i < 15; i++)//���ñ���ѭ�������д�ӡ%cת��ΪASCII�ַ���int����
	//{
	//	printf("%c",BC13_testarray[i]);
	//}

	//BC14
	//int year, month , date;//��������
	//scanf_s("%4d%2d%2d",&year, &month, &date);//����scanf��%������֣�����ȡ������Ϣ������ڡ�������ĵ�ַ
	//printf("year = %d\nmonth = %02d\ndate = %02d\n", year, month, date);//����printf����%�������ռλ��������ǰ��0���в�λ
	
	//BC15
	//int num_1, num_2;//����������
	//int changenum;//�������ڽ�������
	//scanf_s("%d,%d", &num_1, &num_2);
	//changenum = num_1;//��������������ʵ�ʽ��н���
	//num_1 = num_2;
	//num_2 = changenum;
	//printf("a = %d, b = %d\n", num_1, num_2);

	//BC16
	//char BC16_variable;//����һ���ַ�����
	//scanf_s("%c",&BC16_variable);
	//printf("%d",BC16_variable);//ֱ��%dת��

	//BC17
	//int a = 40, c = 212;//ֱ�Ӽ���
	//printf("%d\n", (-8 + 22)* a - 10 + c /2);
	
	//BC18
	//int BC18_num1, BC18_num2;//������������
	//scanf_s("%d %d", &BC18_num1, &BC18_num2);
	//printf("%d %d\n",BC18_num1 / BC18_num2, BC18_num1 % BC18_num2);//ǰ��Ϊ����/������Ϊģ%
		
	//BC20
	int BC20_num1, BC20_num2;
	scanf_s("%d %d", &BC20_num1, &BC20_num2);
	printf("%d\n", (BC20_num1 % 100 + BC20_num2 % 100) % 100);
	
	return 0;
}