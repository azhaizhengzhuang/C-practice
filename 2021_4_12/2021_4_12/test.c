#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>





//int main()//���Ե��Ի����´�����������  ��Debug�����л������ѭ�� ��Release�����в�����ֳ������      
//{
//	int i = 0;//�ڵ�����ͨ�����Ӵ��ڷ��� arr[12]��i�ĵ�ַ��һ���� ��arr[12]��ֵ���ڸ�i��ֵ
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("haha\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()//������������Լ������Ĳ��Ժ���
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	return 0;
//}

//void fun()//�������鿴�����ݹ�ʱ��ִ���߼�
//{
//	static c = 10;
//	if (c > 0)
//	{
//	   fun(--c);//���ֵ�c������� �������˳�ѭ�� �������˳������������뱻���õĲ��ּ���ִ�� 
//	}//ʵ���ϵݹ�ʱһ�ֺ�����Ƕ�ף����������� �ͷ��ص����� 
//}
//
//int main()
//{
//	fun();
//	return 0;
//}
//int quanju;
//int main()//���Լ��� �Զ����ں;ֲ���������
//{
//	{
//		int emp = 10;
//		printf("fuck you");
//	}
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

//void test3()
//{
//	printf("sb\n");
//}

//void test2()
//{
//	test3();
//}
//
//void test1()
//{
//	test2();
//}
//
//int main()//���ö�ջ���Դ���
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

int main()//���Ե��Ի����´�����������  ��Debug�����л������ѭ�� ��Release�����в�����ֳ������      
{
	int i = 0;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("arr:%p\n",&arr);//degbug������arr�ĵ�ַ��i�� ��release�汾��arr�ĵ�ַ�ֱ�i��
	printf("i:%p\n", &i);
	/*for (i = 0; i <= 12; i++)
	{
		printf("haha\n");
		arr[i] = 0;
	}*/
	system("pause");
	return 0;
}