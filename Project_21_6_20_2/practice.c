#include <stdio.h>

//�ṹ��

//����һ��ѧ��
//����
//�Ա�
//����
//�绰
//ѧ��

//struct �ǽṹ��ؼ���		stu �ǽṹ���ǩ		struct stu �ǽṹ������
struct stu
{
	//��Ա����
	char name[10];
	char sex[2];
	int age;
	char tele[12];
	long stu_num;
}s1, s2, s3;//���';'�ǳ���Ҫ���ɺ��ԣ���Ϊ�ṹ��������һ�����
//�����s1,s2,s3�������ṹ������ʱ������ȫ�ֽṹ����������������ýṹ�崴���ı���Ϊ�ֲ�����
//����һ�㲻ʹ��ȫ�ֱ���


typedef struct Stu
{
	//��Ա����
	char name[10];
	char sex[5];
	int age;
	char tele[12];
	long stu_num;
}Stu;//�����typedef��Ϊ�˰ѽṹ��������������Ϊ';'ǰ������
	 //�� Stu Ϊ���ͣ�����ȫ�ֱ���
	 //����Ҳ����ʹ��struct Stu

//������һ��Ľṹ������
//���ýṹ�������еĳ�Ա�������б�Ľṹ������
struct A
{
	int a;
	double b;
	char c[20];
	char d;
};

struct B
{
	struct A A1;
	char c1[20];
	char* pc;
};

void print1(Stu tmp)
{
	printf("name :	%s\n", tmp.name);
	printf("sex :	%s\n", tmp.sex);
	printf("age :	%d\n", tmp.age);
	printf("tele :	%s\n", tmp.tele);
	printf("stu_num:%d\n", tmp.stu_num);
}

void print2(Stu* tmp)
{
	printf("name :	%s\n", tmp->name);
	printf("sex :	%s\n", tmp->sex);
	printf("age :	%d\n", tmp->age);
	printf("tele :	%s\n", tmp->tele);
	printf("stu_num:%d\n", tmp->stu_num);
}

int main()
{
	struct stu a = { "djq", "��", 22, "12345678900", 20187160550 };
	Stu b = { "lw", "Ů", 23, "12345678901", 20187160 };
	char arr[20] = { "I LOVE LW" };
	struct B e = { {1, 1.5, "���", 'D'}, "hello world!", arr};//Ƕ�׽ṹ��ʼ��
	//����ṹ���ڵĳ�Ա����
	//ʹ�� �ṹ������.��Ա����
	printf("%s\n", e.A1.c);
	printf("%s\n", e.c1);
	printf("%s\n", e.pc);
	printf("%.2lf\n", e.A1.b);
	printf("%c\n", e.A1.d);

	//�ṹ�崫��
	print1(b);//������ʽ���������г�������ʱ��Ҫ����һ������ʽ������ͬ��С���ڴ�ռ䣻����������ڴ�ռ���˷ѣ����һ�ʹ������������ʱ��
			  //����������ʽ����ʱ����Ҫѹջ����������ṹ������Ӵ�����ջ�ṹ�������ԣ����ü����ϵͳ�����½�
	print2(&b);//����ʵ�Σ����۽ṹ���ж�󣬴��ݽ�Ϊ4/8�ֽڵĵ�ַ�����ڼ����ϵͳ�Ŀռ��ʱ�俪�����Ƚ�С

	//������ ѹջ
	//��һ�����ݷ��� ջ �洢�ṹ�У�����ѹջ����
	//��һ��Ԫ��ɾ����������ջ����
	//ջ�������ص��ǣ��Ƚ����������ȳ�
	//��������� ��ǹ���У�����װ����ӵ���ѹ�������棬��󱻴��ȥ

	return 0;
}