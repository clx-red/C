#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()//����1!+2!+3!+...+n!
//{
//	int sum = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for ( a = 1; a <= n; a++)
//	{
//		int i = 1;
//		int num = 1;
//		for (int b = a; i <= b; i++)
//		{
//			num = num * i;
//		}	
//		sum = sum + num ;
//	}
//	printf("%d\n", sum);
//	//�����Ż�
//	int sum1 = 0;
//	int ret = 1;
//	for(a = 1; a <= n; a++)
//	{
//		ret = ret * a;
//		sum1 = sum1 + ret;
//	}
//	printf("%d\n", sum1);
//	return 0;
//}


//int main()//����n�Ľ׳�
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		sum = i * sum;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);//break,continue����Ч��Ҳ������ѭ���ͽ�����ǰѭ��
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)//2��ѭ��
//	{
//		printf("Hello\n");
//	}
//	for (x = 0, y = 0;  y = 0; ++x, ++y)//0��ѭ���жϾ䣺";y = 0;" Ϊ��
//	{
//		printf("Hello\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	//for (; ; )//forѭ����ʼ��exp1���ж�exp2������exp3������ʡ�ԣ��ж�ʡ�Ժ�Ĭ��ȫΪ��
//	//{
//	//	printf("Hello 2023");
//	//}
//	for (a = 0; a < 10; a++)
//	{
//		for (b = 0; b < 10; b++)  //for( ;b < 10; b++)--printf: 1-10
//		{
//			static int c = 0;
//			c = c++;
//			printf("%d\n",c);//1-100
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)//for(exp1; exp2; exp3)
//	{
//		if (5 == i)
//		{	
//			//break;//1234
//		   //continue;//1234678910
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')//ֻ���1-9����(ascii��)
//			continue;
//		else
//			putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char m[6] = { 0 };
//	printf("���������룺");
//	scanf("%s", m);
//	while(getchar() != '\n');//ѭ����ȡ���������ַ���ֱ��������Ϊ�գ�Enter�ַ�Ϊ'\n'
//	{; }
//	printf("��ȷ��y/n��");
//	char ret = getchar();//����������Ϊ�����Զ���ȡ���������ݣ������˵ȴ�����
//	if (ret == 'y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}