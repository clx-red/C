#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//���ֲ������������е��ض�ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = se - 1;
//	int aim = 7;
//	int i = 0;
//	while (left <= right)
//	{
//		if (arr[i] > aim)
//		{
//			right = i;
//		}
//		else if (arr[i] < aim)
//		{
//			left = i;
//		}
//		else if (arr[i] = aim)
//		{
//			printf("Aim���±�Ϊ%d\n", i);
//			break;
//		}
//		 i = (left + right) / 2;
//	}
//	return 0;
//}


//#include<stdio.h>//�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" %d*%d=%-2d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>//�������������ֵ
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i <= se; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}


//#include<stdio.h>//����1/1+1/2-1/3+...-1/100�ĺ�
//int main()
//{
//	int i = 0;
//	double sum = 0.0; 
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//#include<stdio.h>//����1~100֮����ֵ�9����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>//1~200�����������������n�־��硷
// include<math.h>//��ѧ�⺯������sqrt()��ƽ��
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 200; i++)
//	{
//		int a = 0;
//		for (a = 2; a < i; a++)   //for(a = 2; a < sqrt(i); a++)
//		{
//			if (i % a == 0)
//			{
//				break;
//			}
//		}
//		if (i == a)   //if(i >= sqrt(i))
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//#include<stdio.h>//��������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 3000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>//�ܱ�3��������
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>//�Ӵ�С����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		int x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		int x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//#include<stdio.h>//�ַ���������
//#include<stdlib.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = { "Hello 2023!" };
//	char arr2[] = { "***********" };
//	int se = sizeof(arr1);
//	int left = 0;
//	int right = se - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	printf("%s", arr2);
//		return 0;
//}
