#include <stdio.h>

//结构体

//描述一个学生
//名字
//性别
//年龄
//电话
//学号

//struct 是结构体关键字		stu 是结构体标签		struct stu 是结构体类型
struct stu
{
	//成员变量
	char name[10];
	char sex[2];
	int age;
	char tele[12];
	long stu_num;
}s1, s2, s3;//这个';'非常重要不可忽略，因为结构体声明是一个语句
//这里的s1,s2,s3是声明结构体类型时创建的全局结构体变量，函数内利用结构体创建的变量为局部变量
//但是一般不使用全局变量


typedef struct Stu
{
	//成员变量
	char name[10];
	char sex[5];
	int age;
	char tele[12];
	long stu_num;
}Stu;//这里的typedef是为了把结构体名称重新命名为';'前的名称
	 //即 Stu 为类型，不是全局变量
	 //并且也可以使用struct Stu

//更复杂一点的结构体类型
//利用结构体类型中的成员变量含有别的结构体类型
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
	struct stu a = { "djq", "男", 22, "12345678900", 20187160550 };
	Stu b = { "lw", "女", 23, "12345678901", 20187160 };
	char arr[20] = { "I LOVE LW" };
	struct B e = { {1, 1.5, "你好", 'D'}, "hello world!", arr};//嵌套结构初始化
	//输出结构体内的成员变量
	//使用 结构体名称.成员变量
	printf("%s\n", e.A1.c);
	printf("%s\n", e.c1);
	printf("%s\n", e.pc);
	printf("%.2lf\n", e.A1.b);
	printf("%c\n", e.A1.d);

	//结构体传参
	print1(b);//传递形式参数，进行程序运行时需要开辟一块与形式参数相同大小的内存空间；这样会造成内存空间的浪费，并且会使程序增加运行时间
			  //函数传递形式参数时，需要压栈操作，如果结构体过于庞大，由于栈结构的特殊性，会让计算机系统性能下降
	print2(&b);//传递实参，无论结构体有多大，传递仅为4/8字节的地址，对于计算机系统的空间和时间开销都比较小

	//补充概念： 压栈
	//把一个数据放入 栈 存储结构中，叫做压栈操作
	//把一个元素删除，叫做出栈操作
	//栈的数据特点是：先进后出，后进先出
	//可以想像成 步枪弹夹，最先装入的子弹被压到最下面，最后被打出去

	return 0;
}