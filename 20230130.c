#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//����ƪ
//void swap(int x, int y)
//{
//	int temporary = 0;
//    temporary = y;
//	y = x;
//	x = temporary;
//}
//void swap2(int* pa, int* pb)
//{
//	int temporary2 = 0;
//	temporary2 = *pa;
//	*pa = *pb;
//	*pb = temporary2;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int* pa = &a;
//	int* pb = &b;
//	printf("%d %d\n", a, b);
//	swap(a, b);
//	printf("%d %d\n", a, b);
//	swap2(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
// 
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int Max = 0;
//	scanf("%d%d", &a, &b);
//	Max = max(a, b);
//	printf("%d", Max);
//	return 0;
//}


//ѧϰ�ĵ���MSDN��cplusplus��վ��cppreference��վ 


//#include<stdio.h>
//int main()
//{
//	char arr[] = { "hello world!" };
//	memset(arr, '*', 5);
//	printf("%s\n", arr);// '***** world!'
//	// memset -- memory set - �ڴ�����
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = { "hello" };
//	char arr2[20] = {"world!"};// "\0"Ϊ�ַ��ܽ�����־
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strlen --string lenght - �ַ������ȣ�strcpy -- string copy - �ַ�������
//	return 0;
//}