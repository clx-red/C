#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int  main()
//{
//	printf("Please input y/n :");
//    char ch = getchar();
//	if (ch == 'y')
//	{
//		printf("%c\n", ch);
//		putchar(ch);
//	}
//	else
//		printf("smile");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i++;
//		if (i % 2 == 0)
//			continue;//��ֹ����ѭ�����ص�while�ж�
//		printf("%d\n", i);//��ӡ1-100�Ļ���
//	}
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 8)
//			break;//����ѭ��
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch(����)������Ƕ��ʹ��
//	{
//	case 1://case ���γ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	default:
//		printf("������1-3����\n");
//		break;
//	}
//	return 0;
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//�����˳�����У�����break����switch
//	case 2:
//		n++;
//	case 3:
//		switch (n)//Ƕ��
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("%d %d", m, n);//m == 5 ,n == 3
//	return 0;
//}


//int main()
//{
//	int a = 19;
//	int b = a % 2;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 1;
//	scanf("%d", &a);
//	if (a % 2 == 0)//�ж�һ��������ż��
//		printf("%d��ż��\n", a);
//	else
//		printf("%d�ǻ���\n", a);
//	while (b <= 100)//��ӡ1-100֮��Ļ���
//	{
//		if (b % 2 == 1)
//		{
//			printf("%d\n", b);
//		}
//		b++;
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;                                                                     //int a = 0;
//	int b = 2;                                                                     //int b = 2;
//	if (a == 1)                                                                    //if( a == 1)
//		if (b == 2)                                                                   //if( b == 2)
//			printf("//����else");                                                   //pritnf("//д����ͬ��Ч��һ��");
//		else                                                                           //else
//			printf("//else�������δƥ���ifƥ��");              //printf("//��ǰ�����һ��ƥ��if( b == 2)");
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n%d", a, b);
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	printf("%d��\n", age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age <= 28)
//	{
//		printf("����\n");
//		printf("ҪŬ��\n");
//	}
//	else if (age > 28 && age <= 50)
//		printf("׳��\n");
//	else
//		printf("����\n");
//	return 0;
//}