#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()//ָ��������
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x\n", ptr1[-1], *ptr2);
//	return 0;
//}
//
//int main()//��ָ̬��������
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//void print1(int a[2][3])
//{
//	printf("%d\n", a[1][1]);
//}
//
//void print2(int(*p)[3])
//{
//	printf("%d\n", p[1][1]);
//}
//
//int main()
//{
//	int a[2][3] = { { 1, 2, 3 }, { 2, 3, 4 } };
//	/*print1(a);
//	print2(a);*/
//	return 0;
//}

//int main()//���������
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int ret = 0;//��ų���
//	int reta = 1;
//	int retb = 1;
//	printf("��������������ε�����:>");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)//��������ε�����ʵ��������������±���ϱ�
//	{
//		for (j = 0; j <= i; j++)
//		{
//			for (ret=i; ret >= (i-j + 1); ret--)//reta���������ķ���
//			{
//				reta *= ret;
//			}
//			for (ret=1; ret<=j ; ret++)//retb���������ķ�ĸ
//			{
//				retb *= ret;
//			}
//			printf("%4d ", reta / retb);//��ӡ�����
//			reta = 1;
//			retb = 1;//���ӷ�ĸ��Ϊ1
//		}
//		printf("\n");//����
//	}
//	return 0;
//}

//1
//1 1
//1 2 1
//1 3 3 1 
//1 4 6 4 1
//1 5 10 10 5 1

//int main()//��������ʽ��ӡ�̶����������������
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 &&i>j&&j>0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j<=i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()//�ж�˭������(�Լ�д��) ���㽲�ٻ�����
//{
//	int real = 0;//real��ʾ�ƶ�˭������
//	for (real = 1; real <= 4; real++)
//	{
//		int false = 0;//����ÿ�εļٻ��ĸ���
//		if (real == 1)
//		{
//			false++;
//		}
//		if (real != 3)
//		{
//			false++;
//		}
//		if (real != 4)
//		{
//			false++;
//		}
//		if (real == 4)
//		{
//			false++;
//		}
//		if (false == 1)
//		{
//			break;
//		}
//	}
//	printf("������%c\n", real + 64);
//	return 0;
//}

/*int main()*///��ʦд���ж����ִ��� ���㽲�滰����
//{
//	int killer = 0;//�ַ������ܽ��м򵥵ıȽ� Ϊ�˱��ڱȽ� ��killer����Ϊ���� �ٸ����ַ�ASCII��
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)//��������Ϊ1 ��Ϊ0�����Լ����˽��滰������
//			printf("killer=%c\n", killer);
//	}
//	return 0;
//}

//int main()//��ˮ��������
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)//ѡ�ֵ�����ֻ������1-5�е�ֵ
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1)==1) &&
//							(a*b*c*d*e == 120))
//						{
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()//֤����ͬ�ĳ����ַ������ᴴ������
//{
//	char* p1 = "fuck";
//	char* p2 = "fuck";
//	if (p1 == p2)
//	{
//		printf("amazing!\n");
//	}
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

int int_compare(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void print_arr(int* a, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
}

int char_compare(const void* e1,const void* e2)
{
	return (int)(*(char*)e1 - *(char*)e2);
}

int sort_by_age(const void* e1, const void* e2)
{
	return (int)(((struct Stu*)(e1))->age - ((struct Stu*)(e2))->age);
}
//int main()//��ϰʹ��qsort���������������
//{
//	//int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };//��������
//	//qsort(arr,10,4,int_compare);
//	//print_arr(arr, 10);
//	//char arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };//�ַ�����
//	//qsort(arr, 10, 1, char_compare);
//	struct Stu s[3] = { {"zhangsan",18}, {"lisi",10}, {"wangwu",20} };
//	qsort(s, 3, sizeof(s[0]), sort_by_age);
//	return 0;
//}

void swap(char*e1, char*e2,int sz)//һ���ֽ�һ���ֽڵؽ���
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		char tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++;
		e2++;
	}
}

void bubble_sort(void* base, int length, int sz,int (*compare)(const void* e1,const void* e2) )//��qsort������˼��Ľ�bubble_sort
{
	int i = 0;
	int j = 0;
	for (i = 0; i < length - 1; i++)//ȷ��ð���������
	{
		for (j = 0; j < length - i - 1; j++)//ÿ��ð������ȽϵĴ���
		{
			if (compare((char*)base+(sz*j),(char*)base+(sz*(j+1)))>0)//�ص�compare�������������ֵ�����㣬˵��ǰ���Ԫ�ش��ں��棬Ҫ�����滻
			{
				swap((char*)base + (sz*j), (char*)base + (sz*(j + 1)),sz);//��������Ԫ�� һ���ֽ�һ���ֽڽ���
			}
		}
	}
}

int main()
{
	//int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//int lengh = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr,lengh,sizeof(arr[0]),int_compare);
	//print_arr(arr,lengh);

	return 0;
}

