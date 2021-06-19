#include <stdio.h>

int* test()
{
	int a = 0;
	return &a;
}

int main()
{
	//指针练习
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	printf("%p\n", pa);
	printf("%p\n", pc);
	//指针类型决定了指针进行解引用操作的时候，能访问的内存空间的大小
	//eg:	int* p;能访问4个字节
	//		char* p;能访问1个字节
	//		double* p;能访问8个字节
	//		(32位操作系统中)

	//对指针的+，- 整数操作
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	//指针类型决定了指针走一步走了多远，即步长

	//指针在数组中的使用
	int arr[10] = { 0 };
	int* p = arr;//arr为数组名，传递首元素地址
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		* p++ = 1;
		printf("%d\t", arr[i]);
	}

	//野指针的概念

	//1.局部指针变量不初始化，被初始化为随机值
	int* p1;//此为野指针，访问此指针变量的地址时为非法的
	//2.指针越界访问，eg:
	int arr_1[10] = { 0 };
	int* p2 = arr_1;
	for (i = 0; i < 12; i++)//这里i的终止条件大于10即会造成越界访问
	{
		p2++;//当p在++越出自己所能管理的arr的范围以外的时候，即为野指针
	}

	//3.指针指向空间释放
	int* p3 = test();
	*p3 = 20;//此时p3指针指向的内存空间已经被释放,为野指针
	//test中的a变量为局部变量，进test函数创建的时候有自己的内存地址空间，但是一旦出test的范围以外，此地址空间就被销毁，类似free()
	//此时虽然p3里能够存储到test函数中a变量的地址，但是该地址空间已经被释放，无法进行操作

	//当创建了一个指针变量，但是不知道给予什么值的时候，可以赋予NULL
	int* p4 = NULL;



	return 0;
}