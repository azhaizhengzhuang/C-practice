#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int* test()//ָ����ָ����ڴ�ռ䱻�ͷ���������Ұָ������
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p=test();
//	*p = 10;//Ұָ��
//	return 0;
//}

//

//int main()//ָ���������ָ��Ӽ�������ʵ��
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���arr������������
//	int* p = &arr;//���arr������Ԫ�ص�ַ
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);//���1��10
//	//	p++;
//	//}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}
//	return 0;
//}

//

//int my_strlen(char* str)//��ָ���ָ���֪ʶʵ��my_strlen
//{
//	char* start = str;//���ڴ����Ԫ��ָ��ı���
//	char* end = str;//���ڴ��ĩԪ�ص�ַ�ı���
//	while (*end != '\0')//���н����ã�ֱ���ҵ�/0�ĵ�ַΪֹ
//	{
//		end++;
//	}
//	return end - start;//Ԫ���Ǿ��������������ĵ�ַ��ָ���ָ�뼴�м��Ԫ�ظ���
//}
//
//int main()
//{
//	char arr[] = "fuckyou";
//	printf("%d\n", my_strlen(arr));//���Ϊ7 nice
//	return 0;
//}

//int main()//ָ��Ĺ�ϵ����
//{
//	int arr[5];
//	int* vp;
//	for (vp = &arr[5]; vp < arr[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

//

//int main()//���������⣨sizeof��&��,����������Ԫ�ص�ַ
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p === %p\n", p + i, &arr[i]);//������ȫ�ȼ�
//	}
//	return 0;
//}

//
//int main()//ָ������Ĳ��Դ���
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);//���10 20 30
//	}
//	return 0;
//}

//

//int main()
//{
//	int a[3][4] = { { 1, 2 }, { 3, 4 } };
//	int b[][4] = { { 1, 2 }, { },{ 3, 4 } };
//	return 0;
//}

//

//void init(int* arr,int sz)//��ʼ������ȫ��Ϊ�� 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
void print(int* arr, int sz)//��������д�ӡ
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
//
//void reverse(int* arr, int sz)//������Ԫ�ؽ��е�ת
//{
//	int left = 0;
//	int right = sz - 1;
//	while (right>left)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr1[10] ;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//Ϊ�˷�ֹ�����С��ʧ��������Ԫ�ظ�����Ϊ��������������
//	init(arr1,sz);
//	print(arr1, sz);
//	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11 ,12};
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	reverse(arr2,sz2);
//	print(arr2,sz2);
//	return 0;
//
//}
//
//int main()//��������ͬ��С����������ݽ����滻
//{
//	int i = 0;
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int arr2[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1,sz);
//	printf("\n");
//	print(arr2,sz);//͵��������һ��֮ǰд�Ĵ�ӡ���麯������Ч��
//}

//int main()//֤���������ڴ�����"��"�Ŵ洢��
//{
//	int a = 0x11223344;
//	char* p = (char*)&a;
//	*p = 0;
//	printf("%x\n", a);//���11223300
//	return 0;
//}

//int main()//֤����-1ת��Ϊ�޷�������ֵ�Ǻܴ��
//{
//	int i = -1;
//	if ((unsigned int)i > 99999)
//		printf("get it\n");
//		return 0;
//}

//int main()//֤����ֵ���ʽ�����ȼ����ڶ��ű��ʽ
//{
//	int a = 0;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	a = b, c, d;//������Ϊ2
//	printf("%d\n", a);
//	return 0;
//}

//int main()//�����������������в�ͬλ�ĸ���
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int count = 0;
//	printf("����������������>");
//	scanf("%d%d", &a, &b);
//	unsigned int c = a^b;
//	for (i = 0; i < 32; i++)
//	{
//		if ((c >> i)&1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//int main()//���Ʋ�������Ҳ�ᱣ������λ
//{
//	printf("%d\n", -1 << 1);
//	return 0;
//
//}

//void odd_binary(num)
//{
//	printf("����λ�����ƴ�ӡ��>");
//	if (num >= 0)//���жϷ���λ      ���ʵ�����Ƕ��һ�ٵ� �����ص��жϷ���λ ��Ϊ����һ��֮�� ԭ����λ�ǲ��ᶪʧ�� Ҳ������һ�� ����������ֻҪ����31λ���ܰ�
//	{
//		printf("0");//����λ�Ƶ��ұ�ȥ�� Ҳ����forѭ��iֱ�ӳ�ʼ��Ϊ31
//	}
//	else
//	{
//		printf("1");
//	}
//	int i = 0;
//	for (i = 29; i >= 0; i-=2)
//	{
//		if ((num >> i) & 1)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//void even_binary(num)
//{
//	printf("ż��λ�����ƴ�ӡ��>");
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if ((num >> i) & 1)
//		{
//			printf("1");
//		}
//		else
//		{
//			printf("0");
//		}
//	}
//	printf("\n");
//}
//
//int reverse_odd_even_binary(int num)//����������ż��λ���� �ѵ�����
//{
//	int tmp = 0;
//	int i = 0;
//	for (i = 31; i >= 0; i--)
//	{
//		if ((i % 2)==0)//����λ���ж����Ƿ�Ϊ1
//		{
//			if ((num >> i)&1)
//			{
//				tmp|=(1 << (i+1));//��Ϊ1����ʱ�����ĵ�i+1λ������λΪ1
//			}
//		}
//		else//ż��λ���ж����Ƿ�Ϊ1
//		{
//			if ((num >> i) & 1)
//			{
//				tmp |= (1 << (i - 1));//��Ϊ1����ʱ�����ĵ�i-1λ������λΪ1
//			}
//		}
//	}
//	return tmp;
//}
//
//int main()//����λ��������ϰ�⣬ʹ��λ��������ʱ��Ҫһ˿��������΢һ�����Ų�һ�������Ȼ�෴
//{
//	int num = 0;
//	int i = 0;
//	printf("������һ��������>");
//	scanf("%d", &num);
//	odd_binary(num);
//	even_binary(num);
//	int rev=reverse_odd_even_binary(num);
//	printf("��ת��\n");
//	odd_binary(rev);
//	even_binary(rev);
//	printf("��ת�������ֵ��%d", rev);
//	return 0;
//}

//

//int main()//��������ʱ��������������������ֵ �����������ֵ ���Ӽ�����Ⱥô��ǲ������
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//��������ȡ��ַ����дֱ�ӱ���
//	a = a^b;//a���ڴ洢ab������ֵ b�洢b
//	b = a^b;//a������ֵ b��a
//	a = a^b;//a��b b��a
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//int main()//��ͨ�������±���������Ԫ�� ͨ��ָ���ӡ����Ԫ��
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11,12};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}

//int main()//����֮�� ����λҲ���ƶ���
//{
//	int a = -1;
//	printf("%d\n", a >>31);//-1
//	return 0;
//}

int main()//����ؼ���ĳ�������ж�����������1�ĸ��� ����㷨
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	while (a)
	{
		a &= (a - 1);//ÿ�����㶼��������ұߵ�1
		count++;
	}
	printf("����1��%d��",count);
	return 0;
}