#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//��Ҫ���Բ��ػ����Ⱥú�ѧ��ѧ��
//#include<stdlib.h>
//int main()
//{
//cycle:
//	system("shutdown -s -t 60");
//	printf("��ĵ��Խ���1���Ӻ�ػ����ش�\"��cosx dx =��+ C\"����ػ������������ǰ��ӿո�\n==>:");
//	int arr[20] = { 0 };
//	scanf("%s", &arr);
//	if (strcmp(arr, "sinx") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto cycle;
//	}
//	return 0;
//}


//#include<stdio.h>//��������Ϸ2.0
//#include<stdlib.h>
//#include<windows.h>
//void game()
//{
//	int ret = 0;
//	ret = rand()%100 + 1;
//	printf("���������1-100֮��һ����������³�������>:");
//	int input = 0;
//	int i = 0;
//	for (i = 1;; i++)
//	{
//		scanf("%d", &input);
//		if (input > ret)
//		{
//			printf("��´��ˣ����ٴγ���>:");
//		}
//		else if (input < ret)
//		{
//			printf("���С�ˣ����ٴγ���>:");
//		}
//		else
//		{
//			printf("��ϲ�㾭��%d�κ�µ�����ȷ����%d\n", i, ret);
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("********************\n");
//	printf("*    ��  ѡ  ��    *\n");
//	printf("*      1:play      *\n");
//	printf("*      0:exit      *\n");
//	printf("********************\n");
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int judgment = 0;
//	do {
//		menu();
//		scanf("%d", &judgment);
//		switch (judgment)
//		{
//		case(1):
//			system("cls");
//			printf("���Եȣ�");
//			Sleep(1000);
//			system("cls");
//			game();
//			break;
//		case(0):
//			system("cls");
//			printf("���Եȣ�");
//			Sleep(1000);
//			system("cls");
//			printf("�ɹ��˳���Ϸ��");
//			break;
//		default:
//			system("cls");
//			printf("���Եȣ�");
//			Sleep(1000);
//			system("cls");
//		}
//	} while (judgment != 0);
//	return 0;
//}


//#include<stdio.h>//��������Ϸ1.0
//#include<stdlib.h>
//#include<time.h>
//int main()
//{
//	int ret = 0;
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	int cycle = 0;
//	do
//	{
//		system("cls");
//		ret = rand() % 100 + 1;
//		for (int i = 1; ; i++)
//		{
//			printf("��������µ����֣�");
//			scanf("%d", &input);
//			if (input > ret)
//			{
//				printf("��´���!\n");
//			}
//			else if (input < ret)
//			{
//				printf("���С��!\n");
//			}
//			else if (input = ret)
//			{
//				printf("��ϲ�㾭��%d�γ��Ժ������ȷ����%d!\n", i, ret);
//				break;
//			}
//		}
//		printf("�Ƿ�����һ����ѡ��\"1/0\">:");
//		scanf("%d", &cycle);
//	} while (cycle == 1);
//	return 0;
//}
