#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);//&a--ȡ��ַ
//	int* p = &a; //pΪһ����ŵ�ַ�ı���--ָ��
//	printf("%p\n", p);
//	*p = 20;//* --�����ò��������ҵ��ĵ�ַ����aֵΪ20
//	printf("%d\n", a);
//	printf("%zd\n", sizeof(p));
//	return 0;
//}


//#define ADD(A, B) (A + B)//define����ĺ��뺯������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 5;
//	int num2 = 6;
//	int sum1 = 0;
//	int sum2 = 0;
//	sum1 = ADD(num1, num2);
//	sum2 = Add(num1, num2);
//	printf("%d\n%d\n", sum1, sum2);
//}


//void cycle()
//{
//	 static int a = 1;//static���ξֲ�����ʱ�����ӳ��ֲ���������������
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 1;
//	while (i < 5)
//	{
//		cycle();
//		i++;
//	}
//	extern int extern_a;//static����ȫ�ֱ���ʱ��������ȫ�ֱ����������򣬾�̬ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//	                                 //static���κ���ʱ�ı��˺������������ԣ����ⲿ���ӱ���ڲ�����
//	printf("%d\n", extern_a);
//	return 0;
//}


//exp1 ? exp2 : exp3 //���exp1Ϊ����ִ��exp2�����exp1Ϊ����ִ��exp3
//int main()
//{
//	int a = 4;
//	int b = 3;
//	int max = 0;
//	int min = 0;
//	int m = 5;
//	max = (a > b ? a : b);
//	printf("%d\n", max);
//	min = (a > b ? b : a);
//	printf("%d\n", min);
//	m -= 3;
//	printf("%d\n", m);
//	return 0;
//}


//ԭ�����λ���䣬���ఴλȡ�� = ���룬����+1 = ����
//�����ڴ��д�����ǲ���
//��ӡ���ʱʹ�õ���ԭ��
//11111111111111111111111111111111 //����
//11111111111111111111111111111110 //���� 
//10000000000000000000000000000001 //ԭ�� -1


//int main()
//{
//	int num = 1;
//	int i = 0;
//	while (i <= 10)
//	{
//		num = num << 1;
//		printf("%d\n", num);
//		i++;
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	char arr1[] = { '1','2',0 };
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", strlen(arr1));
//	return 0;
//}


//int F(int a, int b)
//{
//	if ( a > b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 =0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	max = F(num1, num2);
//	printf("%d\n", max);
//	return 0;
//}
