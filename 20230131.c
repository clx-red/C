#define _CRT_SECURE_NO_WARNINGS
//д������ÿ����һ��num��1
//#include<stdio.h>
//void Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//дһ������ʵ����������������ֲ���
//#include<stdio.h>
//int binary_search(int array[], int search, int size)
//{
//	int left = 0;
//	int right = size ;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		if (array[middle] < search)
//		{
//			left = middle + 1;
//		}
//		else if (array[middle] > search)
//		{
//			right = middle - 1;
//		}
//		else if (array[middle] = search)
//		{
//			return middle;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int s = 0;
//	scanf("%d", &s);
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, s, se);
//	if (ret == -1)
//		printf("������û������ѯ��������");
//	else
//		printf("�������ҵ�����%d�±�Ϊ%d", s, ret);
//	return 0;
//}

//�����ж�ĳ���Ƿ�Ϊ����
//#include<stdio.h>
//int is_leap_year(int x)//����������'.h'ͷ�ļ�������������'.c'Դ�ļ�
//	{
//		if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//int main()
//{
//	
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//	{
//		printf("%d��������", year);
//	}
//	else
//	{
//		printf("%d�겻������",year);
//	}
//	return 0;
//}


//#include<stdio.h>//�����ж��Ƿ�Ϊ����
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = x; i > 1; i--)
//	{
//		int judgment = 0;
//		judgment = x % i;
//		if ((judgment == 0) && (i != x))
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if(is_prime(a) == 1)
//	{
//		printf("%d������", a);
//	}
//	else
//	{
//		printf("%d��������", a);
//	}
//	return 0;
//}


//#include<stdio.h>
//int f(int* y)//ʵ�Σ�һֱ���ڴ��ַ��main�����еĵ�ַ���Ӧ
//{
//	*y = 1;
//	return *y;
//}
//int F(int x)//�βΣ�ֻ�ڵ��ú���ʱ���ڴ��ַ�����θ��Ƶ�ַ
//{
//	x = 1;
//	return x;
//}
//int main()
//{
//	int b = 10;
//	int c = 0; 
//	int* h = &b;
//	printf("%d\n", h);
//	c = F(b);//��ֵ���ú���
//	printf("%d\n", b);
//	c = F(b);
//	printf("%d\n", c);//������Ч���޸��ββ���Ӱ��ʵ��
//	c = f(h);//��ַ���ú���
//	printf("%d\n", b);
//	c = f(h);
//	printf("%d\n", c);//һֱ��Ч
//	return 0;
//}