
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
/*//enum week  //enumΪö�ٹؼ���
//{
//	monday, tuesday,wednesday,thursday,friday,saturday,sunday
//}; */

//int add(int x, int y)//�Զ��庯��
//{
//	int sum = x + y;
//	return sum;
//}
int main()
{
	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);//�����Զ��庯��
	c = add(a, b);
	printf("%d", c);*/

	/*int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = a + b;
	printf("%d\n", c);
	*/

	/*int a = 2;
	printf("%d\n", a);//2
	a = 6;
	printf("%d\n", a);//6
	const int b = 2;//constʹ��bֵ�㶨
	printf("%d\n", b);//2
	//b = 6;//error
	//printf("%d\n", b);*/

	//enum week tady = monday; //0
	//tady = sunday; //6,yes
	//monday = 1; //error,�����޸�ֵ
	//printf("%d\n", tady); //6
	//printf("%d\n", monday);//0
	//printf("%d\n", tuesday);//1
	//printf("%d\n", sizeof(monday));//4
	//printf("%d\n", sizeof(tuesday));//4

	/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����
	char a[6] = {'1', '2', '3', '4', '5','\0'};
	printf("%s\n", a);
	printf("%c\n", a[3]);
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i] );
		i++;
	}*/
	//char arr1[] = "abc";//����--('a', 'b', 'c','\0'),'\0'�ַ���������־
	//char arr2[] = { 'a', 'b', 'c' ,0};//0��'\0'Ϊ�ַ���������־
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%zd\n", sizeof(arr1));//4
	//printf("%zd\n", sizeof(arr2));//4
	//printf("%zd\n", strlen(arr1));//strlen--string length�ַ�������
	//printf("%zd\n", strlen(arr2));//%zd��ֹ�����%d���ܻᷢ�����
	//printf("%zd\n", strlen("c:\text\32\text.c"));//13, ������һ���ַ���'\dd'(dΪ8����)��'\xdddd'(dΪ16����)
	//printf("%s\n", ("c:\text\32\text.c"));//��Ҫ��ת���ַ�"\"
	//printf("%s\n", ("c:\\text\\32\\text.c"));

	//int a = 10;
	//printf("%o\n", a);//���8������ǰ׺
	//printf("%x\n", a);//���16������ǰ׺
	//printf("%#o\n", a);// ���8������ǰ׺
	//printf("%#a\n", a); //���16������ǰ׺

	//int line = 0;
	//while (line <= 1000)
	//{
	//	printf("%d\n", line);
	//	line++;
	//}
	//if (line >= 1000)
	//{
	//	printf("hello world\n");
	//}
	return 0;
}