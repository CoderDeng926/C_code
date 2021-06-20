#include <stdio.h>
#define N_VALUES 5

int my_strlen(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}

int main()
{
	//指针减去指针
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", & arr[9] - &arr[0]);//指针减去指针，得到的是两个指针中间的元素个数
	//将9与0反过来，即用小地址减去大地址
	printf("%d\n", &arr[0] - &arr[9]);//得到的值得绝对值是想要得到的元素个数
	//对于数组类型不同的元素地址不能相减，eg:
	char ch[5] = { 0 };
	//printf("%d\n", &arr[9] - &ch[0]);//ERROR
	//一般指针指针相减，需要这两个指针的地址指向同一片空间，才有意义

	//模拟实现strlen,利用指针减去指针
	char a[5] = "bit";

	int len = my_strlen(a);
	printf("%d\n", len);

	//指针的关系运算，即比较大小
	float values[N_VALUES];
	float* vp;
	for (vp = &values[N_VALUES]; vp > &values[0];)
	{
		*--vp = 0;
	}
	//注意：C语言标准中，允许指向数组元素的指针与指向数组最后一个元素 后面 的内存位置的指针进行比较
	//但是不允许指向数组元素的指针与指向数组第一个元素 前面 的内存位置的指针进行比较

	//指针与数组
	int b[10] = { 0 };
	//数组名b是一个地址，是数组首元素b[0]的地址
	printf("%p\n", b);
	printf("%p\n", &b[0]);
	//两个例外
	//1.&数组名-此时并非数组首元素地址，这时表示整个数组，取出的是整个数组的地址;此地址+1操作后直接跳过整个数组
	//2.sizeof(数组名)，此时数组名表示的是整个数组，sizeof计算的是整个数组的大小
	//除以上两个情况以外，所见到的所有数组名都代表首元素地址

	//二级指针：
	int c = 10;
	int* pc = &c;
	int** ppc = &pc;//ppa就是二级指针，是指存放一个指针变量的内存空间的地址
	//例如int**中，int*为二级指针指向的对象，最后一个*代表此变量为一个指针变量，所以构成了 int**
	** ppc = 20;
	printf("%d\n", **ppc);

	//指针数组 - 此为一个数组，用于存放指针的数组
	//数组指针 - 此为一个指针，用于指向数组的指针
	int a1 = 10;
	int a2 = 20;
	int a3 = 30;
	/*int* p1 = &a1;
	int* p2 = &a2;
	int* p3 = &a3;*/
	int* arr1[3] = { &a1, &a2, &a3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr1[i]));//这里也需要解引用操作
	}

	//解引用操作是指:
	//*变量名，*的意义是利用变量所存放的地址，来找到所对应的的变量


	return 0;
}