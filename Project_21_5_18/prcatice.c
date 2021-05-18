#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	//牛客网 编程初学者入门训练
	//DAY5

	//BC46
	//char arr[] = "aeiouAEIOU";
	//char letter = 0;
	//while (~scanf_s(" %c", &letter))
	//{
	//	getchar();
	//	int i = 0;
	//	for (i = 0; i < 10; i++)//不理解这样的写法
	//	{
	//		if (letter == arr[i])
	//		{
	//			printf("Vowel\n");
	//			break;
	//		}
	//	}
	//	if (i == 10)//必须在循环外判断打印，但是此条件不明白
	//		printf("Consonant\n");
	//}
		
	//char ch = 0;
	//char arr[] = "AEIOUaeiou";
	//while (scanf_s("%c\n", &ch) != EOF) 
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		if (ch == arr[i]) 
	//		{
	//			printf("Vowel\n");
	//			break;
	//		}
	//	}
	//	if (i == 10)
	//	{
	//		printf("Consonant\n");
	//	}
	//}

	//BC47
	//char word = NULL;
	//while (~scanf_s(" %c", &word))
	//{
	//	getchar();
	//	if ((word >= 'a' && word <='z') || (word >= 'A' && word <= 'Z'))
	//	{
	//		printf("%c is an alphabet.\n", word);
	//	}
	//	else
	//	{
	//		printf("%c is not an alphabet.\n", word);
	//	}
	//}

	//BC48
	//char word = 0;
	//while (scanf_s("%c", &word,sizeof(word)) == 1)
	//{
	//	if (word >= 'A' && word <= 'Z')
	//	{
	//		printf("%c\n", word + 32);
	//	}
	//	else if (word >= 'a' && word <= 'z')
	//	{
	//		printf("%c\n", word - 32);
	//	}
	//}

	//BC49
	//unsigned int num1 = 0, num2 = 0;
	//while (scanf_s("%u %u", &num1, &num2) == 2)
	//{
	//	getchar();
	//	if (0 == num1 - num2)
	//	{
	//		printf("%u=%u\n", num1, num2);
	//	}
	//	else if (num1 < num2)
	//	{
	//		printf("%u<%u\n", num1, num2);
	//	}
	//	else { printf("%u>%u\n", num1, num2); }
	//}

	//BC50
	//float t = 0;
	//while (scanf_s("%f", &t) == 1)
	//{
	//	if (0 == t)
	//	{
	//		printf("0.5\n");
	//	}
	//	else if (t > 0)
	//	{
	//		printf("1\n");
	//	}
	//	else { printf("0\n"); }
	//}

	//BC51
	//int a = 0, b = 0, c = 0;
	//while (scanf_s("%d %d %d", &a, &b, &c) == 3)
	//{
	//	if (a + b > c && a + c > b && b + c > a)
	//	{
	//		if (a == b && a == c)
	//		{
	//			printf("Equilateral triangle!\n");
	//		}
	//		else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
	//		{
	//			printf("Isosceles triangle!\n");
	//		}
	//		else { printf("Ordinary triangle!\n"); }
	//	}
	//	else { printf("Not a triangle!\n"); }
	//}


	//BC52
	int weight = 0;
	float height = 0;
	float BMI = 0;
	while (scanf_s("%d %f", &weight, &height) == 2)
	{
		getchar();
		height = height / 100;
		BMI = weight / pow(height, 2);
		if (BMI < 18.5)
		{
			printf("Underweight\n");
		}
		else if (BMI >= 18.5 && BMI<= 23.9)
		{
			printf("Normal\n");
		}
		else if (BMI > 23.9 && BMI <= 27.9)
		{
			printf("Overweight\n");
		}
		else { printf("Obese\n"); }
	}
	return 0;
}