#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d", add(a, b));//��������ʽ����
//	return 0;
//}//�ɹ�

//int main()//��򵥵ĵݹ飬���Ϊhehe��ѭ����Ȼ������ջ�������ʾ
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int x)//���ǵݹ��һ������ Ŀǰ��������Ҫ�ĵݹ�˼���� �Դ�С 
//{
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//	printf("%d ", x % 10);
//}
//
//int main()
//{
//	unsigned int sum = 0;
//	scanf("%d", &sum);//������ȡ��ַ��
//	print(sum);
//	return 0;
//}


//main()
//{
//	char arr[] = { "fuck the world" };
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* str)//һ�����ַ������ȵĺ���
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//������Ϊ��������ʱ������ʱ��Ԫ�ص�ַ����ַ+1������һ��Ԫ�صĵ�ַ
//	}
//	return count;
//}

//char* my_strlen(char* str)//��ĿҪ���ڲ�ʹ����ʱ�����������£�д��һ���������ڼ����ַ�������
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//ע�⣬�ݹ�����ĺ����ķ���ֵ�������øú����ĵط�������ǲ��õ��ĵݹ����ַ��ض��ֵ��main���������
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "fuck the world";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int fac(int x)//��ѭ���ķ���дһ����׳˵ĺ���
//{
//	int i = 0;
//	int y = 1;
//	for (i = 1; i <= x; i++)
//	{
//		y *= i;
//	}
//	return y;
//}

//int fac(int x)//���õݹ�ķ�ʽдһ����׳˵ĺ���
//{
//
//	if (x > 1)
//	{
//		return x *= fac(x - 1);
//	}
//	else
//	{
//		return x = 1;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", fac(num));
//
//}

//int fa(int x)//���õݹ������n��쳲�������
//{
//	if (x > 2)//��nԽ����Ҫ��������ǳ�ָ���������ģ���˶�����쳲���������˵���ݹ鲻��һ��̫���ʵ��㷨
//	{
//		return fa(x - 1) + fa(x - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}

//int fa(int x)//�Լ�д��һ���ܴ�Ŀ�ѭ����ʵ�ֵ�쳲�������������ȵݹ���˵�����ٶ�Ӧ�û��ǿ��˺ܶ��
//{
//	int sum = 0;
//	int num1 = 0;
//	int num2 = 1;
//	int i = 0;
//	int ret = 0;
//	if (1 == x)
//	{
//		return 1;
//	}
//	for (i = 2; i <= x; i++)
//	{
//		ret = num2;
//		num2 = num1 + ret;
//		num1 = ret;
//	}
//	return num2;
//}

//int fa(int x)//��ʦд�Ĵ��룬����ԣ�һ��˫��
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//
//
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", fa(num));
//}

//int main()//��������С��ϰ
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}

//int han_nuo_ta(int x)//��ŵ������
//{
//
//	if (x > 1)
//	{
//		return 1 + 2 * han_nuo_ta(x - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", han_nuo_ta(num));
//	return 0;
//}

//
#include<string.h>
//int main()//��ѭ�����δ�ӡ�ַ�����Ԫ�صĵ�ַ
//{
//	int i = 0;
//	char arr[] = "fuck the world";
//	int len = strlen(arr);//strlen����ֵĬ��Ϊ�޷������Σ�ֱ��ǿ��ת��Ϊ�з������Σ�������ܻᱨ��
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i,&arr[i]);
//	}
//	return 0;
//}
//int main()//��ѭ�����δ�ӡ��������Ԫ�صĵ�ַ
//{
//	int i = 0;
//	int arr[] = {1,2,2,4,5,6,6,7,78,6,5};
//	int len = sizeof(arr);//������4���ٴ�֤���������ڴ�����������ŵ�
//	for (i = 0; i < len; i++)
//	{
//		printf("arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

//int main()//����Ԫ�ظ�ֵ������ü��Ӵ��ڲ鿴
//{
//	int arr[4][4] = { {1,2},{4,5} };//��λ�����ʼ������ʡ���У�������ʡ����
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

void test_print (int* arr)
{
	int sz = sizeof(arr);
	printf("%d\n%d\n", arr[2],sz);
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	test_print(arr);
	return 0;
}