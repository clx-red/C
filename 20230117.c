#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{ 
//	char arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", &arr);
//		int strcmp();
//		if (strcmp(arr, "123456") == 0)//strcmp()�����ж��ַ����Ƿ���ȣ��������򷵻�ֵΪ0������ֱ����==�ж��ַ����Ƿ���ȡ�
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//		else
//		{
//			static int a = 3;
//			--a;
//			printf("�������!����%d�λ���\n", a);
//		}
//			
//	}
//	if (i == 3)
//		{
//            printf("���˳�!\n");
//		}
//	return 0;
//}

//
//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = { "Hello World!" };
//	char arr2[] = { "############" };
//	int se = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	int right = se - 2;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//#include<windows.h>ΪSleepͷ�ļ���Sleep()--�ӳٷ�ӳ1000��λΪ����
//		left++;
//		right--;
//		if ((right - left >= 1))
//		{
//			system("cls");//#include<stdlib.h>Ϊϵͳ����ͷ�ļ���system()Ϊϵͳ���'cls'--����
//		}
//	}
//	return 0;
//}


//���ֲ����㷨
//#include<stdio.h>
//int main()
//{
//	int k = 7;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;//���±�
//	int right = se - 1;//���±�
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//˳�����
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int se = sizeof(arr) / sizeof(arr[0]);
//	printf("%zd% zd\n", sizeof(arr), sizeof(arr[0]));
//	for(i = 0; i < se; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ����±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (i == se)
//			printf("�Ҳ���");
//	return 0;
//}